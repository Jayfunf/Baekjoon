#include <iostream>

using namespace std;

int main(){
    ios_base::sync_with_stdio(0);

    int x,y,z;

    cin >>x>>y;

    z=(x/y)*100;
    if(z>=99)
        cout<<-1;

    cout << z;


    return 0;
}