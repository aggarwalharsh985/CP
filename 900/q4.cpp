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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i] >= a){
                arr[i] = a-1;
            }
        }
        long long sum = b;
        for(int i = 0; i<n; i++){
            sum += arr[i];
        }
        // cout<<sum-1<<endl;
        // for(int i = 0; i<n; i++){
        //     sum  += min(arr[i],a-1);
        //     // cout<<sum <<" ";
        // }
        cout<<sum<<endl;
        
    }
}