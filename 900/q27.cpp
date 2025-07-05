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
        long long n,x;
        cin>>n>>x;
        vector<long long>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        long long mini = 0;
        long long maxi = 0;
        for(int i = 0; i<n; i++){
            maxi += (ceil(arr[i]*1.0/x));
            mini += arr[i];
        }
        mini = ceil(mini*1.0/x);
        cout<<mini<<" "<<maxi<<endl;
    }
}