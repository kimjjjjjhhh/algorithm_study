#include <iostream>
#include <string>
using namespace std;

/*int main() {
    int a;
    cin >> a;
    cin.ignore(); // Enter 키 입력을 무시하기 위해 추가

    for (int i = 0; i < a; i++) {
        string b;
        getline(cin, b); // 한 줄을 입력 받아 문자열 저장

        string k;
        string m;

        for (int j = 0; j <= b.length(); j++) {
            if (j == b.length() || b[j] == ' ') { // 단어 끝 or 문자열 끝일 경우
                for (int p = k.length() - 1; p >= 0; p--) {
                    m += k[p]; // p를 점점 작아지게 하여 k와는 반대로 m에 문자열 저장
                }
                if (j != b.length()) // 문자열 끝이 아니라면 공백 추가
                    m += ' ';
                k = ""; // k 초기화
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
    cin >> n; // 시험 본 과목 개수를 받음
    int sum=0; 
    int max=0; // 시험 본 과목 중 가장 잘 본 점수를 저장
    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        sum += a; // 평균을 구하기 위해 과목들의 점수를 다 더함
        if (a >= max) {
            max = a; // 가장 잘 본 점수를 if문을 사용해 골라냄
        }
    }
    cout << sum * 100. / max / n;
}