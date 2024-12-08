import os

# Get the current directory
current_directory = os.getcwd()

# Loop through all files in the current directory
for filename in os.listdir(current_directory):
    # Check if the file ends with .exe
    if filename.endswith('.exe'):
        # Construct full file path
        file_path = os.path.join(current_directory, filename)
        try:
            os.remove(file_path)
            print(f"Deleted: {file_path}")
        except Exception as e:
            print(f"Error deleting {file_path}: {e}")

print("Finished deleting .exe files.")


# char id[10] = "1234567890"
# char letter = 's'