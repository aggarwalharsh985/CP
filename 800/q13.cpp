#include<iostream>
#include<vector>
#include <algorithm>
using namespace std;

bool check(vector<int>arr){
    for(int i = 0; i<arr.size(); i++){
        if(arr[0] != arr[i]){
            return false;
        }
    }
    return true;
}

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
        int count = 0;
        if(check(arr)){
            cout<<"-1"<<endl;
            continue;
        }
        vector<int>b;
        vector<int>c;
        int maxi = *max_element(arr.begin(),arr.end());
        for(int i = 0; i<n; i++){
            if(arr[i] == maxi){
                c.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
        int x = b.size();
        int y = c.size();
        cout<<x<<" "<<y<<endl;
        for(auto&i:b){
            cout<<i<<" ";
        }
        cout<<endl;
        for(auto&i:c){
            cout<<i<<" ";
        }
        cout<<endl;
    }

}