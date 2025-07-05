#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        int ans = 1;
        int count = 1;
        for(int i = 1; i<n; i++){
            if(s[i-1] == s[i]){
                count++;
            }
            else{
                count = 1;
            }
            ans = max(count,ans);
        }
        cout<<ans+1<<endl;
    }
}