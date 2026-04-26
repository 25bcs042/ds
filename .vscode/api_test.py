# Shopping List Manager with Budget + Auto Price
print("GENERAL STORE")
shopping_list = []
prices = []

# Budget input
budget = float(input("Enter your total budget: "))

# Predefined price dictionary
price_dict = {
        "milk": 23,
    "sprite": 45,
    "dairy milk": 20,
    "parle": 78,
    "toothpaste": 45,
    "kurkure": 10,
    "maggi": 40,
    "bread": 25,
    "butter": 55,
    "cheese": 60,
    "eggs": 70,
    "rice": 120,
    "wheat flour": 150,
    "sugar": 45,
    "salt": 20,
    "tea": 90,
    "coffee": 120,
    "biscuit": 30,
    "chips": 20,
    "cold drink": 50,
    "juice": 60,
    "water bottle": 20,
    "soap": 35,
    "shampoo": 120,
    "facewash": 150,
    "detergent": 200,
    "pen": 10,
    "notebook": 50

}

# Add item
def add_item():
    print("\n--- Add Item ---")
    item = input("Enter item name: ").lower()

    if item in price_dict:
        price = price_dict[item]
        shopping_list.append(item)
        prices.append(price)
        print(f"{item} added with price ₹{price}")
    else:
        print("Item not available in store!")

# Show items + budget status
def show_items():
    print("\n--- Shopping List ---")

    if len(shopping_list) == 0:
        print("List is empty")
    else:
        total = 0
        for i in range(len(shopping_list)):
            print(i+1, ".", shopping_list[i], "- ₹", prices[i])
            total += prices[i]

        remaining = budget - total

        print("\nTotal Spent: ₹", total)
        print("Remaining Budget: ₹", remaining)

        # Budget warnings
        if remaining <= 0:
            print("❌ Budget Exceeded!")
        elif remaining <= budget * 0.2:
            print("⚠️ Warning:  budget low!")

# Delete item
def delete_item():
    print("\n--- Delete Item ---")

    if len(shopping_list) == 0:
        print("List is empty")
        return

    show_items()
    index = int(input("Enter item number to delete: "))

    if 1 <= index <= len(shopping_list):
        removed = shopping_list.pop(index - 1)
        prices.pop(index - 1)
        print(f"{removed} removed successfully!")
    else:
        print("Invalid item number")

# Update item
def update_item():
    print("\n--- Update Item ---")

    if len(shopping_list) == 0:
        print("List is empty")
        return

    show_items()
    index = int(input("Enter item number to update: "))

    if 1 <= index <= len(shopping_list):
        new_item = input("Enter new item name: ").lower()

        if new_item in price_dict:
            shopping_list[index - 1] = new_item
            prices[index - 1] = price_dict[new_item]
            print(f"Updated to {new_item} with price ₹{price_dict[new_item]}")
        else:
            print("Item not available in store!")
    else:
        print("Invalid item number")

# Clear list
def clear_list():
    print("\n--- Clear List ---")
    confirm = input("Are you sure? (yes/no): ").lower()

    if confirm == "yes":
        shopping_list.clear()
        prices.clear()
        print("List cleared successfully!")
    else:
        print("Operation cancelled")

# Show total separately
def show_total():
    total = sum(prices)
    remaining = budget - total

    print("\n--- Budget Summary ---")
    print("Total Spent: ₹", total)
    print("Remaining Budget: ₹", remaining)

    if remaining <= 0:
        print("❌ Budget Exceeded!")
    elif remaining <= budget * 0.2:
        print("⚠️ Warning: Only 20% budget remaining!")

# Main loop
while True:
    print("\n===== MENU =====")
    print("1. Add Item")
    print("2. Show Items")
    print("3. Delete Item")
    print("4. Update Item")
    print("5. Show Total")
    print("6. Clear List")
    print("7. Exit")

    choice = input("Enter choice: ")

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
        print("Thank you!")
        break
    else:
        print("Invalid choice")