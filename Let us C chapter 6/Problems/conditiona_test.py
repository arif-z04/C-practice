current_users = ['Alice', 'Bob', 'Charlie', 'dave', 'Eve']
new_users = []


new_user = input("Enter a user name: ")
new_users.append(new_user)
current_users_lower = [user.lower() for user in current_users]

for user in new_users:
    if user.lower() in current_users_lower:
        print(f"Sorry, the username '{user}' is already taken. Please enter a new username.\n")
        new_users.remove(new_user)
    else:
        print(f"The username '{user}' is available.")
        print(f"'{new_user}' has been added as a new user. ")
        new_users.remove(new_user)
        current_users.append(new_user) 

    
