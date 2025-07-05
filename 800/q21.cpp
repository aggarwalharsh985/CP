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
        int count = 0;
        int main = 0;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
            if(arr[i] == 1){
                main = 0;
            }
            else{
                main++;
            }
            count = max(main,count);
        }
        cout<<count<<endl;

    }

}