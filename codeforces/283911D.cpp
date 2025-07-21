#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){

    long long int n, input;
    vector<long long int> v;
    cin >> n;

    for(long long int i=0;i<n;i++){
        cin >> input;
        v.push_back(input);
    }
    sort(v.begin(), v.end());

    long long int k, l, r;
    cin >> k;

    for(long long int j=0;j<k;j++){
        cin >> l >> r;
        long long a=0, b=n-1, ans1=n, ans2=n;
        
        while(a<=b){
            long long mid1 = (a+b) / 2 ;

            if(v[mid1]>r){
                ans1=mid1;
                b = mid1 - 1;
            }else{
                a = mid1 + 1;
            }
        }
        a=0, b=n-1;

        while(a<=b){
            long long mid2 = (a+b) / 2 ;

            if(v[mid2]>=l){
                ans2=mid2;
                b = mid2 - 1;
            }else{
                a = mid2 + 1;
            }
        }

        cout << ans1 - ans2 << " ";
    }

return 0;
}
