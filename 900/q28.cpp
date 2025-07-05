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
        long long n,k;
        cin>>n>>k;
        long long a = n*k;
        vector<long long>arr(a);
        for(int i = 0; i<a; i++){
            cin>>arr[i];
        }

        long long ans = 0;
        if(n == 1){
            for(int i = 0; i<a; i++){
                ans += arr[i];
            }
        }
        else if(n == 2){
            for(int i = 0; i<a; i += 2){
                ans += arr[i];
            }
        }
        else{
            long long step = n / 2 + 1;
            long long i = a - step;
            for (long long cnt = 0; cnt < k; cnt++, i -= step) {
                ans += arr[i];
            }
        }
        
        // cout<<endl;
        cout<<ans<<endl;
    }
}