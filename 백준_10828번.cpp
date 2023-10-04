#include <iostream>
#include <string>
using namespace std;

int stack[10000]; // �迭 ����
int num = 0;

void push(int a) { // push
    stack[num] = a; // ���� a�� ���ÿ� ����
    num++;
}

int pop() { // pop
    if (num == 0) return -1;
    else {
        num--;
        return stack[num];
    }
}

int size() { //size
    return num;
}

int empty() { //empty
    if (num == 0) {
        return 1;
    }
    else return 0;
}

int top() { //top
    if (num == 0) return -1;
    else return stack[num - 1];
}

int main() {
    int n = 0;
    cin >> n;
    cin.ignore(); // ���๮�� ó��

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); // ���� �а� ���ڿ� ��ȯ

        if (s.substr(0, 4) == "push") { // ���ڿ� slicing
            int push_num = stoi(s.substr(5)); // "push " ������ ���ڿ��� ������ ��ȯ
            push(push_num);
        }
        else if (s == "top") {
            cout << top() << endl;
        }
        else if (s == "pop") {
            cout << pop() << endl;
        }
        else if (s == "empty") {
            cout << empty() << endl;
        }
        else if (s == "size") {
            cout << size() << endl;
        }
        else {}
    }
}