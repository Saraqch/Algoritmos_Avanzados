#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int n;
    cin >> n;
    n= (n*2) + 1;

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            cout  << "1";
        }else{
            cout << "0";
        }
    }
}
