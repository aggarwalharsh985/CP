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
        int ans = 0;
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        int count = 0;
        // int k = 0;
        for(int i = 0; i<n; i++){
            if(arr[i] == 2){
                count++;
            }
        }
        if(count %2 == 1){
            cout<<-1<<endl;
        }
        else if(count == 0){
            cout<<1<<endl;
        }
        else{
            count = count/2;
            for(int i = 0; i<n; i++){
                if(arr[i] == 2){
                    ans++;
                }
                if(ans == count){
                    cout<<i+1<<endl;
                    break;
                }
            }
        }
    }
}