
import subprocess 
import matplotlib.pyplot as plt
from collections import Counter


def main():
    # error handling
    
    subprocess.run(["gcc", "generate_data.c","-o", "generate_data", "-lm"])
    subprocess.run(["./generate_data"])
    
    plot_graph()


def plot_graph():
    # Read the data from the file
    with open('dataset.txt', 'r') as file:
        data = [int(line.strip()) for line in file]

    # Count the occurrences of each number
    frequency = Counter(data)

    # Prepare data for plotting
    numbers = list(frequency.keys())
    occurrences = list(frequency.values())

    # Plot the histogram
    plt.figure(figsize=(12, 6))
    plt.bar(numbers, occurrences, color='skyblue')

    # Add titles and labels
    plt.title('Frequency of Generated Numbers')
    plt.xlabel('Number')
    plt.ylabel('Occurrences')
    plt.grid(True, axis='y')

    # Show the plot
    plt.show()


if __name__ == "__main__":
    main()
