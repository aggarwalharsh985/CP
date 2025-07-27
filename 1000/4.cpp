#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long t;
    cin>>t;
    while(t--){
        long long a;
        cin>>a;
        vector<long long>second;
        long long mini = INT_MAX;

        for(int i = 0; i<a; i++){
            long long n;
            cin>>n;
            vector<long long>arr(n);

            for(int i = 0; i<n; i++){
                cin>>arr[i];
            }

            sort(arr.begin(),arr.end());
            mini = min(mini,arr[0]);
            second.push_back(arr[1]);
        }

        sort(second.begin(),second.end());
        long long sum = accumulate(second.begin(),second.end(),0LL);
        long long ans = mini+sum-second[0];
        cout<<ans<<endl;
    }
}