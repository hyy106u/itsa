#include <stdio.h>    
#include <stdlib.h>    
#include <math.h>    
    
int PrimeNumber(int temp){    
    int i;    
        if(temp==0){    
        return 0;    
    }    
    for(i=2;i<=sqrt(temp);i++){    
        if(temp%i==0){    
            return 0;    
        }    
    }    
    return 1;    
}    
    
int Prime(int temp){    
    int i,j,d,max=0,ttemp;    
        
    ttemp=temp;    
    for(i=0;temp>0;i++,temp/=10);    
    d=i;    
    for(i=d;i>=0;i--){    
        for(j=i-1;j>=0;j--)    
        {    
            temp=ttemp%(int)floor(pow(10,i));    
            temp=temp/(int)floor(pow(10,j));    
            if((max<temp)&&(PrimeNumber(temp)))    
            {    
                max=temp;    
            }    
        }    
    }    
    return max;    
}    
int main(){    
    int num;    
    scanf("%d",&num);     
    if(Prime(num)==0)    
    {    
        printf("No prime found\n");    
    }    
    else    
    {    
        printf("%d\n",Prime(num));    
    }    
    
    system("PAUSE");    
    return 0;    
}
