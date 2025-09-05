#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);
    int a1, a2, a3;
    cin >> a1 >> a2 >> a3;

    int suma = a1 + a2 + a3;

    if(suma >= 22){
        cout << "bust";
    }else{
        cout << "win";
    }
}