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
        int n;
        cin>>n;
        string a, b;
        char aux;
        cin>>a;
        cin>>b;
        for(int i=0;i<n;i++){
            aux=b[i];
            auto index = a.find(aux);
            if(index != string::npos)
                a.erase(index, 1);
        }
        if(a.size()==0){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }

    return 0;
}

