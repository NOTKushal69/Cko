// // #include<stdio.h>
// // #include<stdlib.h>
// // #include<time.h>

// // int main() {
// //     srand(time(0));

// //     int d, r;
// //     char a;
// //     do {
// //         printf("Enter any number (1-6): ");
// //         scanf("%d", &d);
        
// //         r = rand() % 6 + 1;
        
// //         if (r == d) {
// //             printf("Well, you won the game!\n");
// //         } else {
// //             printf("You lose!\n");
// //         }
        
// //         printf("Do you want to continue further (y/n)? ");
// //         scanf(" %c", &a); // Added space before %c to handle newline issue
// //     } while (a == 'y' || a == 'Y'); // Compare directly with 'y' or 'Y'

// //     return 0;
// // }



// #include <stdio.h>

// int val(int *pA);

// int main(){


// int a=1;
// int b=2;
// int c=3;

// int *pA=&a;
// // printf("%p is the size of variable a",pA);
// // printf("Value stored in variable a is %d",*pA);

// val(pA);





// // int a=1;
// // int b=1;
// // int c=1;

// // printf("%d \n",sizeof(a));
// // printf("%d \n",sizeof(b));
// // printf("%d \n",sizeof(c));

// // printf(" %p \n",&a);
// // printf(" %p \n",&b);
// // printf(" %p \n",&c);

//     return 0;
// }


// int val(int *pA){
// printf("Value stored in variable is  %d",*pA);
// }
#include<stdio.h>

int main(){
//     int a=2;
// // int *pA=&a;


// // // printf("%d",sizeof(a));
// // printf("%d",*pA);
// FILE *pA=fopen("kusu.txt","w");
// fprintf(pA,"Hello mero name kushal ho gandu");

// fclose(pA)
// remove("kusu.txt");



int a =1;
int *pA=&a;


// printf("%d is the size of this variable",sizeof(a));
// printf("%p is the memory address of this variable",pA);












return 0;
};
