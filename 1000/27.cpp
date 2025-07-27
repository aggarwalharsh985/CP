#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isFair(ll n){
    ll num = n;
    while(num != 0){
        ll x = num%10;
        if(x != 0 && n%x != 0){
            return false;
        }
        num = num/10;
    }
    return true;
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
        ll n;
        cin>>n;
        while(!isFair(n)){
            n += 1;
        }
        cout<<n<<endl;
    }

}