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
        string s;
        cin>>s;
        int b_count = 0;
        for(int i = 0; i<k; i++){
            if(s[i] == 'B'){
                b_count++;
            }            
        }
        int max_b = b_count;
        for(int i = k; i < n; i++){
            if(s[i - k] == 'B') b_count--;  // remove leftmost
            if(s[i] == 'B') b_count++;      // add new rightmost
            max_b = max(max_b, b_count);
        }
        // cout<<ans<<" ";
        cout<<k-max_b<<endl;
    }
}