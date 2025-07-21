#include <iostream>
#include <vector>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){

    int n,k;
    cin >> n >> k;
    vector<long long int> v;
    long long int total=0;

    for(int i=0;i<n;i++){
        long long int a;
        cin >> a;
        v.push_back(a);
        total+=a;
    }

    double ans=0.0, r = 1e7, l=0;

    while(r - l > 1e-7){
        double mid = (r+l) / 2;
        int count = 0;

        for(long long int x : v){
            count += floor(x/mid);    
        }

        if(count>=k){
            ans = mid;
            l = mid;
        }else{
            r = mid;
        }
    }

    cout << fixed << setprecision(10) << ans << endl;

return 0;
}
