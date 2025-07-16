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
        int n,r,b;
        cin>>n>>r>>b;
        string s;
        int l = r/(b+1);
        int extra = r%(b+1);
        for(int i = 1; i<=b+1; i++){
            for(int j = 0; j<l; j++){
                s += 'R';
            }
            if(extra>0){
                s += 'R';
                extra--;
            }
            if(i != b+1){
                s += 'B';
            }
        }
        cout<<s<<endl;
    }
}