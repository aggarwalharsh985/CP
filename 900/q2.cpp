#include<iostream>
#include<map>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char,int>mp;
        for(char c:s){
            if(isalpha(c)){
                mp[c]++;
            }
        }
        int count = 0;
        for(auto&i:mp){
            if(i.second%2 == 1){
                count++;
            }
        }
        if(count-k<=1){
            cout<<"Yes"<<endl;
        }else{
            cout<<"No"<<endl;
        }

    }

}