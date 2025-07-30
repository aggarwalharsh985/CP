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
        ll n,q;
        cin>>n>>q;
        vector<ll>a(n),x(q);
        for(ll i = 0; i<n; i++) cin>>a[i];
        for(ll i = 0; i<q; i++) cin>>x[i];

        ll prev = 31;
        for(ll i = 0; i<q; i++){
            if(x[i] >= prev) continue;
            ll val = pow(2,x[i]);
            for(ll j = 0; j<n; j++){
                if(a[j] % val == 0){
                    a[j] += (val/2);
                }
            }
            prev = x[i];
        }
        for(auto&i:a){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}