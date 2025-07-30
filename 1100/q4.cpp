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
        vector<ll>a(n);
        for(ll i = 0; i<n; i++){
            cin>>a[i];
        }
        ll int ans = INT_MIN , sum = 0;
        for(ll i = 0; i<n; i++){
            sum += a[i];
            ans = max(ans,sum);
            if(i<n && (max(a[i],-a[i]))%2 == (max(a[i+1],-a[i+1]))%2){
                sum = 0;
            }
            if(sum<0){
                sum = 0;
            }
        }
        cout<<ans<<endl;
    }
}