//this program is to print factorial of a given number
#include<stdio.h>
#include<stdlib.h>
void main(){
    int a,b,c=1;
    system("cls");
    printf("enter any number: ");
    scanf("%d",&a);
    for(b=1;b<=a;b++)
    c=c*b;
    printf("factorial of a give number is :%d",c);

}