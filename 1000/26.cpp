#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ceil_div(ll a, ll b) {
    return (a + b - 1) / b;
}
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
        ll x,y,k;
        cin>>x>>y>>k;
        ll coal = y*k;
        ll s = ceil_div(coal+k-1, x-1);
        cout<<k+s<<endl;
    }
}