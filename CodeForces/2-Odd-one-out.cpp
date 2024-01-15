#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int t,a,b,c;
    cin>>t;

    while(t!=0){
        cin>>a>>b>>c;
        if(a==c) cout<< b<<endl;
        else if(a==b) cout<< c<<endl;
        else if(b==c) cout<< a<<endl;
        else cout<< b<<endl;
        t--;
    }
    return 0;
}