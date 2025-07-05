#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        sort(arr.begin(),arr.end());
        int count = 0;
        int ans = 0;
        for(int i = 0; i<n-1; i++){
            if(arr[i+1]-arr[i] <= k){
                count++;
            }
            else{
                count = 0;
            }
            ans = max(ans,count);
        }
        cout<<n-ans-1<<endl;
    }

}