#include <iostream>
#include <string>
#include <sstream>

int main() {
    std::string line;
    double sum = 0.0;
    double sumSquares = 0.0;
    int count = 0;

    while (std::getline(std::cin, line)) {
        std::stringstream ss(line);
        std::string key, values;

        if (!std::getline(ss, key, '\t')) continue;
        if (!std::getline(ss, values)) continue;

        std::stringstream valStream(values);
        std::string priceStr, squareStr, countStr;

        if (!std::getline(valStream, priceStr, ',')) continue;
        if (!std::getline(valStream, squareStr, ',')) continue;
        if (!std::getline(valStream, countStr, ',')) continue;

        try {
            double price = std::stod(priceStr);
            double square = std::stod(squareStr);
            int cnt = std::stoi(countStr);

            sum += price;
            sumSquares += square;
            count += cnt;
        } catch (...) {
            continue;
        }
    }

    if (count > 0) {
        double mean = sum / count;
        double variance = (sumSquares / count) - (mean * mean);
        std::cout << "price_dispersion\t" << variance << std::endl;
    }

    return 0;
}