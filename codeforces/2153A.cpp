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
    cin>>t;
    while(t--){
        int n, in;
        cin>>n;
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>in;
            s.insert(in);
        }
        cout << s.size() << endl;
    }

    return 0;
}

