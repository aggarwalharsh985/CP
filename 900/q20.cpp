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
    while(a--){
        string s;
        cin>>s;
        int count_ab = 0;
        int count_ba = 0;
        for(int i = 1; i<s.length(); i++){
            if(s[i] != s[i-1]){
                if(s[i] == 'a'){
                    count_ba++;
                }
                else{
                    count_ab++;
                }
            }
        }
        if(count_ab == count_ba){
            cout<<s<<endl;
            continue;
        }
        if(count_ab > count_ba){
            size_t pos = s.rfind('b');
            s[pos] = 'a';
            cout<<s<<endl;
        }
        else{
            size_t pos = s.rfind('a');
            s[pos] = 'b';
            cout<<s<<endl;
        }
    }
}