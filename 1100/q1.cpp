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
        string s;
        cin>>s;
        map<char,int>freq;
        vector<int>dist(n,0);
        int count = 0;
        for(int i = 0; i<s.length(); i++){
            freq[s[i]]++;
            if(freq[s[i]] == 1){
                count++;
            }
            dist[i] = count;
        }
        int ans = 0;
        for(int i = 0; i<dist.size(); i++){
            ans += dist[i];
        }
        cout<<ans<<endl;
    }

}