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
        string s;
        cin>>s;
        int n = s.size();
        int count0 = 0;
        int count1 = 0;
        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                count0++;
            }
            else{
                count1++;
            }
        }
        if(count0 == count1){
            cout<<0<<endl;
            continue;
        }
        for(int i = 0; i<n; i++){
            if(s[i] == '0'){
                count1--;
            }
            else{
                count0--;
            }
            if(count1 <0 || count0 <0){
                cout<<n-i<<endl;
                break;
            }
        }
    }
}