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
        long long n;
        cin>>n;
        long long i = 1;
        while(n%i == 0){
            i++;
        }
        cout<<i-1<<endl;
    }
}