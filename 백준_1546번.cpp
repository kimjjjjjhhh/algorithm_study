#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // ���� �� ���� ������ ����
    int sum = 0;
    int max = 0; // ���� �� ���� �� ���� �� �� ������ ����
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a; // ����� ���ϱ� ���� ������� ������ �� ����
        if (a >= max) {
            max = a; // ���� �� �� ������ if���� ����� ���
        }
    }
    cout << sum * 100. / max / n;
}