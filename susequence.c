#include<stdio.h>
#include<conio.h>
int main()
{
    int x,a[10];
    printf("enter size of array: ");
    scanf("%d",&x);
    printf("\nenter array elements: \n");
    for(int i=0;i<x;i++){
        scanf("%d",&a[i]);
    }
    int b[10];
    for(int i=0;i<x;i++){
        b[i]=a[i];
    }
for (int i=0;i<x;i++){
    for(int j=0;j<i;j++){
        if(a[i]>a[j] && b[i]<b[j]+a[i])
        {
            b[i]=b[i]+a[j];
        }
    }
}
int l=b[1];
for(int i=0;i<x;i++){
    if(l<b[i]){
        l=b[i];
    }
}
printf("\n%d",l);
    return 0;
}