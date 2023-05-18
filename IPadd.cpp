#include<bits/stdc++.h>
using namespace std;

int bin2dec(int d[],int si,int ei){
    int n = 0;

    for(int i = ei;i >= si;i--){
        n += d[ei - (i % 8)]*pow(2,(i % 8));
    }

    return n;
}

int main(){
    int d[31] = {1,0,0,1,1,0,1,0,0,0,1,1,1,0,0,1,1,0,0,1,0,1,0,1,0,1,0,1,1,1,0};
    int cmp = bin2dec(d,0,7);
    char ans;

    if(cmp <= 127){
        ans = 'A';
    }
    else if(cmp >= 128 && cmp <= 191){
        ans = 'B';
    }
    else if(cmp >= 192 && cmp <= 223){
        ans = 'C';
    }
    else if(cmp >= 224 && cmp <= 239){
        ans = 'D';
    }
    else if(cmp >= 240 && cmp <= 255){
        ans = 'E';
    }

    cout<<cmp<<"."<<bin2dec(d,8,15)<<"."<<bin2dec(d,16,23)<<"."<<bin2dec(d,24,31)<<endl;

    cout<<"This belongs to Class "<<ans<<endl;

    return 0;
}