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
        ll a,b;
        cin>>a>>b;
        ll ans = INT_MAX;
        for(int i = 0; i<32; i++){
            ll count = i;
            ll new_b = b+i;
            if(new_b == 1){
                continue;
            }
            ll copy_a = a;
            while(copy_a>0){
                copy_a /= new_b;
                count++; 
            }
            ans = min(ans,count);
        }
        cout<<ans<<endl;
    }

}