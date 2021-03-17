#include<iostream>
#include<vector>
#include<algorithm>
#include<queue>
 
using namespace std;
 
int N;
 
void solve() {
    vector<int> A;
    vector<pair<int, int> > Arr;
    int temp;
 
    cin >> temp;
    A.push_back(temp);
    Arr.push_back({ 0, temp });
    for (int i = 1; i < N; i++) {
        cin >> temp;
        
        if (A[A.size() - 1] < temp) {
            Arr.push_back({ A.size(), temp });
            A.push_back(temp);
            
        }
        else {
            for (int j = 0; j < A.size(); j++) {
                if (A[j] >= temp) {
                    Arr.push_back({ j, temp });
                    A[j] = temp;
                    break;
                }
            }
        }
    }
 
    cout << A.size() << endl;
 
    vector<int> ret;
    int num = A.size() - 1;
    for (int i = N - 1; i >= 0; i--) {
        if (Arr[i].first == num) {
            ret.push_back(Arr[i].second);
            num--;
        }
    }
    reverse(ret.begin(), ret.end());
    for (int i = 0; i < ret.size(); i++) {
        cout << ret[i] << " ";
    }

}
 
int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
 
    cin >> N;
    solve();
}