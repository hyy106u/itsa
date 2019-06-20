#include <iostream>  
#include <cmath>  
using namespace std;  
  
int main() {  
    // [C_MM225-易] 不能吵架辣  
    int cake, drink, cookie;  
    while(cin >> cake >> drink)  
    {  
        if(cake != -1 && drink != -1)  
        {  
            cookie = floor(cake/3) + floor(drink/2);  
            if(cake%4==0 && drink%2==0 && cookie%2==0&&(cake/4==drink/2))  
            {  
                cout << "yes" << endl;  
            }  
            else  
            {  
                cout << "no" << endl;  
            }  
        }  
        else  
        {  
            break;  
        }  
    }  
    return 0;  
}  
