#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    double sum = 0.0;
    int count = 0;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string key, value;
        std::getline(ss, key, '\t');
        std::getline(ss, value);

        try {
            sum += std::stod(value);
            ++count;
        } catch (...) {
        }
    }

    if (count > 0) {
        std::cout << "average_price\t" << (sum / count) << std::endl;
    }

    return 0;
}
