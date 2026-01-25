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
    int n;
    if (!(cin >> n)) return;
    vector<long long> a(n);
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    vector<int> b(n);
    for (int i = 0; i < n; ++i) {
        cin >> b[i];
    }
    sort(a.begin(), a.end(), greater<long long>());

    long long max_score = 0;
    long long swords_needed = 0;
 
    for (int i = 0; i < n; ++i) { 
        
        swords_needed += b[i];
        if (swords_needed > n) {
            break;
        }
        long long current_x = a[swords_needed - 1];
        long long levels_completed = i + 1;
        
        long long current_score = current_x * levels_completed;

        if (current_score > max_score) {
            max_score = current_score;
        }
    }

    cout << max_score << endl;
}

int main() {
   fast_io(); 

    int t;
    if (cin >> t) {
        while (t--) {
            solve();
        }
    }
    return 0;
}

