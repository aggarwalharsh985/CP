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
        ll ra = a;
        ll rb = b;
        while(ra%2 == 0){
            ra/=2;
        }
        while(rb%2 == 0){
            rb/=2;
        }
        if(ra != rb){
            cout<<-1<<endl;
        }
        else{
            a /= ra;
            b /= rb;
            a = log2(a);
            b = log2(b);
            ll ans = ceil(abs(a-b)/3.0);
            cout<<ans<<endl;
        }
    }
}