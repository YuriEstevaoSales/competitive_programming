#include <iostream>

using namespace std;

int main(){

    int t;
    cin >> t;

    for(int i=0;i<t;i++){
        long long int n, k;
        cin >> n >> k;

        long long int l=1, r=2*k, ans=-1;


        while(l<=r){
            long long mid = (l+r) / 2;
            long long count = mid - (mid/n);


            if(count>=k){
                ans = mid;
                r = mid - 1;
            }else{
                l = mid + 1;
            }
        }

        cout << ans << endl;
    }

return 0;
}
