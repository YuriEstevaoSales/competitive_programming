#include <iostream>

using namespace std;

int main(){

int t, a, b;
cin >> t;

for(int i=0;i<t;i++){
    int aux=0;
    cin >> a >> b;
    int initialB=b;

    if(a<b){
        aux = b-a;
    }else{
        int q = a / b;
        long long int n1 = b * q;
        long long int n2 = b * (q+1);
        if(abs(a-n1) == 0){
            aux = 0;
        }else{
            if(a < abs(a-n1)){
                aux = n1-a;
            }else{
                aux = n2-a;
            }
        }
    }

    cout << aux << endl;
}

return 0;
}
