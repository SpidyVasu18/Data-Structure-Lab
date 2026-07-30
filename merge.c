#include<stdio.h>
int main(){
    int arr1[30],arr2[50],arr3[100],n1,n2,i,j,n3;
    int k=0;
    printf("Enter the first array size: ");
    scanf("%d",&n1);
    printf("Enter the elements of first array:\n");
    for(i=0;i<n1;i++){
        scanf("%d",&arr1[i]);
    }
    printf("Enter the size of second array: ");
    scanf("%d",&n2);
    printf("Enter the elements of second array:\n");
    for(i=0;i<n2;i++){
        scanf("%d",&arr2[i]);
    }
    for(i=0;i<n1;i++){
        arr3[k++]=arr1[i];
    }
    for(j=0;j<n2;j++){
        arr3[k++]=arr2[j];
    }
    printf("Merged Array:\n");
    n3=n1+n2;
    for(i=0;i<n3;i++){
        printf("%d ",arr3[i]);

    }
    return 0;
}