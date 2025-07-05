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
        bool found = false;
        for(int i = 0; i<n; i++){
            for(int j = i; j<n; j++){
                if(__gcd(arr[i],arr[j]) <= 2){
                    cout<<"Yes"<<endl;
                    found = true;
                    break;
                }
            }
            if(found) break;
        }
        if(!found){
            cout<<"No"<<endl;
        }
    }
}