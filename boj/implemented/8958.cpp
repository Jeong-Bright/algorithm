#import<iostream>
using namespace std;int main(){int N,a,b,i;cin >> N;while(N--){a=0,b=0;string x;cin>>x;for(i=0;i<x.size();i++){if(x[i]=='O'){b++;a+=b;}else b=0;}cout<<a<<'\n';}}