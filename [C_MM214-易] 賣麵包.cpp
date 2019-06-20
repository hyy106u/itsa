#include <iostream>  
using namespace std;  
  
int main() {  
    // [C_MM214-易] 賣麵包  
    int N;//測資數量  
    int tot_bread, tot_box;//麵包總數，使用的盒子總數  
    int big_box, small_box;//大盒子的數量，小盒子的數量  
    int big_bread, small_bread;  
    //大盒子的麵包數，小盒子的麵包數  
    //tot_box = big_box + small_box  
    //tot_bread = big_box*big_bread + small_box*small_bread  
    cin >> N;  
    for(int i = 0;i < N;i++)  
    {  
        cin >> tot_bread >> tot_box >> small_bread >> big_bread;   
        //tot_box = big_box + small_box  
        //small_box = tot_box - big_box  
        //tot_bread = big_box*big_bread + (tot_box - big_box)*small_bread  
        big_box=(tot_bread - tot_box*small_bread)/(big_bread - small_bread);  
        small_box = tot_box - big_box;  
        cout << small_box << " " << big_box << endl;  
    }  
    return 0;  
}  
