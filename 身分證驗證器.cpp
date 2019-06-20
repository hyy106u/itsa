#include <iostream>  
#include <string.h>  
#include <cmath>  
using namespace std;  
  
int main() {  
    // 題目29. 身分證驗證器  
    string NUM;  
    char char_num[10];  
    char A[26] = {'A','B','C','D','E','F','G','H','J','K','L','M','N','P','Q','R','S','T','U','V','X','Y','W','Z','I','O'};  
    int int_num[10];  
    while(cin >> NUM)  
    {  
        strcpy(char_num, NUM.c_str());  
        for(int i = 0;i < 10;i++)  
        {  
            if(i == 0)//代表身分證第一碼  
            {  
                for(int j = 0;j < 26;j++)  
                //搜尋一樣的字，並把數字存入陣列  
                {  
                    if(char_num[0] == A[j])  
                    {  
                        int_num[0] = j+10;  
                    }  
                }  
            }  
            else  
            {  
                int_num[i] = ((int)char_num[i]-48);  
            }  
        }  
        //P=X1+(9*X2)+(8*N1)+(7*N2)+(6*N3)+(5*N4)+(4*N5)+(3*N6)+(2*N7)+N8+N9  
        int P = floor(int_num[0]/10) + (9*(int_num[0]%10));//P=X1+(9*X2)  
        for(int i = 1;i < 8;i++)  
        //(8*N1)+(7*N2)+(6*N3)+(5*N4)+(4*N5)+(3*N6)+(2*N7)  
        {  
            P = P + (9-i)*int_num[i];  
        }  
        P = P + int_num[8] + int_num[9];//N8+N9  
        if(P % 10 == 0)//輸出  
        {  
            cout << "CORRECT!!!" << endl;  
        }  
        else  
        {  
            cout << "WRONG!!!" << endl;  
        }  
    }  
    return 0;  
}  
