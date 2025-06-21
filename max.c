#include<stdio.h>
int main(){
    int a[]={55,87,23,46,65,88,78};
    int max=0;
    for(int i=0;i<=6;i++){
        printf("%d\n",a[i]);
    if(a[i]>max){
        // printf("the no is max %d");
        max=a[i];
    }
}
    printf("max is %d \n",max);
}