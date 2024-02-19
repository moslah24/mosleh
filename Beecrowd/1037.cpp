#include <iostream>
#include <iomanip>

int main() {
    double number;
    std::cin >> number;

    if (number >= 0 && number <= 25) {
        std::cout << "Intervalo [0,25]" << std::endl;

    } else if (number > 25 && number <= 50) {
        std::cout << "Intervalo (25,50]" << std::endl;

    } else if (number > 50 && number <= 75) {
        std::cout << "Intervalo (50,75]" << std::endl;

    } else if (number > 75 && number <= 100) {
        std::cout << "Intervalo (75,100]" << std::endl;
        
    } else {
        std::cout << "Fora de intervalo" << std::endl;
    }

    return 0;
}
