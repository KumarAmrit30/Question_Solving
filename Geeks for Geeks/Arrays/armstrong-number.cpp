#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int sum=0;
    int o=n;
    while(n!=0){
        int temp=n%10;
        sum+=(temp*temp*temp);
        n/=10;
    }
    if(sum==o){
        return "Yes";
    }
    else return "No";
    
}