#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x;
    cin>>x;
    while(x--){
        long long a,b,c;
        cin>>a>>b>>c;
        if(a == b && c%2 == 0){
            cout<<"Second"<<endl;
        }
        else if(a == b && c%2 != 0){
            cout<<"First"<<endl;
        }
        else if(a>b && c%2 == 0){
            cout<<"First"<<endl;
        }
        else if(a>b && c%2 != 0){
            cout<<"First"<<endl;
        }
        else if(a<b && c%2 != 0){
            cout<<"Second"<<endl;
        }
        else if(a<b && c%2 == 0){
            cout<<"Second"<<endl;
        }
    }
}