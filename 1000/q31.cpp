#include<bits/stdc++.h>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(0);
 
    int n;
    cin>>n;
    string s;
    cin>>s;
    bool r = 0;
    for(int i = 0; i<s.length()-1; i++){
        if(s[i]>s[i+1]){
            cout<<"Yes"<<endl;
            cout<<i+1<<" "<<i+2<<endl;
            r = 1;
            break;
        }
    }
    if(r == 0){
        cout<<"No"<<endl;
    }
    
}