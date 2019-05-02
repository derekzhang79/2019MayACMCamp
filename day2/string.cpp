#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abcdefghijlkmnopqrstuvw";//vector<char>  char[]
    cout<<s.size()<<endl;
    s+="xy";
    cout<<s<<endl;
    s.push_back('z');
    cout<<s<<endl;
    s.erase(s.find("c"),1);//delete char c
    cout<<s<<endl;
    string k="bd";
    size_t pos=s.find(k);
    if(pos==string::npos){
            cout<<"not found"<<endl;
    }else{
            cout<<pos<<endl;
    }
    return 0;
}
