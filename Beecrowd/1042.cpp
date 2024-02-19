#include <iostream>
#include <algorithm>

int main() {
    int a, b, c;

    std::cin >> a >> b >> c;

    int originalSequence[] = {a, b, c};

    
    std::sort(&originalSequence[0], &originalSequence[3]);

    for (int i = 0; i < 3; ++i) {
        std::cout << originalSequence[i] << std::endl;
    }

    std::cout << std::endl;
    
    std::cout << a << std::endl << b << std::endl << c << std::endl;

    return 0;
}
