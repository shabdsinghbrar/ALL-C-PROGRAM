// #include<stdio.h>
// int main(){
// int f;
// int g;
// int a , b, c ,d,e;

// while(true){

//     printf("1- Code Start \n");
//     printf("2- Code End \n");
//     scanf("%d",&f);
// // scanf("%d",&g);
//     if(f==1){
//         printf("1- Code Start ");
//         printf("enter your first no");
//         scanf("%d",&a);
//         printf("enter your second no");
//         scanf("%d",&b);
//         printf("enter your third no");
//         scanf("%d",&c);
//         printf("enter your fourth no");
//         scanf("%d",&d);
//         printf("enter your fifth no");
//         scanf("%d",&e);
//         if(a>b){
//             printf("%d is greater than %d", a, b);
//         }
//             else if(b>c){
//                 printf("%d is greater than %d", b, c);
//             }
//                 else if(c>d){
//                     printf("%d is greater than %d", c, a);  

//                 }
//                 else if(d>e){
//                 printf("%d is greater than %d", d, e);
//                 }
//                 else if(d>a){
//                     printf("%d is greater than %d", d, a);
//                 }
//         }
//         if(f==2){
//             printf("2- Code End ");
//             // break;
//         }
//     }
//         else{
//             printf("Invalid Input");
//             return 0;

//         } 
        
// }


#include <stdbool.h>

#include <stdio.h>
int main() {
    int f;
    int a, b, c, d, e;
    while (true) {
        printf("1- Code Start\n");
        printf("2- Code End\n");
        scanf("%d", &f);
        if (f == 1) {
            printf("Enter your first number: ");
            scanf("%d", &a);
            printf("Enter your second number: ");
            scanf("%d", &b);
            printf("Enter your third number: ");
            scanf("%d", &c);
            printf("Enter your fourth number: ");
            scanf("%d", &d);
            printf("Enter your fifth number: ");
            scanf("%d", &e);
            if (a > b && a > c && a > d && a > e) {
                printf("%d is the greatest number\n", a);
            } else if (b > a && b > c && b > d && b > e) {
                printf("%d is the greatest number\n", b);
            } else if (c > a && c > b && c > d && c > e) {
                printf("%d is the greatest number\n", c);
            } else if (d > a && d > b && d > c && d > e) {
                printf("%d is the greatest number\n", d);
            } else {
                printf("%d is the greatest number\n", e);
            }
 } else if (f == 2) {
            printf("2- Code End\n");
            break;
        } else {
            printf("Invalid choice. Please choose 1 or 2.\n");
        }
    }
    return 0;
}
  