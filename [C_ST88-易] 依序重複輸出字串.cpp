#include<iostream>  
#include <string.h>  
  
using namespace std;  
int main(){  
    // [C_ST88-易] 依序重複輸出字串  
    string input;  
    while(cin >> input)  
    {  
        int len = input.size();  
        char char_input[len];  
        strcpy(char_input, input.c_str());    
        for(int i = 0;i < len;i++)  
        {  
            if(i != len-1)  
            {  
                cout << char_input[i] << char_input[i];  
            }  
            else  
            {  
                cout << char_input[i] << char_input[i] << endl;  
            }  
        }  
    }  
}  
