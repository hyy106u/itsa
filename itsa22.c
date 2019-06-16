#include<iostream>
#include<string>
using namespace std;

int main()
{
 int a[26] = { 0 };
 string s;
 getline(cin, s);
 for (int i = 0; i < s.length(); i++){
  if (s[i] >= 'a' && s[i] <= 'z')s[i] -= 32;
  if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))a[s[i] - 'A']++;
 }
 for (int i = 0; i < 26; i++){
  if (i > 0)cout << " ";
  cout << a[i];
 }
 cout << endl;
 return 0;
}
