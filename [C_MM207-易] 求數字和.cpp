#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_MM207-易] 求數字和  
    int num, sum = 0;  
    for(int i = 0;i < 5;i++)  
    {  
        cin >> num;  
        sum = sum + ((num+1)%13);  
    }  
    cout << sum << endl;  
    return 0;  
}  
