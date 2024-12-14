// division function...
#include <stdio.h>

int hashFunction(int key, int tableSize) {
    return key % tableSize; // Modulo operation
}

int main() {
    int key = 37, tableSize = 10;
    printf("Hash value: %d\n", hashFunction(key, tableSize)); // Output: 7
    return 0;
}
