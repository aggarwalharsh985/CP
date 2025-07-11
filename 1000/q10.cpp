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
        long long n,k,b,s;
        cin>>n>>k>>b>>s;
        long long mini = k*b;
        long long maxi = (k*b) + (k-1)*n;
        if(s<mini || s>maxi){
            cout<<"-1"<<endl;
            continue;
        }
        // else{
            vector<long long>ans(n,0);
            ans[0] = mini;
            s -= mini;
            for(int i = 0; i<n; i++){
                long long add = min(k - 1,s);
                ans[i] += add;
                s -= add;
            }
            for(long long i = 0; i<n; i++){
                cout<<ans[i]<<" ";
            }
            cout<<endl;
        // }
    }

}