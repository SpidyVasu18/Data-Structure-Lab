#include <stdio.h>
void main(){
    int nums[50],target,i,n,found=0;
    printf("Enter the length of an array:- ");
    scanf("%d",&n);
    printf("Enter the elements in array:-");
    for(i=0;i<n;i++){
        scanf("%d",&nums[i]);
    }
    printf("Enter the sum:- ");
    scanf("%d",&target);
    for(i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]+nums[j]==target){
                printf("[%d,%d]",i,j);
                found=1;
                break;
            }
        
            
        }
    }
    if(!found){
        printf("No pair found with the given sum.");
    }

}
