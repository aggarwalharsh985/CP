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
        string s;
        cin>>s;
        vector<int>freq(26,0);
        vector<int>left(n+1);
        vector<int>right(n+1);
        int counter = 1;

        for(int i = 0; i<n; i++){
            char ch = s[i];
            if(freq[ch - 'a'] == 0){
                freq[ch - 'a']++;
                left[i+1] = counter;
                
                counter++; 
            }
            else{
                left[i+1] = left[i];
            }
        }
        freq.clear();
        freq.resize(26, 0);
        counter = 1;
        right[0] = 0;
        for(int i = n-1; i>=0; i--){
            char c = s[i];
            if (freq[c - 'a'] == 0) {
                freq[c - 'a']++;
                right[i] = counter;
                counter++;
            } else {
                right[i] = right[i+1];
            }
        }
        int maxi = 0;
        for(int i = 0; i<=n; i++){
            maxi = max(maxi,left[i]+right[i]);
        }
        cout<<maxi<<endl;
    }
}