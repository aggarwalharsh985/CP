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
        ll a;
        vector<pair<ll,ll>>v;
        for(ll i = 0; i<n; i++){
            cin>>a;
            v.push_back({a,i});
        }
        sort(v.begin(),v.end());
        vector<ll>prev(n);
        prev[0] = v[0].first;
        for(ll i = 1; i<n; i++){
            prev[i] = prev[i-1] + v[i].first;
        }
        vector<ll>ans(n);
        for(ll i = 0; i<n; i++){
            ll j = i;
            ll found = i;
            while(j<n){
                pair<ll,ll>temp({prev[j]+1, INT_MIN});
                ll idx = lower_bound(v.begin(), v.end(),temp)- v.begin();
                idx--;
                if(j == idx){
                    break;
                }
                found += idx-j;
                j = idx;
            }
            ans[v[i].second] = found;
        }
        for(auto&i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}