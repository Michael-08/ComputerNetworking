#include<bits/stdc++.h>
using namespace std;

int findk(int size){
    int k = 0;
    while(pow(2,k) < (size + k + 1)){
        k++;
    }
    return k;
}

bool ispower(int n){
    if(n == 0 || n == 1){
        return true;
    }
    if(int(pow(2,int(log2(n)))) == n){
        return true;
    }
    return false;
}

int main(){
    int data[9] = {1,1,1,1,0,1,1,0,0};
    int n = sizeof(data)/sizeof(data[0]);
    int k = findk(n);
    cout<<k<<endl;

    int i = 0;
    int code[n + k];
    for(int z = 0;z < n + k;z++){
        if(ispower(z + 1)){
            code[z] = 0;
        }
        else{
            code[z] = data[i++];
        }
    }

    for(int j = 0;j < n + k;j++){
        cout<<code[j];
    }

    for(int i=0;i<k;i++){
        int step = pow(2,i);
        int start = pow(2,i);
        int end = start + step - 1;
        int p = 0;
            while(start <= n + k){
            for(int j = start;j <= end && j <= n + k;j++){
                p ^= code[j];
            }
            start = start + 2 * step;
            end = start + step - 1;
            code[step] = p;
        }
    }
    
}
