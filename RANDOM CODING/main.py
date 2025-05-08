import pandas as pd
from PIL import Image
import tkinter as tk
from tkinter import filedialog, messagebox

def read_excel(file_path):
    try:
        df = pd.read_excel(file_path)
        return df
    except Exception as e:
        messagebox.showerror("Error", f"Error reading Excel file: {e}")
        return None

def write_excel(dataframe, file_path):
    try:
        dataframe.to_excel(file_path, index=False)
        messagebox.showinfo("Success", f"Data written to {file_path} successfully.")
    except Exception as e:
        messagebox.showerror("Error", f"Error writing to Excel file: {e}")

def convert_image(input_path, output_path):
    try:
        with Image.open(input_path) as img:
            # Convert RGBA to RGB if necessary
            if img.mode == 'RGBA':
                # Create a new image with a white background
                background = Image.new('RGB', img.size, (255, 255, 255))
                background.paste(img, (0, 0), img)  # Paste the RGBA image on the background
                img = background
            
            img.save(output_path)  # Save the image in the desired format
            messagebox.showinfo("Success", f"Image converted and saved to {output_path}.")
    except Exception as e:
        messagebox.showerror("Error", f"Error converting image: {e}")

def convert_csv_to_excel(csv_file_path, excel_file_path):
    try:
        df = pd.read_csv(csv_file_path)
        df.to_excel(excel_file_path, index=False)
        messagebox.showinfo("Success", f"CSV converted to Excel and saved to {excel_file_path}.")
    except Exception as e:
        messagebox.showerror("Error", f"Error converting CSV to Excel: {e}")

def select_file_type():
    file_type = messagebox.askquestion("Select File Type", "What type of file do you want to upload?\n\n1. Excel (.xlsx)\n2. Image (.png, .jpg)\n3. CSV (.csv)")
    if file_type == 'yes':
        return 'excel'
    elif file_type == 'no':
        file_type = messagebox.askquestion("Select File Type", "What type of file do you want to upload?\n\n1. Image (.png, .jpg)\n2. CSV (.csv)")
        if file_type == 'yes':
            return 'image'
        else:
            return 'csv'
    return None

def upload_file():
    selected_type = select_file_type()
    
    if selected_type is None:
        return
    
    if selected_type == 'excel':
        file_path = filedialog.askopenfilename(filetypes=[("Excel Files", "*.xlsx;*.xls")])
        if file_path:
            df = read_excel(file_path)
            if df is not None:
                save_as = filedialog.asksaveasfilename(defaultextension=".xlsx")
                if save_as:
                    write_excel(df, save_as)

    elif selected_type == 'image':
        file_path = filedialog.askopenfilename(filetypes=[("Image Files", "*.png;*.jpg;*.jpeg")])
        if file_path:
            # Ask user for output format
            output_format = messagebox.askquestion("Select Output Format", "Do you want to save as JPEG? (Click Yes for JPEG, No for PNG)")
            if output_format == 'yes':
                output_extension = ".jpeg"
                output_filetypes = [("JPEG files", "*.jpeg")]
            else:
                output_extension = ".png"
                output_filetypes = [("PNG files", "*.png")]

            output_path = filedialog.asksaveasfilename(defaultextension=output_extension, filetypes=output_filetypes)
            if output_path:
                convert_image(file_path, output_path)

    elif selected_type == 'csv':
        file_path = filedialog.askopenfilename(filetypes=[("CSV Files", "*.csv")])
        if file_path:
            output_path = filedialog.asksaveasfilename(defaultextension=".xlsx")
            if output_path:
                convert_csv_to_excel(file_path, output_path)

def create_gui():
    root = tk.Tk()
    root.title("File Converter")
    root.geometry("300x150")

    upload_button = tk.Button(root, text="Upload File", command=upload_file)
    upload_button.pack(pady=20)

    root.mainloop()

if __name__ == "__main__":
    create_gui()