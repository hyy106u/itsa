#include <iostream>  
#include <algorithm>  
#include <string>  
#include <sstream>  
using namespace std;  
  
int main() {  
    // [C_AR174-易] 身高排序  
    string tall;  
    int count = 0;  
    int t[10];  
    while(cin >> tall)  
    {  
        cin.ignore();   
        if(tall != "=====")  
        {  
            t[count] = stoi(tall);  
            count++;  
        }  
        else  
        {  
            break;  
        }  
    }  
    sort(t, t+count);  
    reverse(t, t+count);  
  
    while(cin >> tall)  
    {  
        cin.ignore();   
        if(tall != "end" && stoi(tall) <= count)  
        {  
            cout << t[stoi(tall)-1] << endl;  
        }  
        else  
        {  
            break;  
        }  
    }  
    return 0;  
}  
