#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int x=0,n=0,m=0;
        cin >> x >> n >> m;

        while(n>0){
            if(x<=m*10){
                break;
            }
            x = std::floor(x/2) + 10; 
            n--;
        }

        if(m*10 >= x){
            cout << "YES" <<endl;
        }else{
            cout << "NO" << endl;
        }
    }
 
return 0;
}
