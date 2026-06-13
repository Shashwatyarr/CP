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
    cin>>n;
    vector<int> a;
    getv(a,n);
    int count=0;
    vector<int> b(all(a));
    sort(all(b),greater<int>());
    long long sum=accumulate(all(a), 0LL);
    int mx=b[0];
    vector<int> ans;
    for(int i=0;i<n;i++){
        if(a[i]!=mx && sum-mx-a[i]==mx){
            count++;
            ans.push_back(i);
        }
        else if(a[i]==mx && sum-b[1]-a[i]==b[1]){
            count++;
            ans.push_back(i);
        }
    }
    cout<<count<<endl;
    for(auto it:ans) cout<<it+1<<" ";
    cout<<endl;
}

int main() {
    fastio();
    solve();
    return 0;
}
