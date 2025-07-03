#include <stdio.h>

// Function to count even and odd numbers in an array
void evenorodd(int array[], int n) {
    int even = 0, odd = 0;  // Counters for even and odd numbers

    // Loop through each element of the array
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0)
            even++;    // If number is divisible by 2, it's even
        else
            odd++;     // Otherwise, it's odd
    }

    // Print the result
    printf("Even numbers count: %d\n", even);
    printf("Odd numbers count: %d\n", odd);
}

int main() {
    // Initialize an array with some integers
    int array[] = {3, 2, 45, 7, 7, 8, 99, 21, 456, 89, 10};

    // Calculate the number of elements in the array
    int n = sizeof(array) / sizeof(array[0]);

    // Call the function to count even and odd numbers
    evenorodd(array, n);

    return 0;
}
