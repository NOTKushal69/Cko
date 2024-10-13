// // #include<stdio.h>
// // #include<math.h>

// // int armornot(int a);

// // int main() {
// //     printf("Enter any number: ");
// //     int a;
// //     scanf("%d", &a);
    
// //     if (armornot(a)) {
// //         printf("Armstrong\n");
// //     } else {
// //         printf("Not Armstrong\n");
// //     }
    
// //     return 0;
// // }

// // int armornot(int a) {
// //     int num = a;
// //     int s = 0;
// //     int r;
    
// //     while (num != 0) {
// //         r = num % 10;
// //         num = num / 10;
// //         s = s + (int)pow(r, 3); // Casting pow() result to int
// //     }
    
// //     if (a == s) {
// //         return 1; // Return true if Armstrong
// //     } else {
// //         return 0; // Return false if not Armstrong
// //     }
// // }
// #include<stdio.h>

// int main(){

// // for (int i = 1; i <=5; i++)
// // {
// // for (int j = 1; j <=i; j++)
// // {
// //     printf("%c",120);
// // }
// // printf("\n");
// // }

//     return 0;
// }




#include <stdio.h>
#include<string.h>
#include<math.h>
#include<time.h>
#include<stdlib.h>


int main(){

//     int a[]={1,2,3,4,5,12,13,65};


// for (int i = 0; i <= (sizeof(a)/sizeof(a[0])); i++)
// {
//    printf("%d \n",a[i]);
// }




// int a[2][3]={
//     {1,2,3},
//     {4,5,6}
// };
// for (int i = 0; i <2; i++)
// {
//  for (int j = 0; j<3; j++)
//  {
//    printf("%d",a[i][j]);
//  }
//  printf("\n");
 
// };




// char b[]="bishal";
// char k[]="Kushal";

// strcpy(b,k);
// strcpy(k,b);
// printf("%s",b);


srand(time(0));

int a;
a=rand();
printf("%d",a);




    return 0;
}










