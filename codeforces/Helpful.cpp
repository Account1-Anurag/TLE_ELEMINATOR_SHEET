#include <iostream>
#include <algorithm>
#include <vector>

int main() {
    std::string s;
    std::cin >> s;

    // Vector to store the numbers
    std::vector<int> numbers;

    // Extract numbers from the string
    for (char c : s) {
        if (c != '+') {
            numbers.push_back(c - '0'); // Convert char to int
        }
    }

    // Sort the numbers in non-decreasing order
    std::sort(numbers.begin(), numbers.end());

    // Print the sorted numbers with '+' in between
    for (size_t i = 0; i < numbers.size(); ++i) {
        std::cout << numbers[i];
        if (i < numbers.size() - 1) {
            std::cout << '+';
        }
    }

    std::cout << std::endl;
    return 0;
}
