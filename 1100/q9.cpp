#include<bits/stdc++.h>
using namespace std;
#define int long long

bool check(vector<int>v, int n, int c, int mid){
    int area = 0;
    for(int i = 0; i<n; i++){
        area += (v[i]+ 2*mid)*(v[i]+ 2*mid);
        if(area>c) return 0 ;
    }
    return 1;
}


signed main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n,c;
        cin>>n>>c;
        vector<int>v(n);
        int s = 1;
        int e = 1e9;
        for(int i = 0; i<n; i++){
            cin>>v[i];
        }
        int ans = -1;
        while(s<=e){
            int mid = s+(e-s)/2;
            if(check(v,n,c,mid)){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
        }
        cout<<ans<<endl;
    }

}