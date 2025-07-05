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
        int x,k;
        cin>>x>>k;
        int num = 0;
        if(x<k){
            cout<<"1"<<endl;
            cout<<x<<endl;
            continue;
        }
        if(x%k != 0){
            cout<<"1"<<endl;
            cout<<x<<endl;
        }
        if(x%k == 0){
            cout<<"2"<<endl;
            cout<<"1"<<" "<<x-1<<endl;
        }
    }

}