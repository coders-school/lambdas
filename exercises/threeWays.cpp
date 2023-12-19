#include <iostream>
#include <vector>
#include <algorithm>

// use STL algorithm to check if all elements are divisible by 3
// implement 3 versions:
// * lambda
// * functor
// * function
bool allDividedByThreeFunc(int i){
    return i%3;
}

struct AllDividedByThree {
    bool operator()(int i) {
        return i%3;
    }
};
int main() {
    std::vector numbers = {18, 21, 36, 90, 27, 14, 103};

    bool allDividedByThree = false;
  
    auto lambda = [] (int i) {return i%3;};
    allDividedByThree = std::all_of(numbers.begin(), numbers.end(), lambda);
    std::cout<<"Lambda: "<<allDividedByThree<<std::endl;

    allDividedByThree=std::all_of(numbers.begin(), numbers.end(), allDividedByThreeFunc);
    std::cout<<"Function: "<<allDividedByThree<<std::endl;

    allDividedByThree=std::all_of(numbers.begin(), numbers.end(), AllDividedByThree{});
    std::cout<<"Functor: "<<allDividedByThree<<std::endl;
    return 0;
}
