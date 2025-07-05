#include<iostream>
#include<vector>
#include<limits.h>
#include<numeric>
#include<algorithm>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a ;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int k = abs(arr[0]-1);
        for(int i = 1; i<n; i++){
            k = __gcd(k, abs(arr[i] - (i + 1)));
        }
        cout<<k<<endl;
    }

}