#include<bits/stdc++.h>
using namespace std;

int main(){
    string m = "I love my family";
    string temp = "";
    cout<<m<<endl;

    for(int i = 0;i < m.size();i++){
        if(m[i] == 'e' || m[i] == 'f'){
            temp += 'e';
        }
        temp += m[i];
    }

    cout<<temp<<endl;

    m = "";

    for(int i = 0;i < temp.size();i++){
        if(temp[i] == 'e'){
            m += temp[i + 1];
            i++;
            continue;
        }
        m += temp[i];
    }

    cout<<m<<endl;
}