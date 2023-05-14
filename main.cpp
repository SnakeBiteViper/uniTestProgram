#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

int main() {
    // Get input string
    std::string inputString;
    std::cout << "Enter a string of words: ";
    std::getline(std::cin, inputString);

    // Split input string into individual words
    std::vector<std::string> words;
    std::string word;
    for (char c : inputString) {
        if (isspace(c)) {
            if (!word.empty()) {
                words.push_back(word);
                word.clear();
            }
        }
        else {
            word.push_back(c);
        }
    }
    if (!word.empty()) {
        words.push_back(word);
    }

    // Sort words
    std::sort(words.begin(), words.end());

    // Print sorted words
    std::cout << "Sorted words: ";
    for (const auto& w : words) {
        std::cout << w << " ";
    }
    std::cout << std::endl;

    return 0;
}
