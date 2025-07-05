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
            if(arr[i] == 1){
                arr[i]++;
            }
        }
        for(int i = 0; i<n-1; i++){
            if(arr[i+1]%arr[i] == 0){
                arr[i+1] ++;
            }
        }
        for(auto&i:arr){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}