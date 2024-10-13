#include<stdio.h>
#include<math.h>
int armornot(int a);
int main() {
printf("Enter any number");
int a;
scanf("%d",&a);
armornot(a);
    return 0;
};
int armornot(int a){
int num =a;
int s;
int r;
while (num !=0)
{
  r = num % 10;
  num=num/10;
  s=s+pow(r,3);
};
if (a==s)
{
    printf("Armstrong");
}
else{
    printf("Not Armstrong");
}


}