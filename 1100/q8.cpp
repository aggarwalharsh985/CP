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
        ll n,k,a,b;
        cin>>n>>k>>a>>b;
        vector<ll>x(n+1),y(n+1);
        for(ll i = 1; i<=n; i++){
            cin>>x[i]>>y[i];
        }
        ll ans = abs(x[a]-x[b]) + abs(y[a]-y[b]);
        ll mins = 1e17;
        ll mint = 1e17;
        for(ll i = 1; i<=k; i++){
            mins = min(mins,abs(x[a]-x[i]) + abs(y[a]-y[i]));
            mint = min(mint,abs(x[b]-x[i]) + abs(y[b]-y[i]));
        }
        ans = min(ans,mins+mint);
        cout<<ans<<endl;
    }
}