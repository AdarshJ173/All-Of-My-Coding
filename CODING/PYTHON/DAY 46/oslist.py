import os
folders = os.listdir("AAJ")

print(folders)

for folder in folders:
    print(folder)
    print(os.listdir(f"AAJ/{folder}"))
