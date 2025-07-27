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
        long long w,h;
        cin>>w>>h;
        long long k1;
        cin>>k1;
        vector<long long>h1(k1);
        for(int i = 0; i<k1; i++){
            cin>>h1[i];
        }

        long long k2;
        cin>>k2;
        vector<long long>h2(k2);
        for(int i = 0; i<k2; i++){
            cin>>h2[i];
        }

        long long k3;
        cin>>k3;
        vector<long long>v1(k3);
        for(int i = 0; i<k3; i++){
            cin>>v1[i];
        }

        long long k4;
        cin>>k4;
        vector<long long>v2(k4);
        for(int i = 0; i<k4; i++){
            cin>>v2[i];
        }
        long long hor = max(abs(h1[0]-h1[k1-1]),abs(h2[0]-h2[k2-1]));
        long long ver = max(abs(v1[0]-v1[k3-1]),abs(v2[0]-v2[k4-1]));
        
        long long ans = max(hor*h,ver*w);
        cout<<ans<<endl;

    }
}