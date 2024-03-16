#include <iostream>
#include <string>
#include <utility>

std::pair<int, int> splitNumbers(int number) {
    std::string numString = std::to_string(number);
    size_t pos = numString.find("00");
    if (pos == std::string::npos) {
        // If there are no "00"s, split at half the length
        pos = numString.size() / 2;
    }
    int firstPart = std::stoi(numString.substr(0, pos));
    int secondPart = std::stoi(numString.substr(pos));
    return std::make_pair(firstPart, secondPart);
}

int main() {
    int numbers[] = { 17700190, 27600300, 21100230, 21500320, 20400221, 10500117, 1500017, 900018, 15000166 };

    for (int number : numbers) {
        std::pair<int, int> result = splitNumbers(number);
        std::cout << result.first << ", " << result.second << std::endl;
    }

    return 0;
}
