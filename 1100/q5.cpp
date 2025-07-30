#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(ll i = 0; i<n; i++){
            cin>>v[i];
        }
        vector<ll>prev(n);
        prev[0] = v[0];
        for(ll i = 1; i<n; i++){
            prev[i] = v[i] + prev[i-1];
        }
        ll ans = 0;
        for(ll k = 1; k<n; k++){
            if(n%k) continue;
            ll start = k-1;
            ll maxi = prev[start];
            ll mini = prev[start];
            for(ll idx = start+k; idx<n; idx+=k){
                ll curr = prev[idx]-prev[idx-k];
                maxi = max(maxi,curr);
                mini = min(mini,curr);
            }
            ans = max(ans,maxi-mini);
        }
        cout<<ans<<endl;
    }

}