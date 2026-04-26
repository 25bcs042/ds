# Hostel Snack Shop - Python Version
menu = {
    "1": {"name": "Maggi", "price": 40},
    "2": {"name": "Kurkure", "price": 20},
    "3": {"name": "Cold Drink", "price": 30},
    "4": {"name":"milk","price":40}

}

def show_menu():
    print("\n--- MENU ---")
    for key, item in menu.items():
        print(f"{key}. {item['name']} - ₹{item['price']}")

def take_order():
    order = {}
    total = 0

    for key, item in menu.items():
        qty = int(input(f"Enter quantity for {item['name']}: "))
        if qty > 0:
            order[item['name']] = {
                "qty": qty,
                "price": item['price'],
                "subtotal": qty * item['price']
            }
            total += qty * item['price']

    return order, total

def show_summary(order, total):
    print("\n--- ORDER SUMMARY ---")
    if not order:
        print("Koi item select nahi hua.")
        return

    for name, details in order.items():
        print(f"{name} x {details['qty']} = ₹{details['subtotal']}")

    print(f"Total: ₹{total}")

def get_customer_details():
    print("\n--- CUSTOMER DETAILS ---")
    name = input("Full Name: ")
    room = input("Hostel / Room No: ")
    phone = input("Phone (10 digits): ")

    if not name or not room or len(phone) != 10:
        print("Invalid details! Try again.")
        return get_customer_details()

    return name, room, phone

def prepare_payment(total, name, room):
    if total <= 0:
        print("Kripya kam se kam ek item select karein.")
        return

    upi_id = "9186074931@ybl"
    payee_name = "Hostel Snack Shop"

    print("\n--- PAYMENT ---")
    print(f"Amount: ₹{total}")
    print(f"UPI ID: {upi_id}")

    txn_note = f"Order by {name} {room}"
    upi_link = f"upi://pay?pa={upi_id}&pn={payee_name}&am={total}&tn={txn_note}"

    print("\nUPI Link (copy in browser/app):")
    print(upi_link)

    print("\nYa manually pay karein aur screenshot bhejein.")

def main():
    print("Welcome to Hostel Snack Shop 🍜")

    show_menu()
    order, total = take_order()

    show_summary(order, total)

    if total > 0:
        name, room, phone = get_customer_details()
        prepare_payment(total, name, room)

if __name__ == "__main__":
    main()