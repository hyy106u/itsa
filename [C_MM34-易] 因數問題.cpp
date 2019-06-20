#include <iostream>  
using namespace std;  
   
int main() {  
    // [C_MM34-易] 因數問題  
    int num;  
    while(cin >> num)  
    {  
        for(int i = 1;i<=num;i++)  
        {  
            if(num % i == 0)  
            {  
                if(i == num)  
                {  
                    cout << i << endl;  
                }  
                else  
                {  
                    cout << i << " ";  
                }  
            }  
        }  
    }  
    return 0;  
}  
