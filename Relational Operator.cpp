#include <bits/stdc++.h>
using namespace std;

int main(){
    ios:: sync_with_stdio(0); cin.tie(0); cout.tie(0);

    int n;
    cin >> n;

    int a, b;

    while(n--){
        cin >> a >> b;
        if(a > b){
            cout << ">" << endl;
        }
        if(a < b){
            cout << "<" << endl;
        }
        if(a == b){
            cout << "=" << endl;
        }
    }

}