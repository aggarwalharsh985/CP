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
        int  n,m;
        cin>>n>>m;
        vector<int>arr(n*m);
        int count = 0;
        for(int i = 0; i<n*m; i++){
            cin>>arr[i];
            if(arr[i]<0){
                count++;
                arr[i] = arr[i]*(-1);
            }
        }
        count = count%2;
        sort(arr.begin(),arr.end());
        int Nsum = 0;
        int Psum = 0;
        for(int i = 0; i<count; i++){
            Nsum += arr[i];
        }
        for(int i = count; i<n*m; i++){
            Psum += arr[i];
        }
        int ans = Psum-Nsum;
        cout<<ans<<endl;
    }

}