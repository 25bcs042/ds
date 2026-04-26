# Shopping List for 

shopping_list = []
prices = []
# Budget input
budget = float(input("Enter your shopping budget: "))
# Function to add item
def add_item():
    print("\n--- Add Item ---")
    item = input("Enter item name: ")
    price = float(input("Enter item price: "))
    shopping_list.append(item)
    prices.append(price)
    print(item, "added to shopping list successfully!")
# Function to show items
def show_items():
    print("\n--- Shopping List ---")

    if len(shopping_list) == 0:
        print("Shopping list is empty")
    else:
        total = 0

        for i in range(len(shopping_list)):
            print(i + 1, ".", shopping_list[i], "- ₹", prices[i])
            total += prices[i]

        remaining = budget - total

        print("\nTotal Spent: ₹", total)
        print("Remaining Budget: ₹", remaining)

        if remaining <= 0:
            print(" Warning: Budget exceeded!")
        elif remaining < budget * 0.2:
            print(" Warning: Budget running low!")


# Function to delete item
def delete_item():
    print("\n--- Delete Item ---")

    if len(shopping_list) == 0:
        print("Shopping list is empty")
        return

    show_items()

    index = int(input("Enter item number to delete: "))

    if index > 0 and index <= len(shopping_list):
        removed_item = shopping_list.pop(index - 1)
        prices.pop(index - 1)
        print(removed_item, "removed successfully!")
    else:
        print("Invalid item number")
def update_item():
    print("\n--- Update Item ---")
    if len(shopping_list) == 0:
        print("Shopping list is empty")
        return
    show_items()
    index = int(input("Enter item number to update: "))
    if index > 0 and index <= len(shopping_list):
        new_item = input("Enter new item name: ")
        new_price = float(input("Enter new price: "))
        shopping_list[index - 1] = new_item
        prices[index - 1] = new_price
        print("Item updated successfully!")
    else:
        print("Invalid item number")
def clear_list():
    print("\n--- Clear List ---")
    confirm = input("Are you sure? (yes/no): ")
    if confirm.lower() == "yes":
        shopping_list.clear()
        prices.clear()
        print("Shopping list cleared successfully")
    else:
        print("Operation cancelled")
# Function to show total
def show_total():
    print("\n--- Total Calculation ---")

    total = sum(prices)
    remaining = budget - total
    print("Total Spent: ₹", total)
    print("Remaining Budget:  ₹", remaining)
# Main Program Loop
while True:
    print("\n===== Shopping List Manager =====")
    print("1. Add Item")
    print("2. Show Shopping List")
    print("3. Delete Item")
    print("4. Update Item")
    print("5. Show Total")
    print("6. Clear List")
    print("7. Exit")

    choice = input("Enter your choice: ")

    if choice == "1":
        add_item()

    elif choice == "2":
        show_items()

    elif choice == "3":
        delete_item()

    elif choice == "4":
        update_item()

    elif choice == "5":
        show_total()

    elif choice == "6":
        clear_list()
    elif choice == "7":
        print("Thank you for using Shopping List Manager ")
        break
    else:
        print("Invalid choice. Please try again.")