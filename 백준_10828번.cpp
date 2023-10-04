#include <iostream>
#include <string>
using namespace std;

int stack[10000]; // 배열 선언
int num = 0;

void push(int a) { // push
    stack[num] = a; // 정수 a를 스택에 넣음
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
    cin.ignore(); // 개행문자 처리

    for (int i = 0; i < n; ++i) {
        string s;
        getline(cin, s); // 한줄 읽고 문자열 반환

        if (s.substr(0, 4) == "push") { // 문자열 slicing
            int push_num = stoi(s.substr(5)); // "push " 이후의 문자열을 정수로 변환
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