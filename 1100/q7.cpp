#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool check(ll mid, vector<ll>&v, ll x){
    ll units = 0;
    ll n = v.size();
    for(int i = 0; i<n; i++){
        if(v[i]<mid){
            units += (mid-v[i]);
        }
    }
    return units<=x;
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
        ll n,x;
        cin>>n>>x;
        vector<ll>v(n);
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        ll s = 1, e = INT_MAX, ans = -1;
        while(s<=e){
            ll mid = s + (e-s)/2;
            if(check(mid,v,x)){
                ans = mid;
                s = mid+1;
            }else{
                e = mid-1;
            }
        }
        cout<<ans<<endl;
    }

}