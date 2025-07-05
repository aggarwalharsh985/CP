#include<iostream>
#include<vector>
#include<limits>
#include<limits.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i = 0; i<n; i++){
        cin>>arr[i];
    }
    for(int i = 0; i<n; i++){
        if(arr[i] < 0){
            arr[i] = arr[i]*(-1);
        }
    }
    int minElement = INT_MAX;
    for(int i = 0; i<n; i++){
        minElement = min(arr[i],minElement);
    }
    cout<<minElement<<endl;
}