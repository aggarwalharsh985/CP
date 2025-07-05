#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        long long n,p;
        cin>>n>>p;
        vector<long long>a(n);
        vector<long long>b(n);
        vector<pair<long,long>>v(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        for(int i = 0; i<n; i++){
            cin>>b[i];
        }
        for(int i = 0; i<n; i++){
            v[i] = {b[i],a[i]};
        }
        sort(v.begin(),v.end());
        long long ans = p;
        long long al = 1;
        for(auto&i:v){
            long long cost = i.first;
            long long qua = i.second;
            if(cost >= p){
                break;
            }
            if(al + qua > n){
                ans += (n-al)*cost;
                al = n;
                break;
            }
            else{
                ans += qua*cost;
                al += qua;
            }
        }
        ans += (n-al)*p;
        cout<<ans<<endl;
    }
}