#include <iostream>    
#include<iomanip>    
#include<cmath>    
using namespace std;    
    
int main() {        
    int n;    
    cin >> n;    
    double grade[n][3];    
    double chinese=0,english=0, math=0, totle=0;    
    for(int i = 0;i < n;i++)    {    
        for(int j = 0;j < 3;j++)    {    
            cin >> grade[i][j];    
        }    
    }    
    for(int i = 0;i < n;i++){    
        chinese = chinese + grade[i][0];    
        if(i == n-1){    
            chinese = chinese/n;    
        }    
    }    
    for(int i = 0;i < n;i++){    
        english = english + grade[i][1];    
        if(i == n-1){    
            english = english/n;    
        }    
    }    
    for(int i = 0;i < n;i++){    
        math = math + grade[i][2];    
        if(i == n-1){    
            math = math/n;    
        }    
    }    
    for(int i = 0;i < n;i++){    
        for(int j = 0;j < 3;j++){    
            totle = totle + grade[i][j];    
            if(i == n-1 && j == 2)totle = totle/(3*n);
        }    
    }    
    totle = (floor(totle*10+0.5))/10;    
    chinese = (floor(chinese*10+0.5))/10;    
    english = (floor(english*10+0.5))/10;    
    math = (floor(math*10+0.5))/10;    
    cout << fixed << setprecision(1) << totle << " " << chinese << " " << english << " " << math << endl;    
    return 0;    
}  
