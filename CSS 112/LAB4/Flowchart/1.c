
// #include <stdio.h>

// int main(){
//     int age = 2,months,days,years;
//     years = age;
//     months = age*12;
//     days = months*30;
//     printf("years %d months %d days %d",years,months,days);
//     return 0;
// }


#include <stdio.h>

// int main(){
//     int x = 1,y = 1,sum;
//     if (sum<5000){
//         sum = x+y;
//         printf("sum %d",sum);
//         x = y;
//         y = sum ;
//     }
//     return 0;
// }

// int main(){
//     int x = 1,y = 1,sum,i;
//     for(sum=0;sum<5000;sum++){
//         sum = x+y;
//         printf("\n%d",sum);
//         x = y;
//         y = sum;
//     }
// }

// int main(){
//     int x = 24 ,y = 40,i;
//     for(i=0;i<10;i++){
//         if(x=y){
//             printf("%d",x);
//                 if(x>y){
//                     x = x-y;
//                 }
//                 else{
//                     y = y-x;
//                 }
//         }
//     }
// }

// int main() {
//     int x,y;
//     printf("x = ");
//     scanf("%d",&x);
//     printf("y = ");
//     scanf("%d",&y);
//     while (x != y) {
//         if (x > y) {
//             x = x - y;
//         } else {
//             y = y - x;
//         }
//     }
//     printf("HCF %d\n", x);

//     return 0;
// }


// int main() {
//     int i = 100, s = 999,sum ,j;
//     for (i;i<=s;i++){
//         sum = 1;
//         for(j=2;j<i;j++){
//             if(i%j==0){
//                 sum = 0;
//             }
//         }
//         if (sum == 1){
//         printf("%d, ",i);
//         }
//     }
//     return 0;
// }


int main(){
    int i,sum = 1,n;
    printf("n = ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum = sum *i;
    }
    printf("sum = %d",sum);
    return 0;
}