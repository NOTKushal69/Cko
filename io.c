// // #include<stdio.h>

// // // int bisu(int *pA){
// // // printf("Well the memory address of this variable is %p",pA);
// // // printf("\n and value stored with in this variable is %d",*pA);


// // // };
// // int main(){
// // // int a =23;
// // // int *pA=&a;

// // // bisu(pA);



// // // FILE *pH=fopen("Kusu.html","w");

// // // fprintf(pH,"<html> <body> Hello nigga </body></html>");

// // // fclose(pH);
// // // remove("Kusu.html");






// // // FILE *pI=fopen("Bio.txt","a");
// // // // fprintf(pI,"Mero name kushal timilsina and i am repeating concept for the very fucking time");
// // // fprintf(pI,"As far as i am concerned is am very much used to with this concept ");

// // // fclose(pI);
// // //  remove("Bio.txt");



// // /*  Reading File in c Programminh */



// // // FILE *pE=fopen("poem.txt","r");

// // // char Buffer[100];
// // // fgets(Buffer,100,pE);

// // // printf("%s",Buffer);

// // // fclose(pE);

// // printf("Enter the name of you file");

// // char name[50];
// // scanf("%s",namee);

// // printf("%s",namee);

// // FILE *pA=(namee,"r");
// // char buffer[100];

// // fgets(buffer,100,pA);
// // printf("%s",buffer);

// // fclose(namee);

// //    return 0;
// // };




// #include <stdio.h>

// int kusu(int *pA);

// int main(){



// int a;
// a=9;
// int *pA=&a;


// printf("%d is the size of variable",sizeof(a));
// printf("\n %p is the memory address of this variable",pA);

// kusu(pA);

//    return 0;
// }

// int kusu(int *pA){
// printf(" \n And the value stored with in this variable is %d",*pA);

// };

#include <stdio.h>


int main(){
FILE *pA=fopen("Kusu.txt","i");

char buffer[250];

fgets(buffer,250,pA);

printf("%s",buffer);
fclose(pA);








   return 0;
}








