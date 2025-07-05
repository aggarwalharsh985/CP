#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        long long a,b;
        cin>>a>>b;
        if(a == b){
            cout<<0<<" "<<0<<endl;
            continue;
        }
        long long diff = abs(a-b);
        if(a<diff || b<diff){
            cout<<diff<<" "<<min(abs(diff-a),abs(diff-b))<<endl;
            continue;
        }
        long long div = a/diff;
        long long ans = min(abs((diff*div)-a),abs((diff*(div+1))-a));
        cout<<diff<<" "<<ans<<endl;
    }
}