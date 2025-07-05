#include<iostream>
#include<string>
#include<vector>

using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        string s,t;
        cin>>s>>t;
        int n = s.size();
        int m = t.size();
        vector<int>freq(26,0);
        for(int i = 0; i<m; i++){
            freq[t[i] - 'A']++;
        }
        for(int i = n-1; i>=0; i--){
            if(freq[s[i]-'A'] > 0){
                freq[s[i]-'A']--;
            }
            else{
                s[i] = '.';
            }
        }
        string final_s = "";
        for(int i = 0; i<n; i++){
            if(s[i] != '.'){
                final_s.push_back(s[i]);
            }
        }
        if(final_s == t){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }
        
    }
}