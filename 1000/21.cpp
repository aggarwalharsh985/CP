#include<bits/stdc++.h>
using  namespace std;
int tabu(string &text1, string &text2){
    int a = text1.length();
    int b = text2.length();
    vector<vector<int>>dp(text1.length()+1, vector<int>(text2.length()+1,0));
    int ans = 0;
    for(int i = a-1; i>=0; i--){
        for(int j = b-1; j>=0; j--){
            if(text1[i] == text2[j]){
                dp[i][j] = 1 + dp[i+1][j+1];
                ans = max(ans,dp[i][j]);
            }
            else{
                dp[i][j] = 0;
            }
        }
    }
    return ans;
}

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
        string a,b;
        cin>>a>>b;
        int n = a.length();
        int m = b.length();
        int count = tabu(a,b);
        cout<<n + m - (2*count)<<endl;
    }
}