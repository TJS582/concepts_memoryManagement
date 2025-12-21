#include <iostream>
#include <cstddef>

int main(){
    int *iPtr = new int;

    *iPtr = 42;
    std::cout << *iPtr;

    delete iPtr;
    iPtr = nullptr;

    std::cout << "alignment of char: " << alignof(char) << "\n";
    std::cout << "alignment of bool: " << alignof(bool) << "\n";
    std::cout << "alignment of short: " << alignof(short) << "\n";
    std::cout << "alignment of int: " << alignof(int) << "\n";
    std::cout << "alignment of long: " << alignof(long) << "\n";
    std::cout << "alignment of long long: " << alignof(long long) << "\n";
    std::cout << "alignment of float: " << alignof(float) << "\n";
    std::cout << "alignment of double: " << alignof(double) << "\n";
    std::cout << "alignment of long double: " << alignof(long double) << "\n";
    std::cout << "alignment of void*: " << alignof(void*) << "\n";

    return 0;
}
