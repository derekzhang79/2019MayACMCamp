#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int> v(1,1);//1234=> 4321
    for(int i=2;i<=n;i++){
            int sc=0;
        for(int j=0;j<v.size();j++){
            int temp=v[j]*i+sc;
            sc=temp/10;
            v[j]=temp%10;
        }
        while(sc>0){
            v.push_back(sc%10);
            sc/=10;
        }
    }
    reverse(v.begin(),v.end());
    for(auto d:v)cout<<d;
    cout<<endl;


    return 0;
}
