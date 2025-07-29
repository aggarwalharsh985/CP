#include<bits/stdc++.h>
using namespace std;
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
        int n,k;
        cin>>n>>k;
        vector<int>a(n), b(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        int maxi = 0;
        int ans = 0;
        int sum = 0;
        for(int i = 0; i<min(n,k); i++){
            sum += a[i];
            maxi = max(maxi,b[i]);
            ans = max(ans, sum + maxi*(k-(i+1)));
        }
        cout<<ans<<endl;
    }

}