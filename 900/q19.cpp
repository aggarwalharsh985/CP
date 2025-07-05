#include<iostream>
using namespace std;
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long a;
    cin>>a;
    while(a--){
        long long x,n;
        cin>>x>>n;
        long long jump;
        if(n%4 == 0){
            jump = 0;
        }
        else if(n%4 == 1){
            jump = -n;
        }
        else if(n%4 == 2){
            jump = 1;
        }
        else{
            jump = n+1;
        }
        if(x%2 == 0){
            cout<<x+jump<<endl;
        }
        else{
            cout<<x-jump<<endl;
        }
    }

}