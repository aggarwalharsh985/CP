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
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        vector<pair<int,int>>segemnts(n);
        for(int i = 0; i<n; i++){
            segemnts[i] = {arr[i]-x, arr[i]+x};
        }
        int ans = 0;
        int l = segemnts[0].first;
        int r = segemnts[0].second;
        for(int i = 0; i<n; i++){
            l = max(l,segemnts[i].first);
            r = min(r,segemnts[i].second);
            if(l>r){
                ans ++ ;
                l = segemnts[i].first;
                r = segemnts[i].second;
            }
        }
        cout<<ans<<endl;
    }

}