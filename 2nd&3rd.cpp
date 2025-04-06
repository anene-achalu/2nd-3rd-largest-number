#include <iostream>
using namespace std;

void findTop3(int arr[], int n) {
    // Initialize first, second, and third largest elements with the first element of the array
    int first = arr[0], second = arr[0], third = arr[0];

    // Traverse through the array to find the second and third largest elements
    for (int i = 1; i < n; i++) {
        int x = arr[i];
        if (x > first) {
            third = second;
            second = first;
            first = x;
        } else if (x > second && x != first) {
            third = second;
            second = x;
        } else if (x > third && x != second && x != first) {
            third = x;
        }
    }

    // Display the results
    if (first == second || second == third || first == third) {
        cout << "Array does not have enough unique elements." << endl;
    } else {
        cout << "Second largest: " << second << "\nThird largest: " << third << endl;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    findTop3(arr, n);
    return 0;
}
