#include<iostream>
#include<string>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    // cout<<"hello"<<endl;
    while(a--){
        int n,m;
        cin>>n>>m;
        string x;
        string s;
        cin>>x>>s;
        int count = 0;
        bool found = false;

        if(x.find(s) != string::npos){
            cout<<"0\n";
            continue;
        }
        else if(n>m){
            x += x;
            count += 1;
            if(x.find(s) != string::npos){
                found = true;
            }
        }
        else{
            while(x.length() < (s.length()*2) +1 ){
                x += x;
                count += 1;
                if(x.find(s) != string::npos){
                    found = true;
                    break;
                }
            }
        }
        if(found == false){
            cout<<"-1"<<endl;
        }else{
            cout<<count<<endl;
        }
    }
}