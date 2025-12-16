#include <iostream>

int main(){
    int *iPtr = new int;

    *iPtr = 42;
    std::cout << *iPtr;

    delete iPtr;
    iPtr = nullptr;

    return 0;
}
