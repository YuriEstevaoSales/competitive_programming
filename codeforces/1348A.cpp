#include <iostream>
#include <cmath>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        int n,p1=0,p2=0,j=0,c1=1,c2=1,aux=0;
        cin >> n;
       
        p1+=pow(2,n);
        p2+=pow(2,n-1);
        for(j=2;j<n;j++){
            if(c1<n/2 && c2<n/2){
                if(p1>p2){
                    p2+=pow(2,n-j);
                    c2++;
                }else{
                    p1+=pow(2,n-j);
                    c1++;
                }
            }else{
                aux+=pow(2,n-j);
            }    
        }
        if(c1>c2){
            p2+=aux;
        }else{
            p1+=aux;
        }
        cout << p1 - p2 << endl;
    }

return 0;
}
