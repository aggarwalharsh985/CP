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
        int x,y,c,d;
        cin>>x>>y>>c>>d;
        if(y>d){
            cout<<-1<<endl;
            continue;
        }

        int moves = d-y;

        x += moves;
        if(x<c){
            cout<<-1<<endl;
            continue;
        }
        
        moves += (x-c);
        cout<<moves<<endl;
    }

}