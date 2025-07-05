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
        long long n,k;
        cin>>n>>k;
        if(n%2 == 0){
            cout<<"Yes"<<endl;
        }
        else{
            if(k%2 == 0){
                cout<<"No"<<endl;
            }
            else{
                cout<<"Yes"<<endl;
            }
        }
    }

}