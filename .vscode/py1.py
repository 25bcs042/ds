shopping_list = []
prices = []

budget = float(input("Enter your shopping budget: "))

def add_item():
    item = input("Enter item name: ")
    price = float(input("Enter item price: "))

    shopping_list.append(item)
    prices.append(price)

    print(item, "added to shopping list")

def show_items():
    if len(shopping_list) == 0:
        print("Shopping list is empty")
    else:
        print("\nYour Shopping List:")
        total = 0

        for i in range(len(shopping_list)):
            print(i+1, ".", shopping_list[i], "- ₹", prices[i])
            total += prices[i]

        remaining = budget - total

        print("Total Spent: ₹", total)
        print("Remaining Budget: ₹", remaining)

        if remaining <= 0:
            print("⚠ Warning: Your budget is exceeded!")
        elif remaining < budget * 0.2:
            print("⚠ Warning: Your budget is running low!")

while True:
    print("\n1 Add Item")
    print("2 Show Shopping List")
    print("3 Exit")

    choice = input("Enter choice: ")

    if choice == "1":
        add_item()
    elif choice == "2":
        show_items()
    elif choice == "3":
        print("Thank you for using the shopping list")
        break
    else:
        print("Invalid choice")