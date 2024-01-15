// #include<stdio.h>
// // int *twoSum(int *nums){

// // }
// int* twoSum(int* nums, int numsSize, int target, int* returnSize){
//        for(int i=0;i<numsSize;i++){
//            for(int j=0;j<numsSize;j++){
//                if(i!=j){
//                    if(*(nums+i) + *(nums+j)==target){
//                     *returnSize=j;
//                     returnSize++;
//                    }
//                }
//            }
//            *returnSize=i; 
//        }
//        return returnSize;
// }
// int main(void){
//     int arr[]={2,7,11,15};
//     int *nums=arr;
//     int rrr[2];
//     int *returnSize=rrr;
//     int numsSize=sizeof(arr)/sizeof(arr[0]);
//     int target=9;
//     int *result=twoSum(nums,numsSize,target,returnSize);
//     printf("%u",*result);
// }
#include <stdio.h>
#include <stdlib.h>

// Function to find the indices of two numbers that add up to the target
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;  // Indicate the size of the returned array
    
    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }
    
    // If no such indices found, return {-1, -1}
    result[0] = -1;
    result[1] = -1;
    return result;
}

// Example usage
int main() {
    int nums[] = {2, 7, 11, 15};
    int target = 9;
    int numsSize = sizeof(nums) / sizeof(nums[0]);
    int returnSize;

    int* indices = twoSum(nums, numsSize, target, &returnSize);

    if (indices[0] != -1 && indices[1] != -1) {
        printf("Indices are: %d, %d\n", indices[0], indices[1]);
    } else {
        printf("No solution found.\n");
    }

    // Remember to free the allocated memory
    free(indices);

    return 0;
}
