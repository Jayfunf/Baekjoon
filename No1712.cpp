#include <iostream>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int A,B,C;
    int set = 0;
    cin >>A >> B >> C;
    if(B>=C){
        cout << -1;
        exit(0);
    }
    set = A/(C-B)+1;
    cout << set;
    return 0;
}