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
        int n;
        cin>>n;
        long long count3 = 0;
        long long count2 = 0;
        while(n>0 && n%3 == 0){
            count3++;
            n = n/3;
        }
        while(n>0 && n%2 == 0){
            count2++;
            n = n/2;
        }
        if(n>1 || count2>count3){
            cout<<"-1"<<endl;
        }
        else{
            cout<<count3+(count3-count2)<<endl;
        }
    }

}