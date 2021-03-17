#include<iostream>
#include<queue>
#include<vector>

using namespace std;


int main(){
    int a, b;
    ios_base::sync_with_stdio(false);

    cin >> a >> b;

    queue<int> Q;
    vector<int> V;

    for(int i=0; i<a; i++)
        Q.push(i+1);

    for(int j = 0; j<a;j++){
        for(int k = 0; k<b-1;k++){ 
            int F=Q.front();
            Q.pop(); 
            Q.push(F);
        }
        V.push_back(Q.front());
        Q.pop();
    }
    cout<<"<";

    for(int i=0; i<a; i++){
        cout << V[i];
        if(i != a-1)
            cout<<", ";
    }
     cout<<">";
}   