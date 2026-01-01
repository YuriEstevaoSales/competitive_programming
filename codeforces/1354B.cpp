#include <iostream>
#include <algorithm>

using namespace std;

int main(){

int t;
cin >> t;

for(int i=0;i<t;i++){
    int l1=-1, l2=-1, l3=-1, s=200001, aux;
    string in;
    cin >> in;

    for(int j=0;j<in.size();j++){
        char x = in[j];

        switch(x){
            case '1':
                l1=j;
                break;
            case '2':
                l2=j;
                break;
            case '3':
                l3=j;
                break;
        }

        if(l1!=-1 && l2!=-1 && l3!=-1){
            aux = (max({l1, l2, l3}) - min({l1, l2, l3})) + 1;
            s = min(s, aux);
        }
    }
    if(s!=200001){
        cout << s << endl;
    }else{
        cout << 0 << endl;
    }
}

return 0;
}
