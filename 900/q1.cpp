#include<iostream>
#include<set>
using namespace std;

int dx[4] = {1, 1, -1, -1};
int dy[4] = {1, -1, -1, 1};

int main(){
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif

    int a;
    cin>>a;
    while(a--){
        int a,b,kx,ky,qx,qy;
        cin>>a>>b>>kx>>ky>>qx>>qy;
        set<pair<int,int>>king;
        set<pair<int,int>>queen;
        for(int i = 0; i<4; i++){
            king.insert({kx+dx[i]*a, ky+dy[i]*b});
            king.insert({kx+dx[i]*b, ky+dy[i]*a});

            queen.insert({qx+dx[i]*a, qy+dy[i]*b});
            queen.insert({qx+dx[i]*b, qy+dy[i]*a});
        }
        int count = 0;
        for(auto&p:king){
            if(queen.count(p)){
                count++;
            }
        }
        cout<<count<<endl;
    }

}