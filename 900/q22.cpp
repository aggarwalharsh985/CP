#include<iostream>
#include<vector>
#include<math.h>
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
        long long count_0 = 0;
        long long count_1 = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 0){
                count_0++;
            }
            else if(arr[i] == 1){
                count_1++;
            }
        }
        long long ans;
        long long combination = (pow(2,count_0)) - 1;
        ans = combination*count_1 + count_1;
        cout<<ans<<endl;
    }

}