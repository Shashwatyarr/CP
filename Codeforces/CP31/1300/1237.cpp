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
    int n;
    cin >> n;

    vector<int> a,b,pos(n+1);

    getv(a,n);
    getv(b,n);

    for(int i=0;i<n;i++){
        pos[a[i]] = i;
    }

    int ptr = 0;
    int cnt = 0;

    vector<int> removed(n,0);

    for(int i=0;i<n;i++){

        while(ptr < n && removed[ptr]) ptr++;

        if(ptr >= n) break;

        if(a[ptr] == b[i]){
            ptr++;
        }
        else{
            cnt++;
            removed[pos[b[i]]] = 1;
        }
    }

    cout << cnt << '\n';
}

int main(){
    fastio();
    solve();
    return 0;
}