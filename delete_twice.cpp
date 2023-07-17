#include <iostream>

int main() {
    int* numPtr = new int(42);

    delete numPtr;
    delete numPtr;

    return 0;
}
