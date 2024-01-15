#include<iostream>
#include<string>
#include<vector>
using namespace std;
class solution{
    int n,a,b,c,d;
    int smaller(int a,int b){
        if(a>b) return b;
        else return a;
    }
    int gcd(int a,int b){
        int hcf=1;
        int small=smaller(a,b);
        for(int i=1;i<=small;i++){
            if((a%i==0)&& (small%i==0)){
                hcf=i;
            }
        }
        return hcf;
    }
    int lcm(int c,int d){
        int small=smaller(a,b);
        int lcm=small;
        for(int i=1;i<=c*d;i++){
            if(c%i==0 && d%i==0){
                lcm=i;
                break;
            }
        }
        return lcm;
    }

}
int main(){
    int arr[4]={0};
    
    return 0;
}