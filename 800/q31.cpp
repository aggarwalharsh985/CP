#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int a;
    cin>>a;
    while(a--){
        int n,a,b;
        cin>>n>>a>>b;
        if(n == a && a == b){
            cout<<"Yes"<<endl;
            continue;
        }
        if(n-b-a > 1){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }

}