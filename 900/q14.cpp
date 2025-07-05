#include <bits/stdc++.h>
using namespace std;
int main(){

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    long long a;
    cin>>a;
    while(a--){
        long long n;
        cin>>n;

        if(n%2 != 0 || n < 4){
            cout<<-1<<endl;
            continue;
        }
        long long maxi = n/4;
        long long mini = ceil(n*1.0/6);
        cout<<mini<<" "<<maxi<<endl;
    }
}