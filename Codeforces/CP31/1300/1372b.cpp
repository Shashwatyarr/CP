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

void solve(){
    ll n;
    cin >> n;

    ll p = n;
    for(ll i = 2; i * i <= n; i++){
        if(n % i == 0){
            p = i;
            break;
        }
    }

    if(p == n){
        cout << 1 << " " << n - 1 << '\n';
    }
    else{
        cout << n / p << " " << n - n / p << '\n';
    }
}

int main() {
    fastio();
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}