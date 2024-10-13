#include <stdio.h>


int main(){
// FILE *pW=fopen("poem.txt","r");


// char buffer[50];


// while (fgets(buffer,50,pW)!=NULL)
// {
// printf("%s \n",buffer);
// };




// fclose(pW);

FILE *pW=fopen("poem.txt","r");



char  buffer[199];

while (fgets(buffer,199,pW )!= NULL)
{
    printf("%s",buffer);
}



fclose(pW);
    return 0;
}