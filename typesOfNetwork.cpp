#include<bits/stdc++.h>
using namespace std;

int main(){
    int mat1[5][5] = {{0,0,1,0,0},{0,0,1,0,0},{1,1,0,1,1},{0,0,1,0,0},{0,0,1,0,0}};
    int mat2[5][5] = {{0,1,0,0,1},{1,0,1,0,0},{0,1,0,1,0},{0,0,1,0,1},{1,0,0,1,0}};
    int mat3[5][5] = {{0,1,1,1,1},{1,0,1,1,1},{1,1,0,1,1},{1,1,1,0,1},{1,1,1,1,0}};

    int size = 5;
    int count = 0;

    for(int i = 0;i < size;i++){
        for(int j = 0;j < size;j++){
            if(mat1[i][j]){count++;}
        }
    }

    if(count == 2*(size - 1)){cout<<"This is a Star Matrix"<<endl;}
    else if(count == 2*size){cout<<"This is a Ring Matrix"<<endl;}
    else if(count == size*(size - 1)){cout<<"This is a Mesh Matrix"<<endl;}
    else{cout<<"This is a different matrix"<<endl;}

}