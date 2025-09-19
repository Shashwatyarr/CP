#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin >> t;
    while(t--){
        int n, W;
        cin >> n >> W;
        map<int,int> freq; 
        for(int i=0; i<n; i++){
            int x; cin >> x;
            freq[x]++;
        }

        int boxes = 0;
        while(!freq.empty()){
            int space = W;

            while(true){
                auto it = freq.upper_bound(space); 
                if(it == freq.begin()) break;
                --it; 

                int val = it->first;
                space -= val;
                if(--freq[val] == 0) freq.erase(val);
            }
            boxes++;
        }
        cout << boxes << "\n";
    }
}
