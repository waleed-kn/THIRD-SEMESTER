#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 4, 5, 6, 7, 8, 9, 12};
    int n = 8;
    int key = 25;

    int low = 0, high = 7; // yahan high = 7 hoga

    while (low <= high) {
        int mid = (low + high) / 2;

        if (arr[mid] == key) {
            cout << "Element found at index " << mid << endl;
            return 0; // program exit, kyunki element mil gaya
        }
        else if (arr[mid] < key) {
            low = mid + 1;  // right side search
        }
        else {
            high = mid - 1; // left side search
        }
    }

    cout << "Element not found" << endl;
    return 0;
}
