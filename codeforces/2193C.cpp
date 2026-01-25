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

void solve() {
    int n, q;
    cin >> n >> q;

    vi a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    vi b(n);
    for(int i = 0; i < n; i++) cin >> b[i];

    vi best_vals(n);
    int current_max = 0;

    for(int i = n - 1; i >= 0; i--) {
        int local_max = max(a[i], b[i]);
        current_max = max(current_max, local_max);
        best_vals[i] = current_max;
    }

    vll pref(n + 1, 0);
    for(int i = 0; i < n; i++) {
        pref[i + 1] = pref[i] + best_vals[i];
    }
   
    for(int i = 0; i < q; i++) {
        int l, r;
        cin >> l >> r;
        cout << (pref[r] - pref[l - 1]) << (i == q - 1 ? "" : " ");
    }
    cout << "\n";
}

int main() {
    fast_io();

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
