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
        int count = 0;
        for(int i = 0; i<n-1; i++){
            if(arr[i]%2 == arr[i+1]%2){
                count++;
            }
        }
        cout<<count<<endl;
    }
}