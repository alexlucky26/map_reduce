#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string token;
        int columnIndex = 0;
        double price = 0.0;

        while (std::getline(ss, token, ',')) {
            if (columnIndex == 9) { // 10-я колонка — price
                try {
                    price = std::stod(token);
                    std::cout << "price\t" << price << std::endl;
                } catch (...) {
                    // игнорирую нечисловые значения
                }
                break;
            }
            ++columnIndex;
        }
    }
    return 0;
}
