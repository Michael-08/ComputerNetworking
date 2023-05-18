#include<bits/stdc++.h>
using namespace std;

int main(){
    string m = "0110111110110";
    string check = "011111";
    bool flag = 0;
    string temp = "";

    cout<<m<<endl;

    for(int i = 0;i < m.size();i++){
        flag = 0;
        for(int j = 0;j < check.size();j++){
            if(m[i + j] != check[j]){
                flag = 1;
                break;
            }
        }
        if(flag == 0){
            temp += check;
            temp += '0';

            i += check.size();
        }
        
        temp += m[i];
    }

    cout<<temp<<endl;
    m = "";

    for(int i = 0;i < temp.size();i++){
        flag = 0;
        for(int j = 0;j < check.size();j++){
            if(temp[i + j] != check[j]){
                flag = 1;
                break;
            }
        }
        
        if(flag == 0){
            m += check;
            i += check.size() + 1;
        }
        
        m += temp[i];
    }

    cout<<m<<endl;
}