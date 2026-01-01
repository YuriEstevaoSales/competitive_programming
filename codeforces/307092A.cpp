#include <iostream>
#include <vector>

using namespace std;

int main(){

int n, m;
cin >> n >> m;
long long in;
vector<long long int> v1;
vector<long long int> v2;

for(int i=0;i<n;i++){
    cin >> in;
    v1.push_back(in);
}
for(int j=0;j<m;j++){
    cin >> in;
    v2.push_back(in);
}
int a=0,b=0;

while(a<n && b<m){
    if(v1[a] < v2[b]){
        cout << v1[a] << " ";
        a++;
    }else{
        cout << v2[b] << " ";
        b++;
    }
}

while (a < n) {
    cout << v1[a] << " ";
    a++;
}

while (b < m) {
    cout << v2[b] << " ";
    b++;
}

return 0;
}
