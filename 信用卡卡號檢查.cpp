#include <iostream>  
#include <string.h>  
#include <cmath>  
using namespace std;  
  
int main() {  
    // [C_ST26-易] 信用卡卡號檢查  
    string card_num;  
    int len = 0;  
    while(cin >> card_num)  
    {  
        int sum = 0; //最後16位的總和(除10的那個數)  
        len = card_num.size(); //字串長度，判斷幾位數  
        char card[len];  //string to char，存放字元陣列card裡  
        bool Err = true; //旗標值  
        strcpy(card, card_num.c_str()); //string to char  
        if(len != 16) //不是16位，輸出Error  
        {  
            cout << "Error" << endl;  
        }  
        else //是16位  
        {  
            for(int i = 1;i <= len;i++) //項數  
            {  
                if(48 <= card[i-1] && card[i-1] <= 57) //判斷是否是數字，在此範圍內的是ASCII的0~9  
                {  
                    if(i % 2 != 0)//奇數  
                    {  
                        sum = sum + card[i-1]; //加總  
                    }  
                    else //偶數  
                    {  
                        //注意現在的card[i]是char，char to int 就是以下方法  
                        card[i-1] = floor((((int)card[i-1]-48)*2)/10)+((((int)card[i-1]-48))*2)%10;  
                        sum = sum + ((int)card[i-1]-48);  
                    }  
                }  
                else  
                {  
                    cout << "Error" << endl;  
                    Err = false;  
                    break;  
                }  
            }  
            if(Err == true)  
            {  
                if(sum % 10 == 0)  
                {  
                    cout << "Y" << endl;  
                }  
                else  
                {  
                    cout << "N" << endl;  
                }  
            }  
            else  
            {  
                break;  
            }  
        }  
    }  
    return 0;  
}  
