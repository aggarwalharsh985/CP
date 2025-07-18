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
        vector<long long>a(n);
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        vector<pair<long long,long long>>map;
        for(int i = 0; i<n; i++){
            map.push_back({a[i],i});
        }
        sort(map.rbegin(),map.rend());
        vector<long long>ans(n+1,0);
        a[0] = 0;
        long long minutes = 0;
        long long coordinate = 1;
        for(int i = 0; i<n; i++){
            ans[map[i].second+1] = coordinate;
            minutes += (2*abs(coordinate)*map[i].first);
            if(coordinate < 0){
                coordinate = abs(coordinate)+1;
            }else{
                coordinate = -coordinate;
            }
        }
        cout<<minutes<<endl;
        for(auto&i:ans){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}