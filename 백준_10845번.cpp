#include <iostream>
#include <string>
using namespace std;

int arr[10001];

class Queue {
private:
    int rear = 0;
    int front = 0;

public:
    void push(int x) {
        arr[rear] = x;
        rear++;
    }

    int pop() {
        if (front == rear) return -1;
        else {
            front++;
            return arr[front - 1];
        }
    }

    int size() {
        return rear - front;
    }

    bool empty() {
        if (rear == front) return true;
        else return false;
    }

    int getfront() {
        if (rear == front) return -1;
        else return arr[front];
    }

    int getback() {
        if (rear == front) return -1;
        else return arr[rear - 1];
    }
};

int main() {
    int n;
    cin >> n;
    cin.ignore();

    Queue myQueue;

    for (int i = 0; i < n; i++) {
        string str;
        getline(cin, str);

        if (str.substr(0, 4) == "push") {
            int num = stoi(str.substr(5));
            myQueue.push(num);
        }
        else if (str == "front") {
            cout << myQueue.getfront() << endl;
        }
        else if (str == "back") {
            cout << myQueue.getback() << endl;
        }
        else if (str == "size") {
            cout << myQueue.size() << endl;
        }
        else if (str == "pop") {
            cout << myQueue.pop() << endl;
        }
        else if (str == "empty") {
            cout << myQueue.empty() << endl;
        }
        else {};
    }
}