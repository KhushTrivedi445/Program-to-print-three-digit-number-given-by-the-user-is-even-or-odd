#include<stdio.h>

int main() {

int n,a;
printf("Enter three digit number :");
scanf("%d",&n);
a=n%10;

if(a%2==0) {
    printf("The three digit number is even ");
} else {
    printf(" The three digit number is odd ");
}

return 0;
}