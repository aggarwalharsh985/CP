#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    long long t;
    cin>>t;
    while(t--){
        long long n;
        cin>>n;
        n--;
        long long msb = log2(n); 
        vector<long long>ans;
        long long num = pow(2,msb)-1;
        while(num>=0){
            ans.push_back(num);
            num--;
        }
        num = pow(2,msb);
        while(num<=n){
            ans.push_back(num);
            num++;
        }
        for(auto i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }
}