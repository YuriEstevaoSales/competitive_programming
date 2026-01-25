#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define ull unsigned long long
#define vi vector<int>
#define vll vector<ll>
#define pb push_back
#define eb emplace_back
#define ff first
#define ss second
#define pii pair<int, int>
#define pll pair<ll, ll>
#define all(x) (x).begin(), (x).end()
#define sz(x) int((x).size())

inline void fast_io() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while(t--){
        int n, pos=-1;
        vector<int> v;
        cin >> n;
        int big=n, l=0;
        for(int i=0;i<n;i++){
            int in;
            cin>>in;
            v.eb(in);
            if(in==big && i!=(n-big)){
                pos=i;
            }else{
                if(in==big){
                    big--;
                    l++;
                }
            }
        }
        reverse(v.begin()+l, v.end()-((n-1)-pos));
        for (auto i : v){
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}

