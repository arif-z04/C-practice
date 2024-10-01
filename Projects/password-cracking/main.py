import itertools
import time

# Your actual password
PASSWORD = "my123/.,"

# Character set to use (lowercase, uppercase, digits, and special characters)
charset = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#$%^&*()/.,"

# Function to perform brute-force cracking for any password length
def brute_force_crack(password):
    # Start measuring time
    start_time = time.time()
    attempt_count = 0
    length = 1  # Start with length 1

    while True:  # Continue indefinitely, increasing length
        # Generate all combinations of the current length
        for attempt in itertools.product(charset, repeat=length):
            attempt_count += 1
            # Join tuple of characters into a string
            attempt_str = ''.join(attempt)
            if attempt_str == password:
                # Stop time measurement
                end_time = time.time()
                time_spent = end_time - start_time
                print(f"Password found: {attempt_str}")
                print(f"Total attempts: {attempt_count}")
                print(f"Time spent: {time_spent:.2f} seconds")
                return
        
        print(f"Checked all {length}-character combinations. Moving to {length + 1}-character combinations...")
        length += 1  # Increase the length and try again

# Start the brute-force cracking
print("Starting brute-force password cracking...")
brute_force_crack(PASSWORD)
