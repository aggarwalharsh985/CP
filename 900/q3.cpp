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
        long long n,k,x;
        cin>>n>>k>>x;
        long long i = n - k + 1;
        long long l = n;
        long long sum = k * (i + l) / 2;
        // cout<<sum<<" ";

        
        long long firstSum = (k*(1+k))/2;
        // cout<<
        
        if(firstSum > x){
            cout<<"No"<<endl;
            continue;
        }

        if(sum >= x){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
}