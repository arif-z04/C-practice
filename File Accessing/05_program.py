import matplotlib.pyplot as plt

# Read the data from the file
with open('05_program.txt', 'r') as file:
    data = [int(line.strip()) for line in file]

# Plot the data
plt.figure(figsize=(10, 5))
plt.plot(data, marker='o', linestyle='-', color='b')
plt.title('Generated Random Numbers')
plt.xlabel('Index')
plt.ylabel('Value')
plt.grid(True)
plt.show()