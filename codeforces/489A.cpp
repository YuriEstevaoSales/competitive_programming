#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>

using namespace std;

int main(){

int n, count=0;
cin >> n;
long long int a;
vector<long long int> v;
vector<int> ind;

for(int i=0;i<n;i++){
    cin >> a;
    v.push_back(a);
}

for(int j=0;j<n;j++){
    long long int min=LLONG_MAX;
    int in=-1;
    for(int k=j;k<n;k++){
        if(v[k]<min){
            min=v[k];
            in=k;
        }
    }
    v[j] = v[j] ^ v[in];
    v[in] = v[j] ^ v[in];
    v[j] = v[j] ^ v[in];
    ind.push_back(j);
    ind.push_back(in);
    count++;
}

cout << count << endl;

for(int k=0;k<count*2;k++){
    cout << ind[k] << " " << ind[k+1] << endl;
    k++;
}

return 0;
}
