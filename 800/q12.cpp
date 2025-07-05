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
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        vector<int>ans;
        for(int i = 0; i<n; i++){
            if(i == 0){
                ans.push_back(arr[0]);
                continue;
            }
            if(arr[i-1]<=arr[i]){
                ans.push_back(arr[i]);
            }
            else{
                ans.push_back(1);
                ans.push_back(arr[i]);
            }
        }
        cout<<ans.size()<<endl;
        for(auto&i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}