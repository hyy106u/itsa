#include<stdio.h> 
#include<stdlib.h> 
#include<string.h> 
int main() 
{ 
int i,n=0,line[100]; 
while((scanf("%d",&i))!=EOF){ 
line[n]=i; 
n++; 
} 
printf("%d",line[n-1]); 
for(i=n-2;i>=0;i--){ 
printf(" %d",line[i]); 
} 
printf("\n"); 
return 0; 
}  
