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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        int count = 0;
        int ans = INT_MAX;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i]%2 == 0){
                count++;
            }
        }
        for(int i = 0; i<n; i++){
            if(arr[i]%k == 0){
                ans = 0;
                break;
            }
            else{
                ans = min(ans,k- arr[i]%k);
            }
        }

        if(k == 4){
            if(count >= 2){
                ans = min(ans,0); 
            }
            if(count == 1){
                ans = min(ans,1); 
            }
            if(count == 0){
                ans = min(ans,2); 
            }
            cout<<ans<<endl;
            continue;
        }
        cout<<ans<<endl;
        
    }
}