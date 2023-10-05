#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
    int test_case;
    cin >> test_case;
    cin.ignore();

    for (int i = 0; i < test_case; i++) {
        string str1;
        getline(cin, str1);
        int k = 0;
        stack<char> st;

        for (int j = 0; j <= str1.length(); j++) {
            if (str1[j] == ' ' || j == str1.length()) {
                while (!st.empty()) {
                    cout << st.top();
                    st.pop();
                }
                if (j != str1.length()) {
                    cout << ' ';
                }
            }
            else {
                st.push(str1[j]);
            }
        }
        cout << endl;
    }
    return 0;
}
