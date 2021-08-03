#include <iostream>


int main() {

    //zad 4.1

    auto multiply = [](int lhs, int rhs){ return lhs * rhs;};

    std::cout<< multiply(10,5)<<'\n';

    //zad 4.2 dodaj cudzysłow od podanego ciagu znakow
    auto lam = [](std::string s){ std::cout << "\""<< s << "\"\n";};
    lam("krowa");

    return 0;
}
