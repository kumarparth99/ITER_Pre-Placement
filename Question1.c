// Accept "n" and print from 1 to n
#include<stdio.h>
int main(){
    int n;
    printf("Enter The value of n: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        printf("%d \n",i);

    }
    printf("The Values from 1 to n is printed.");
}