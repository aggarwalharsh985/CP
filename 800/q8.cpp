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
        int n,k;
        cin>>n>>k;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int flag = false;
        for(int i = 0; i<n; i++){
            if(arr[i] == k){
                flag = true;
                break;
            }
        }
        if(flag){
            cout<<"Yes\n";
        }
        else{
            cout<<"No\n";
        }
    }
}