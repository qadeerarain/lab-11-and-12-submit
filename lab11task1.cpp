#include <iostream>
using namespace std;


void selectionSortDescending(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        
        int maxIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] > arr[maxIndex]) {
                maxIndex = j;
            }
        }
        
        swap(arr[i], arr[maxIndex]);
    }
}

// Function to print an array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    //cout <<endln;
}

int main() {
    int arr[] = {29, 10, 14, 37, 13};
    int n = sizeof(arr)/sizeof(arr[4]);
    cout<<n<<endl;

    cout << "Original array ";
    printArray(arr, n);

    selectionSortDescending(arr, n);

    cout << "Sorted array in descending order: ";
    printArray(arr, n);

    return 0;
}
