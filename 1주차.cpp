#include <iostream>
#include <string>
using namespace std;

/*int main() {
    int a;
    cin >> a;
    cin.ignore(); // Enter Ű �Է��� �����ϱ� ���� �߰�

    for (int i = 0; i < a; i++) {
        string b;
        getline(cin, b); // �� ���� �Է� �޾� ���ڿ� ����

        string k;
        string m;

        for (int j = 0; j <= b.length(); j++) {
            if (j == b.length() || b[j] == ' ') { // �ܾ� �� or ���ڿ� ���� ���
                for (int p = k.length() - 1; p >= 0; p--) {
                    m += k[p]; // p�� ���� �۾����� �Ͽ� k�ʹ� �ݴ�� m�� ���ڿ� ����
                }
                if (j != b.length()) // ���ڿ� ���� �ƴ϶�� ���� �߰�
                    m += ' ';
                k = ""; // k �ʱ�ȭ
            }
            else {
                k += b[j];
            }
        }
        cout << m << endl;
    }

    return 0;
}*/
int main() {
    int n;
    cin >> n; // ���� �� ���� ������ ����
    int sum=0; 
    int max=0; // ���� �� ���� �� ���� �� �� ������ ����
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