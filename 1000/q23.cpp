#include<iostream>
using namespace std;
#define ll long long

ll solve(ll n){
    for(int i = n;;i++){
        bool isPrime = true;
        for(ll j = 2; j*j<=i; j++){
            if(i%j == 0){
                isPrime = false;
                break;
            }
        }
        if(isPrime){
            return i;
        }
    }
}


int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        ll d;
        cin>>d;
        ll p = solve(d+1);
        ll q = solve(d+p);
        ll ans = 1LL*p*q;
        cout<<ans<<endl;
    }

}