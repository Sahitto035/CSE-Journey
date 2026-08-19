#include <iostream>
using namespace std;
class Queue {
private:
    int numbers[100], head, tail, size;
    int maxSize = 100;
public:
    Queue() {
        head = 0;
        tail = 0;
        size = 0;
    }
    Queue(int h, int t, int s) {
        head = h;
        tail = t;
        size = s;
    }
    int enQueue(int value) {
        if (size == maxSize) {
            cout << "Queue size reached" << endl;

        return 0;
        }
        numbers[tail] = value;
        tail = (tail + 1) % maxSize;
        size++;
        return 1;
    }
    int deQueue() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return -1;
        }
        int value = numbers[head];
        head = (head + 1) % maxSize;
        size--;
        return value;
    }
    void show() {
        if (size == 0) {
            cout << "Queue is empty" << endl;
            return;
        }
        cout << "Queue elements are:" << endl;
        int current = head;
        for (int i = 0; i < size; i++) {
            cout << numbers[current] << " ";
            current = (current + 1) % maxSize;
            cout << endl;
        }
    }
};
int main() {
    Queue q(10, 10, 0);
    cout << "Enqueuing elements..." << endl;
    int result1 = q.enQueue(10);
    cout << "enqueue 10 status " << result1 << endl;
    q.enQueue(20);
    q.enQueue(30);
    q.show();
    cout << "Dequeuing elements..." << endl;
    cout << "Dequeued: " << q.deQueue() << endl;
    q.show();
    return 0;
}