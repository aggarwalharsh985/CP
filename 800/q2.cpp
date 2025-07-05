#include <iostream>
#include <vector>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n,x;
        cin>>n>>x;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        arr.insert(arr.begin(),0);
        int maxDistance = 0;
        for(int i = 1; i<n+1; i++){
            int diff = abs(arr[i]-arr[i-1]);
            maxDistance = max(diff,maxDistance);
        }
        int lastDiff = 2*abs(arr.back() - x);
        int ans = max(lastDiff,maxDistance);
        cout<<ans<<endl;
    }
}