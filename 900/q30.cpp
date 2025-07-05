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
        sort(s.begin(),s.end());
        int count = 0;
        int i = 0;
        int j = s.size()-1;
        while(i<=j){
            if(s[i] == '0' && s[j] == '1'){
                count++;
            }
            i++;
            j--;
        }
        cout << (count % 2 == 0 ? "NET" : "DA") << endl;
    }
}