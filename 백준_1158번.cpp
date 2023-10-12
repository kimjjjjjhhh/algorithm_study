#include <iostream>
#include <string>
using namespace std;

class Queue {
private:
    int arr[5001];
    int rear = 0;
    int front = 0;

public:
    void push(int x) {
        arr[rear] = x;
        rear = (rear + 1) % 5001;
    }

    int pop() {
        if (rear == front) return -1;
        else {
            int result = arr[front];
            front = (front + 1) % 5001;
            return result;
        }
    }

    int size() {
        return (rear - front + 5001) % 5001;
    }

    int getfront() {
        if (rear == front) return -1;
        return arr[front];
    }

    int getback() {
        if (rear == front) return -1;
        return arr[rear];
    }


    bool empty() {
        if (rear == front) return false;
        else return true;
    }
};


int main() {
    int max_size, b;
    cin >> max_size >> b;
    string p = "<";

    Queue myQueue;

    for (int i = 0; i < max_size; i++) {
        myQueue.push(i + 1);
    }

    for (int i = 0; i < max_size; i++) {
        for (int j = 0; j < b - 1; j++) {
            myQueue.push(myQueue.pop());
        }
        p += to_string(myQueue.pop());

        if (i < max_size - 1) {
            p += ", ";
        }
    }
    p += ">";
    cout << p;
}