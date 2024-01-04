// Create a lambda that with each call returns a consecutive letter of the alphabet
// starting from 'a'. When we reach 'z', the lambda should return uppercase letters
// - from 'A' to 'Z'. Then, it should start overt with 'a'. Don't use static
// or global variables. Try to implement it without looking into the ASCII table.

#include <iostream>

int main() {
    
    auto alphabet=[temp{'a'}, end{'z'}, end_up{'Z'}]()mutable{
      if (temp==end){
        temp='A'; 
        return end;
      }
      else if (temp==end_up){
        temp='a';
        return end_up;
      }
      else
        return temp++;};
    
    for (int i = 0; i < 100; ++i) {
        // std::cout << alphabet();
    }
    std::cout << '\n';
    return 0;
}
