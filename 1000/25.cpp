#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }
        unordered_set<int>st;
        for(int i = 0; i<n; i++){
            st.insert(arr[i]);
        }
        if(st.size()<n){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
    }
}