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
        vector<long long>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        long long answer = arr[n-1] - arr[0];
        for(int i = 1; i<n; i++){
            answer = max(answer,arr[i]-arr[0]);
        }   
        for(int i = 0; i<n; i++){
            answer = max(answer,arr[n-1]-arr[i]);
        }   
        for(int i = 0; i<n-1; i++){
            answer = max(answer,arr[i]-arr[i+1]);
        }
        cout<<answer<<endl;
    }
}