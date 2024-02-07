//Accept n and print from n to 1
#include<stdio.h>
int main(){
int n ;
printf("Enter The Value of n: ");
scanf("%d",&n);
for(int i=n;i>=1;i--){
    printf("%d \n",i);

}
printf("From n to 1 printed in reverse order");
}