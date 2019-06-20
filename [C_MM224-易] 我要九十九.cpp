#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    // [C_MM224-易] 我要九十九  
    double num;  
    int count = 0;  
    while(cin >> num)  
    {  
        if(num > 0)  
        {  
            while(num < 99)  
            {  
                num = sqrt(num)*10;  
                count++;  
            }  
            cout << count << endl;  
            count = 0;  
        }  
        else  
        {  
            break;  
        }  
    }  
    return 0;  
}  
