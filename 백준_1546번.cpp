#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n; // 시험 본 과목 개수를 받음
    int sum = 0;
    int max = 0; // 시험 본 과목 중 가장 잘 본 점수를 저장
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