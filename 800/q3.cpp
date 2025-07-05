#include <iostream>
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
        
        if(s.find(".") == string::npos){
            cout<<"0"<<endl;
            continue;
        }
        else if(s.find("...") != string::npos){
            cout<<"2"<<endl;
            continue;
        }
        else{
            int count = 0;
            for(int i = 0; i<n; i++){
                if(s[i] == '.'){
                    count++;
                }
            }
            cout<<count<<endl;
        }
    }
}