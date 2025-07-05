#include<iostream>
#include<vector>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n-1; i++){
            cin>>arr[i];
        }
        int sum = 0;
        for(int i = 0; i<n-1; i++){
            sum += arr[i];
            // cout<<"->"<<sum<<" ";
        }
        int ans = -1*sum;
        cout<<ans<<endl;
    }

}