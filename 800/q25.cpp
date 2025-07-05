#include<iostream>
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
        int n;
        cin>>n;
        int x = n;
        string s;
        cin>>s;

        for(int i = 0; i < n/2; i++){
            if(s[i] != s[n-i-1]){
                x = x-2;
            }
            else{
                break;
            }
        }
        cout<<x<<endl;
    }

}