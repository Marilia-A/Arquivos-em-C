#include<stdio.h>
#include<locale.h>

int fibonacci(int n){
   if(n==1 || n==2){
   	 return 1;
   }
   else{
   	 return (fibonacci(n-1) + fibonacci(n-2));
   }
}

int main()
{
	setlocale(LC_ALL, "");
    int i;
    for(i=1;i<=20;i++){
     printf("%i, ", fibonacci(i));
	}
	getch();
	return 0;
}