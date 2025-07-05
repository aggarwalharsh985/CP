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
        int ans = 0;
        if(n%2 == 1){
            for(int i = 0; i<n; i++){
                ans = arr[i]^ans;
            }
            cout<<ans<<endl;
            continue;
        }
        for(int i = 0; i<n; i++){
            ans = arr[i]^ans;
        }
        if(ans == 0){
            cout<<0<<endl;
        }else{
            cout<<-1<<endl;
        }
        
    }

}