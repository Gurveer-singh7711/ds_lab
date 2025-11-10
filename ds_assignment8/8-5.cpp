#include <iostream>
using namespace std;

class HeapSort {
public:
    void heapify(int arr[], int n, int i, bool increasing) {
        int extreme = i;
        int left = 2 * i + 1;
        int right = 2 * i + 2;

        if(increasing) {
            if(left < n && arr[left] > arr[extreme]) {
                extreme = left;
            }
            if(right < n && arr[right] > arr[extreme]) {
                extreme = right;
            }
        }
        else {
            if(left < n && arr[left] < arr[extreme]) {
                extreme = left;
            }
            if(right < n && arr[right] < arr[extreme]) {
                extreme = right;
            }
        }

        if(extreme != i) {
            swap(arr[i], arr[extreme]);
            heapify(arr, n, extreme, increasing);
        }
    }

    void sort(int arr[], int n, bool increasing = true) {
        for(int i = n / 2 - 1; i >= 0; i--) {
            heapify(arr, n, i, increasing);
        }

        for(int i = n - 1; i > 0; i--) {
            swap(arr[0], arr[i]);
            heapify(arr, i, 0, increasing);
        }
    }

    void print_array(int arr[], int n) {
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
};

int main() {
    HeapSort h;
    int arr[] = {20, 5, 15, 30, 10, 25};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "original array: ";
    h.print_array(arr, n);

    h.sort(arr, n, true);
    cout << "sorted in increasing order: ";
    h.print_array(arr, n);

    h.sort(arr, n, false);
    cout << "sorted in decreasing order: ";
    h.print_array(arr, n);

    return 0;
}
