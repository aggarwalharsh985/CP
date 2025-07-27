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
        vector<pair<long long,long long>>arr(n);
        for(int i = 0; i<n; i++){
            long long x;
            cin>>x;
            arr[i] = {x,i+1};
        }
        for(int i = 0; i<n; i++){
            arr[i].first = arr[i].first%k;
            if(arr[i].first == 0){
                arr[i].first = k;
            }
        }
        sort(arr.begin(),arr.end(),[&](pair<long long, long long>a, pair<long long, long long>b){
            if(a.first != b.first){
                return a.first>b.first;
            }
            return a.second<b.second;
        });
        for(auto i:arr){
            cout<<i.second<<" ";
        }
        cout<<endl;
        
    }

}