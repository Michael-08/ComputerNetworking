#include<bits/stdc++.h>
using namespace std;

int main(){
    int W[4][4] = {{7,5,0,0},{7,0,0,2},{0,3,0,0},{4,0,1,0}};
    int D[4][4];

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            if(W[i][j] == 0){D[i][j] = 5000;}
            else{D[i][j] = W[i][j];}
        }
    }

    for(int k = 0;k < 4;k++){
        for(int i = 0;i < 4;i++){
            for(int j = 0;j < 4;j++){
                cout<<"Shortest path from "<<char(82 + i)<<" to "<<char(82 + j)<<" is "<<endl;
                if(D[i][j] > D[i][k] + D[k][j]){
                    cout<<char(82 + i)<<"-->"<<char(82 + k)<<"-->"<<char(82 + j)<<endl;
                }
                else{
                    cout<<char(82 + i)<<"-->"<<char(82 + j)<<endl;
                }
                D[i][j] = min(D[i][j], D[i][k] + D[k][j]);
                
            }
        }
    }

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            cout<<W[i][j]<<"   ";
        }
        cout<<endl;
    }

    cout<<"\n\n";

    for(int i = 0;i < 4;i++){
        for(int j = 0;j < 4;j++){
            cout<<D[i][j]<<"   ";
        }
        cout<<endl;
    }

    return 0;
}