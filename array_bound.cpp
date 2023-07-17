#include <iostream>

int main() {
    const int SIZE = 5;
    int arr[SIZE] = {1, 2, 3, 4, 5};
    
    for (int i = 0; i <= SIZE; ++i) {
        arr[i] = i * 10;
    }

    return 0;
}