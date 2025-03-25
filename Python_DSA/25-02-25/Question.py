class Ticket :
  def __init__ (self,id,description,priority=False):
    self.id=id
    self.description=description
    self.priority=priority

class TicketingSystem :
  def __init__(self):
    self.tickets=[]
    self.id_counter = 1

  def submitTicket(self,description, priority = False):
    ticket = Ticket(self.id_counter,description,priority)
    if priority :
      self.tickets.insert(0,ticket)
    else:
      self.tickets.append(ticket)
    self.id_counter += 1
    print(f"Ticket {ticket.id} submitted successfully.")

  def display_ticket(self):
    if not self.tickets:
      print("No tickets available.")
    else:
      print("Current Tickets")
      for i, ticket in enumerate(self.tickets,start = 1):
        priority = "High" if ticket.priority else "Low"
        print(f"{i}.Tickets { ticket.id } - {ticket.description} (Priority:{priority})")

  def process_tickets(self):
    if not self.tickets:
      print("No tickets to process")
    else:
      ticket = self.tickets.pop(0)
      print(f"Processing Ticket {ticket.id} - {ticket.description}")
      print("Ticket Resolved Successfully")

def main():
  system = TicketingSystem()
  while True:
        print("\n")
        print("1. Submit Ticket")
        print("2. Display Tickets")
        print("3. Process Tickets")
        print("4. Exit")
        choice = input("Choose an option: ")
        if choice == "1":
          description = input("Enter ticket description: ")
          priority = input("Is this a priority ticket? (yes/no): ")
          system.submitTicket(description, priority.lower() == "yes")

        elif choice == "2":
          system.display_ticket()
        elif choice == "3":
          system.display_ticket()
        elif choice == "4":
           break
        else:
            print("Invalid Option. Please Choose again")

if __name__ == "__main__":
   main()
