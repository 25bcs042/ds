import random
import os

DATA_FILE = "users.txt"

# -----------------------------
# Save user data
# -----------------------------
def save_user(username, password, pin):
    with open(DATA_FILE, "a") as f:
        f.write(f"{username},{password},{pin}\n")


# -----------------------------
# Load user data
# -----------------------------
def load_users():
    users = {}
    if os.path.exists(DATA_FILE):
        with open(DATA_FILE, "r") as f:
            for line in f:
                username, password, pin = line.strip().split(",")
                users[username] = (password, pin)
    return users


# -----------------------------
# Register
# -----------------------------
def register():
    print("\n--- REGISTER ---")
    username = input("Enter username: ")
    password = input("Enter password: ")
    pin = input("Enter 4-digit PIN: ")

    save_user(username, password, pin)
    print("\n✅ Registration successful!\n")


# -----------------------------
# OTP Generator
# -----------------------------
def generate_otp():
    return random.randint(1000, 9999)


# -----------------------------
# Login
# -----------------------------
def login():
    print("\n--- LOGIN ---")
    users = load_users()

    username = input("Enter username: ")
    if username not in users:
        print("\n❌ User not found!\n")
        return

    stored_password, stored_pin = users[username]
1
    # Step 1: Password check
    password = input("Enter password: ")
    if password != stored_password:
        print("\n❌ Wrong password!\n")
        return

    print("\n✅ Password correct")

    # Step 2: PIN check
    pin = input("Enter PIN: ")
    if pin != stored_pin:
        print("\n❌ Wrong PIN!\n")
        return

    print("\n✅ PIN correct")

    # Step 3: OTP verification
    otp = generate_otp()
    print(f"\n🔐 Your OTP is: {otp}")

    user_otp = input("Enter OTP: ")
    if user_otp == str(otp):
        print("\n🎉 LOGIN SUCCESSFUL!\n")
    else:
        print("\n❌ Wrong OTP!\n")


# -----------------------------
# Main Menu
# -----------------------------
def main():
    while True:
        print("=== Multi-Step Authentication System ===")
        print("1. Register")
        print("2. Login")
        print("3. Exit")

        choice = input("Enter choice: ")

        if choice == "1":
            register()
        elif choice == "2":
            login()
        elif choice == "3":
            print("Exiting...")
            break
        else:
            print("Invalid choice!\n")


# Run program
if __name__ == "__main__":
    main()