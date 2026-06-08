#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int,int> pii;
typedef pair<ll,ll> pll;

#define f first
#define s second
#define pb push_back
#define mp make_pair
#define rep(i,a,b) for(int i=a;i<=b;i++)
#define rev(i,a,b) for(int i=a;i>=b;i--)
#define all(x) x.begin(),x.end()
#define sz(x) ((int)x.size())
#define getv(v,n) for(int i=0;i<n;i++){int x;cin>>x;v.pb(x);}
#define getlv(v,n) for(int i=0;i<n;i++){ll x;cin>>x;v.pb(x);}

void fastio(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
}


void solve() {
    int n;
    cin >> n;
    
    vector<pair<long long, long long>> c(n);
    
    for (int i = 0; i < n; i++) {
        long long k;
        cin >> k;
        
        long long r = 0;
        for (int j = 0; j < k; j++) {
            long long a;
            cin >> a;
            r = max(r, a - j + 1);
        }
        
        c[i] = {r, k};
    }
    
    sort(c.begin(), c.end());
    
    long long p = 0;
    long long q = 0;
    
    for (int i = 0; i < n; i++) {
        if (q < c[i].first) {
            long long d = c[i].first - q;
            p += d;
            q += d;
        }
        q += c[i].second;
    }
    
    cout << p << "\n";
}

int main() {
    fastio();
    int t;
    cin >> t;
    while (t--) solve();
    
    return 0;
}
