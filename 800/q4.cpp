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
        n%3 == 0 ? cout<<"Second\n" : cout<<"First\n";
    }
}