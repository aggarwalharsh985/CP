#include<bits/stdc++.h>
using namespace std;

int minOp(string n,string i){
    int operation = 0;
    int ind = i.size()-1;
    for(int j = n.size()-1; j>=0; j--){
        if(n[j] == i[ind]){
            ind--;
            if(ind<0){
                break;
            }
        }else{
            operation++;
        }
    }
    return operation;
}

int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long a;
    cin>>a;
    while(a--){
        string n;
        cin>>n;
        int ans = INT_MAX;
        vector<string>poss = {"00","25","50","75"};
        for(auto&i:poss){
            ans = min(ans,minOp(n,i));
        }
        cout<<ans<<endl;
    }  
}