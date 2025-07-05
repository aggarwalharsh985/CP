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
        int n,m,i,j;
        cin>>n>>m>>i>>j;
        if(i<n/2 && j<m/2){
            cout<<n<<" 1 1 "<<m<<endl;
        }
        else if(i>=n/2 && j<=m/2){
            cout<<"1 1 "<<n<<" "<<m<<endl;
        }
        else if(i<=n/2 && j>=m/2){
            cout<<"1 1 "<<n<<" "<<m<<endl;
        }
        else if(i>=n/2 && j>=m/2){
            cout<<n<<" 1 1 "<<m<<endl;
        }

    }
}