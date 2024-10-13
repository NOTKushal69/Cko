#include <stdio.h>
int main(){
FILE *pA=fopen("Kusu.txt","w");

fprintf(pA,"\n this one is new added line \n in order to check  out if it works out  ")
;









// char buffer[250];

// while (fgets(buffer,250,pA)!=NULL)
// {

// printf("%s",buffer);
// }
fclose(pA);

   return 0;
}
