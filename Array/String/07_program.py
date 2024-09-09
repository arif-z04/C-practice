import time

def main():
    stored_password = "mySecretPassword"
    max_attempts = 3
    delay_in_seconds = 30

    while True:
        for _ in range(max_attempts):
            if input("Enter the password: ") == stored_password:
                print("Password is correct!")
                return
            print("Incorrect password! Try again.")

        print(f"Maximum attempts reached. Waiting {delay_in_seconds} seconds...")
        for i in range(delay_in_seconds, 0, -1):
            print(f"\rPlease wait {i} seconds...", end='', flush=True)
            time.sleep(1)

        print("\r\033[2KYou can try again now.")

main()
