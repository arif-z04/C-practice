#include <SFML/Graphics.hpp>
#include <vector>
#include <thread>
#include <chrono>
#include <cmath>

void visualizeSieve(int n) {
    const int windowWidth = 800;
    const int windowHeight = 600;
    const int cellSize = 40;

    // Create the window
    sf::RenderWindow window(sf::VideoMode(windowWidth, windowHeight), "Sieve of Eratosthenes");

    // Calculate grid size
    int cols = windowWidth / cellSize;
    int rows = std::ceil((float)n / cols);

    // Create the numbers and their states
    std::vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime

    // Create rectangles for visualization
    std::vector<sf::RectangleShape> cells(n);
    for (int i = 0; i <= n; ++i) {
        sf::RectangleShape cell(sf::Vector2f(cellSize - 2, cellSize - 2)); // Add spacing
        cell.setFillColor(sf::Color::White);
        cell.setOutlineThickness(1);
        cell.setOutlineColor(sf::Color::Black);

        int x = (i % cols) * cellSize;
        int y = (i / cols) * cellSize;
        cell.setPosition(x, y);

        cells[i] = cell;
    }

    // Main visualization loop
    int currentPrime = 2;
    while (window.isOpen()) {
        // Handle events
        sf::Event event;
        while (window.pollEvent(event)) {
            if (event.type == sf::Event::Closed) {
                window.close();
            }
        }

        // Clear the screen
        window.clear(sf::Color::Black);

        // Draw the grid
        for (int i = 2; i <= n; ++i) {
            window.draw(cells[i]);
        }

        // Apply the sieve step
        if (currentPrime <= std::sqrt(n)) {
            if (isPrime[currentPrime]) {
                cells[currentPrime].setFillColor(sf::Color::Green); // Highlight the current prime

                // Mark multiples as non-prime
                for (int j = currentPrime * 2; j <= n; j += currentPrime) {
                    isPrime[j] = false;
                    cells[j].setFillColor(sf::Color::Red);
                    window.draw(cells[j]);
                    window.display();
                    std::this_thread::sleep_for(std::chrono::milliseconds(50)); // Add delay for visualization
                }
            }
            currentPrime++;
        } else {
            // After marking all, highlight remaining primes
            for (int i = 2; i <= n; ++i) {
                if (isPrime[i]) {
                    cells[i].setFillColor(sf::Color::Green);
                }
            }
        }

        // Draw the updated grid
        for (int i = 2; i <= n; ++i) {
            window.draw(cells[i]);
        }

        window.display();
    }
}

int main() {
    int n;
    std::cout << "Enter the maximum number for the Sieve of Eratosthenes: ";
    std::cin >> n;

    visualizeSieve(n);

    return 0;
}
