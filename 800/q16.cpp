#include<iostream>
#include<vector>
#include<algorithm>
#include<limits.h>
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
        // vector<int>brr = arr;
        // sort(brr.begin(), brr.end());
        // for(int i = 0; i<n; i++){
        //     if(arr[i] != brr[i]){
        //         cout<<"0"<<endl;
        //         break;
        //     }
        // }
        vector<int>ans;
        int minDiff = INT_MAX;
        for(int i = 1; i<n; i++){
            if(arr[i] - arr[i-1] < minDiff){
                minDiff = arr[i] - arr[i-1];
            }
        }
        if(minDiff < 0){
            cout<<"0"<<endl;
        }
        else if(minDiff == 0){
            cout<<"1"<<endl;
        }
        else{
            cout<<minDiff/2+1<<endl;
        }

    }

}