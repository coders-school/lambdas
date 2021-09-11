
#include <iostream>

int main() {
    auto alphabet = [letter = 'a']() mutable {
        if (letter == 'z' + 1)  {
            letter = 'A';
        }
        if (letter == 'Z' + 1) {
            letter = 'a';
        }
        return letter++;
    };

    for (int i = 0; i < 100; ++i) {
        std::cout << alphabet();
    }

    std::cout << '\n';

    return 0;
}