#include <iostream>


int main() {

    //zad 4.1

    auto multiply = [](int lhs, int rhs){ return lhs * rhs;};

    std::cout<< multiply(10,20)<<'\n';

    return 0;
}
