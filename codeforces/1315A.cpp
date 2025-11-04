#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main(){

int t, a, b, x, y;
cin >> t;

for(int i=0;i<t;i++){
    int A1 = 0, A2 = 0;
    cin >> a >> b >> x >> y;

    if(x < round(a/2)){
        if(y < round(b/2)){
            A1 = (a - (x+1)) * b;
            A2 = (b - (y+1)) * a;
            cout << max(A1, A2) << endl;
        }else{
            A1 = (a - (x+1)) * b;
            A2 = y * a;
            cout << max(A1, A2) << endl;
        }
    }else{
        if(y < round(b/2)){
            A1 = x * b;
            A2 = (b - (y+1)) * a;
            cout << max(A1, A2) << endl;
        }else{
            A1 = x * b;
            A2 = y * a;
            cout << max(A1, A2) << endl;
        }
    }
}

return 0;
}
