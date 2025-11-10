#include <iostream>
#include <vector>
using namespace std;

class PriorityQueue {
    vector<int> heap;

    void heapify_up(int i) {
        while(i > 0) {
            int parent = (i - 1) / 2;
            if(heap[i] > heap[parent]) {
                swap(heap[i], heap[parent]);
                i = parent;
            } 
            else {
                break;
            }
        }
    }

    void heapify_down(int i) {
        int n = heap.size();
        while(true) {
            int left = 2 * i + 1;
            int right = 2 * i + 2;
            int largest = i;

            if(left < n && heap[left] > heap[largest]) {
                largest = left;
            }
            if(right < n && heap[right] > heap[largest]) {
                largest = right;
            }

            if(largest != i) {
                swap(heap[i], heap[largest]);
                i = largest;
            } 
            else {
                break;
            }
        }
    }

public:
    void insert(int val) {
        heap.push_back(val);
        heapify_up(heap.size() - 1);
    }

    void remove() {
        if(heap.empty()) {
            cout << "queue empty\n";
            return;
        }
        heap[0] = heap.back();
        heap.pop_back();
        heapify_down(0);
    }

    int top() {
        if(heap.empty()) {
            cout << "queue empty\n";
            return -1;
        }
        return heap[0];
    }

    void display() {
        for(int x : heap) {
            cout << x << " ";
        }
        cout << "\n";
    }
};

int main() {
    PriorityQueue pq;
    pq.insert(10);
    pq.insert(40);
    pq.insert(30);
    pq.insert(50);
    pq.insert(20);

    cout << "priority queue: ";
    pq.display();

    cout << "top element: " << pq.top() << "\n";

    pq.remove();
    cout << "after removing top: ";
    pq.display();

    return 0;
}
