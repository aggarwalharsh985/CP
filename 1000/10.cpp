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
        char c;
        string s;
        cin>>n>>c>>s;
        string m = s  + s;
        if(c == 'g'){
            cout<<0<<endl;
            continue;
        }
        ll g = -1;
        ll dist = INT_MIN;
        for(ll i = m.size()-1; i>=0; i--){
            if(m[i] == 'g'){
                g = i;
            }
            if(m[i] == c){
                ll diff = g-i;
                dist = max(dist,diff);
            }
        }
        cout<<dist<<endl;
    }
}