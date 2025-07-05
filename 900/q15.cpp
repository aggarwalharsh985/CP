#include<iostream>
#include<vector>
#include<algorithm>
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
        if(n == 1){
            cout<<0<<endl;
            continue;
        }
        for(int i = n-1; i>0; i--){
            while(arr[i] <= arr[i-1]){
                if(arr[i-1] == 0){
                    count = -1;
                    break;
                }
                arr[i-1] = arr[i-1]/2;
                count++;
                 
            }
            if(count == -1){
                break;
            } 
        }
        cout<<count<<endl;
    }
}