#include <iostream>
#include <queue>
#include <vector>


using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    int a,b;

    queue<int> Q;
    vector<int> V;

    cin >> a >> b;

    for(int i = 0; i<a;i++)
        Q.push(i+1);

    for(int i = 0; i<a;i++){
        for(int j = 0 ; j<b-1;j++){
            int F = Q.front();
            Q.pop();
            Q.push(F);
        }
        V.push_back(Q.front());
        Q.pop(); //다시 이해
    }

    for(int i = 0; i<a; i++)
        cout<< V[i]; 

}