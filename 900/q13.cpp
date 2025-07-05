#include<iostream>
#include<vector>
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
        vector<int>v;
        bool flag = false;
        for(int num:arr){
            if(num != 0){
                v.push_back(num);
                flag = false;
            }
            else{
                if(!flag){
                    v.push_back(0);
                    flag = true;
                }
            }
        }
        int count = 0;
        if(v.size() == 1 && arr[0] == 0){
            cout<<0<<endl;
            continue;
        }
        if(v.size() == 1 && arr[0] != 0){
            cout<<1<<endl;
            continue;
        }
        if(v.size() == 2){
            cout<<1<<endl;
            continue;
        }
        if(v.size()>2){
            for(int i = 1; i<v.size()-1; i++){
                if(v[i] == 0){
                    count++;
                }
            }
            if(count == 0){
                cout<<1<<endl;
            }
            else if(count+1 > 2){
                cout<<2<<endl;
            }
            else{
                cout<<count+1<<endl;
            }
        }
    }
}