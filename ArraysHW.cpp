#include <iostream>
#include <fstream>

int main() {
    const int arraySize = 100; // You can change this size based on your requirements
    int dataArray[arraySize];

    // Open the input file
    std::ifstream inputFile("input.txt");

    // Check if the file is opened successfully
    if (!inputFile.is_open()) {
        std::cerr << "Error opening the file." << std::endl;
        return 1; // Return an error code
    }

    // Read data from the file into the array
    for (int i = 0; i < arraySize; ++i) {
        if (!(inputFile >> dataArray[i])) {
            std::cerr << "Error reading data from the file." << std::endl;
            return 1; // Return an error code
        }
    }

    // Close the input file
    inputFile.close();

    // Display the data from the array
    std::cout << "Data read from the file into the array:" << std::endl;
    for (int i = 0; i < arraySize; ++i) {
        std::cout << dataArray[i] << " ";
    }
    std::cout << std::endl;

    return 0; // Return success
}