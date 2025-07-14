#include <iostream>
#include <algorithm>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        long long int x,y,a,b;
        cin >> x >> y;
        cin >> a >> b;

        if(b>2*a){
            cout << a*x + a*y << endl;
        }else{
            long long int aux, total=0;
            aux = max(x,y) - min(x,y);
            total += aux * a;
            total += min(x,y) * b;
            cout << total << endl;
        }
    }

return 0;
}
