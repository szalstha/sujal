#include <iostream>

int main() {
    // Declare variables for length and width
    double length, width, area;

    // Prompt user for input
    std::cout << "Enter the length of the rectangle: ";
    std::cin >> length;

    std::cout << "Enter the width of the rectangle: ";
    std::cin >> width;

    // Calculate area
    area = length * width;

    // Display the result
    std::cout << "The area of the rectangle : " << area << std::endl;

    return 0;
}
