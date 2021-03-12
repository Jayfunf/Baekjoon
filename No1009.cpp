#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int T;
    int a,b, res;
    cin >> T;
    while(T--){
        cin >> a >> b;
        a%=10; res = 1;
        b = (b+3)%4+1;
        while(b--) res*=a;
        res = (res+9)%10+1;
        cout << res << endl;
    }
    return 0;
}