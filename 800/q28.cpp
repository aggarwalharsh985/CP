#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
bool check(vector<int>arr){
    for(int i = 0; i<arr.size(); i++){
        if(arr[0] != arr[i]){
            return true;
        }
    }
    return false;
}
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
        vector<int>ans;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        sort(arr.begin(),arr.end(),greater<int>());

        if(n == 2 && arr[0] == arr[1]){
            cout<<"No"<<endl;
            continue;
        }
        if(!check(arr)){
            cout<<"No"<<endl;
            continue;
        }
        for(int i = 0; i<(n+1)/2; i++){
            ans.push_back(arr[i]);
            if(i != n - i - 1) {
                ans.push_back(arr[n - i - 1]);
            }
        }
        cout<<"Yes"<<endl;
        for(auto&i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}