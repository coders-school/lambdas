#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>

// use STL algorithm to check if all elements are divisible by 3
// implement 3 versions:
// * lambda
// * functor
// * function

//functor
struct DevideByThree {
    DevideByThree(int n)
        : n_(n) {}
    bool operator()(int number) {
        return !(number % n_);
    }

private:
    int n_;
};

//function
bool isDevidedByThree(int num) {
    return !(num % 3);
}

int main() {
    std::vector<int> numbers = {18, 21, 36, 90, 27, 14, 103};

    //lambda
    std::cout << "Lambda:\n";
    std::copy_if(begin(numbers), end(numbers), std::ostream_iterator<int>(std::cout, " "), [](auto a) { return !(a % 3); });
    std::cout << '\n';
    std::cout << std::boolalpha << std::all_of(begin(numbers), end(numbers), [](auto num) { return !(num % 3); }) << '\n';

    //functor
    std::cout << "Functor:\n";
    std::cout << std::boolalpha << std::all_of(begin(numbers), end(numbers), DevideByThree{3}) << '\n';

    //function
    std::cout << "Function:\n";
    std::cout << std::boolalpha << std::all_of(begin(numbers), end(numbers), isDevidedByThree) << '\n';

    return 0;
}
