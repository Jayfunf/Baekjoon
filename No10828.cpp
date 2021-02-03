#define _CRT_SECURE_NO_WARNINGS
#include <algorithm>
#include <iostream>
#include <vector>
#include <stack>
using namespace std;

int main() {
    stack<int> s;
    int n;
    cin >> n;

    while (n--) {
        string cmd;
        cin >> cmd;
        if (cmd == "push") {
            int a;
            cin >> a;
            s.push(a);
        }
        else if (cmd == "pop") {
            cout << (s.empty() ? -1 : s.top()) << '\n';
            if (!s.empty()) {
                s.pop();
            }
        }
        else if (cmd == "size") {
            cout << s.size() << '\n';
        }
        else if (cmd == "empty") {
            cout << s.empty() << '\n';
        }
        else if (cmd == "top") {
            cout << (s.empty() ? -1 : s.top()) << '\n';
        }
    }
    return 0;
}