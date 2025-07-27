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
        vector<int>a(n);
        vector<int>ans;
        bool poss = true;
        for(int i = 0; i<n; i++){
            cin>>a[i];
        }
        int i = 0;
        while(i<n){
            int j = i;
            while (j < n && a[j] == a[i]) j++;

            if(j-i == 1){
                poss = false;
                break;
            }
            ans.push_back(j);
            for(int k = i; k<j-1; k++){
                ans.push_back(k+1);
            }
            i=j;
        }
        
        if(poss == false){
            cout<<-1<<endl;
        }
        else{
            for(auto&i:ans){
                cout<<i<<" ";
            }
            cout<<endl;
        }
    }

}