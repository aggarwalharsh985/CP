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
        string s;
        cin>>n>>s;
        stack<char>st;
        st.push(s[0]);
        for(int i = 1; i<n; i++){
            if(s[i] == ')' && !st.empty() && st.top() == '('){
                st.pop();
            }
            else {
                st.push(s[i]);
            }
        }
        int si = st.size();
        cout<<si/2<<endl;
    }

}