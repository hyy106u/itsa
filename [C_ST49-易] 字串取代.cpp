#include<iostream>  
#include<string>  
#include<algorithm>  
#include<map>  
using namespace std;  
int main()  
{  
    // [C_ST49-易] 字串取代  
    string s;  
    getline(cin, s);  
    string p[] = { "hate", "stupid", "angry", "dirty" };  
    string q[] = { "love", "smart", "happy", "clean" };  
    for (int i = 0; i < 4; i++)  
    {  
        string p1 = p[i];  
        string q1 = q[i];  
        int fpos = 0;  
        while (1)  
        {  
            fpos = s.find(p1, fpos);  
            if (fpos != string::npos)  
            {  
                s.replace(fpos, p1.size(), q1);  
                fpos = fpos + p1.size();  
            }  
            else  
                break;  
        }  
    }  
    cout << s << endl;  
    return  0;  
}  
