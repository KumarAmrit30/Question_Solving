#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(void){
    int n;
    cin>>n;
    if(n%2==0){
        if(n==2){
            cout<<"NO";
        }
        else cout<<"YES";
    }
    else cout<<"NO";
}