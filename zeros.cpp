
//Given an array of n numbers. The problem is to move all the 0’s to the end of the array while maintaining the 
//order of the other elements. Only single traversal of the array is required.
#include<stdio.h>
#include<conio.h>
int main(){
    int arr[10],n;
    printf("enter size of array: ");
    scanf("%d",&n);
    printf("\nenter array");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
int k=n-1;
    for(int i=0;i<n;i++){
        if(arr[i]==0){
            for(int j=i;j<n;j++){
                if(arr[j]!=0){
                    int x;
                    x=arr[i];
                    arr[i]=arr[j];
                    arr[j]=x;
                    break;
                }
            }
        }
    }
    printf("\n");
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    return 0;
}