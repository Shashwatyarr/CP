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


bool comp(vector<int>& a,vector<int> & b){
    int ma=0,mb=0;
    for(auto it:a) ma=max(ma,it);
    for(auto it:b) mb=max(mb,it);
    return ma<mb;
}

bool poss(vector<vector<int>>& a,int mid){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            if(a[i][j]>=mid)return 0;
            else mid++;
        }
    }
    return 1;
}

void solve(){
    int n;
    cin>>n;
    int tm=0;
    vector<vector<int>> a(n);
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        for(int j=0;j<k;j++){
            int v;
            cin>>v;
            tm=max(tm,v);
            a[i].pb(v);
        }
    }
    sort(a.begin(),a.end(),comp);
    int r=tm,l=0;
    int ans=tm;
    while(l<=r){
        int mid=(l+r)/2;
        if(poss(a,mid)){
            ans=mid;
            r=mid-1;
        }
        else{
            l=mid+1;
        }
    }
    cout<<ans<<endl;
    
}


int main() {
    fastio();
    int t;
    cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}
