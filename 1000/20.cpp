#include<bits/stdc++.h>
using namespace std;
int xorUpto(int n){
    if(n % 4 == 0) return n;
    if(n % 4 == 1) return 1;
    if(n % 4 == 2) return n + 1;
    return 0;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t;
    cin>>t;
    while(t--){
        int a,b;
        cin>>a>>b;
        int x = xorUpto(a-1);
        if(x == b){
            cout<<a<<endl;
        }
        else if((x^b) == a){
            cout<<a+2<<endl;
        }
        else{
            cout<<a+1<<endl;
        }
        
    }

}