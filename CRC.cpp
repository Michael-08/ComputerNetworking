#include <bits/stdc++.h>
using namespace std;

int main(){
    int data[10] = {1,1,0,1,0,1,0};
    int div[4] = {1,0,1,1};

    data[7] = 0;
    data[8] = 0;
    data[9] = 0;

    int code[10] = {0};
    for(int i = 0;i < 10;i++){
        code[i] = data[i];
    }


    for(int i = 0;i < 7;i++){
        if(data[i] == 0){
            continue;
        }
        for(int j = 0;j < 4;j++){
            data[i + j] ^= div[j];
        }
    }

    for(int i = 7;i < 10;i++){
        code[i] = data[i];
    }

    cout<<"Transmitting the code..."<<endl;
    for(int i = 0;i < 10;i++){
        cout<<code[i];
    }

    cout<<endl;


    for(int i = 0;i < 7;i++){
        if(code[i] == 0){
            continue;
        }
        for(int j = 0;j < 4;j++){
            code[i + j] ^= div[j];
        }
    }

    cout<<"Checking the code..."<<endl;
    for(int i = 0;i < 10;i++){
        cout<<code[i];
    }


}