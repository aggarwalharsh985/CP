#include<iostream>
#include<vector>
#include<algorithm>
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
        vector<int>arr(n);
        for(int i = 0; i<n; i++){
            cin>>arr[i];
        }

        if(n%2 == 1){
            cout<<"4"<<endl;
            cout<<"1"<<" "<<n<<endl;
            cout<<"1"<<" "<<n-1<<endl;
            cout<<"2"<<" "<<n<<endl;
            cout<<"2"<<" "<<n<<endl;
        }
        else{
            cout<<"2"<<endl;
            cout<<"1"<<" "<<n<<endl;
            cout<<"1"<<" "<<n<<endl;
        }
    }
}