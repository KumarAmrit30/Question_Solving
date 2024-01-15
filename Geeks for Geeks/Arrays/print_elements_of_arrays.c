#include<stdio.h>
int main(){
    int n;
    printf("Enter the size of array : ");
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        printf("Enter the element number %d : ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Output : ");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}