#include <iostream>
#include <algorithm>

using namespace std;

int main(){

int t;
cin >> t;

for(int i=0;i<t;i++){
    string in;
    int d=0, count=1;
    cin >> in;
    for(int j=0;j<in.size();j++){
        if(in[j]=='L'){
            count++;
        }else{
            d = max(d, count);
            count=1;
        }
    }
    d = max(d, count);
    cout << d << endl;
}

return 0;
}
