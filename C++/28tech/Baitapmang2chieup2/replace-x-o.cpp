#include<bits/stdc++.h>
using namespace std;
int n,m;
char a[100][100];
pair<int,int> path[4]={{-1,0},{1,0},{0,-1},{0,1}};
void dequy(int x, int y){
    a[x][y]='*';
    for(int i=0; i<4; i++){
        int x1=x+path[i].first;
        int y1=y+path[i].second;
        if(x1>=1 && x1<=n && y1>=1 && y1<=m && a[x1][y1]=='O')
            dequy(x1, y1);
    }
}
int main(){
    cin>>n>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=1; i<=n; i++){
        if(a[i][1]=='O'){
            dequy(i,1);
        }
        if(a[i][m]=='O'){
            dequy(i,m);
        }
    }
    for(int j=1; j<=m; j++){
        if(a[1][j]=='O'){
            dequy(1,j);
        }
        if(a[n][j]=='O'){
            dequy(n,j);
        }
    }
    
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i][j]!='*')
                cout<<'X';
            else
                cout<<'O';
        }
        cout<<endl;
    }
}