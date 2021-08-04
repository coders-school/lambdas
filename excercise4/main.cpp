#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <iterator>

int main() {

    //zad 4.1
    auto multiply = [](int lhs, int rhs){ return lhs * rhs;};
    std::cout<< multiply(10,5)<<'\n';

    //zad 4.2 dodaj cudzysłow od podanego ciagu znakow
    auto lam = [](std::string s){ std::cout << "\""<< s << "\"\n";};
    lam("krowa");
    
    //4.3 Wypisze ciag znakow przy kazdym zawolaniu zwiekszyc liczbe
    int counter = 1;
    auto printAsterix = [&counter](){
                        for(int i =0; i < counter; ++i) {
                            std::cout << '*';}
                        std::cout << '\n';
                        counter++;};
    printAsterix();
    printAsterix();
    printAsterix();

    //4.4 Utworz vector<int> wypelnij wartosciami i utwrzo lambde, ktora przechwyci vector
    //i wyswietli jego zawartosc
    std::vector<int> vec(10);
    std::iota(vec.begin(), vec.end(), -2);
    
    auto printVec = [vec](){
                    std::copy(vec.begin(), vec.end(),std::ostream_iterator<int>(std::cout," "));};
    printVec();
    return 0;
}
