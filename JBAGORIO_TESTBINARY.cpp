#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int *ptr, int size, int *target);
void getBinDisplay (int *ptr, int *xsize);

int main() {
    int size = 12;

    int binNum [size] = {4, 7, 8, 10, 14, 21, 22, 36, 62, 77, 81, 91};
    int result, target;

  
    getBinDisplay (binNum, &size);

    
    cout << "Enter your target key: ";
    cin >> target;

    
    result = binarySearch(binNum, size, &target);

    
    if (result != -1) {
        cout << target << " is at position [" << result << "]" << endl;
    } else {
        cout << target << " is not on the list" << endl;
    }

    return 0;
}

void getBinDisplay (int *ptr, int *xsize)
{
    cout << "Option 1: Binary Searching"<< endl
    <<"Displaying elements in the array" << endl;
    for (int i = 0; i < *xsize; i++) {
        cout << ptr[i] << " ";
    }
    cout << endl;
}

int binarySearch(int *ptr, int size, int *target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (ptr [mid] == *target) {
            return mid; 
        } else if (ptr [mid] < *target) {
            low = mid + 1; 
        } else {
            high = mid - 1;
        }
    }

    return -1; 
}