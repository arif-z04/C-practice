import matplotlib.pyplot as plt
import numpy as np
import time

def sieve_of_eratosthenes_visualize(n):
    """
    Visualize the Sieve of Eratosthenes algorithm.

    Parameters:
    n (int): The maximum number to find primes for.
    """
    numbers = np.arange(2, n+1)  # Numbers from 2 to n
    is_prime = np.ones(len(numbers), dtype=bool)  # Boolean array indicating primality

    fig, ax = plt.subplots(figsize=(12, 6))
    ax.set_title("Sieve of Eratosthenes", fontsize=16)
    ax.set_xticks([])
    ax.set_yticks([])

    # Initial state display
    squares = ax.bar(numbers, is_prime, color="lightblue", edgecolor="black", align="center")
    plt.pause(2)

    for i in range(len(numbers)):
        if is_prime[i]:
            prime = numbers[i]
            # Highlight the prime number
            squares[i].set_color("green")
            plt.pause(0.5)

            # Mark multiples of the prime as non-prime
            for j in range(i + prime, len(numbers), prime):
                is_prime[j] = False
                squares[j].set_color("red")
                plt.pause(0.2)

    # Final display of primes
    ax.set_title(f"Prime Numbers Up to {n}", fontsize=16)
    plt.pause(2)
    plt.show()

    # Return the list of primes
    return numbers[is_prime]

# Test the visualization
if __name__ == "__main__":
    max_number = int(input("Enter the maximum number for the Sieve of Eratosthenes: "))
    primes = sieve_of_eratosthenes_visualize(max_number)
    print("Primes:", primes)
