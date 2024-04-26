#include <iostream>

int main() {
    int array[10] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    int* ptr = array;
    int fourth_elem = *(ptr + 3);
    std::cout << fourth_elem << std::endl;

    return 0;
}
