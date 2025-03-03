//백준 2941번 크로아티아 알파벳

#include <iostream>

using namespace std;

int main()
{
  string s;
  cin >> s;
  int c=s.size();
  
  for(int i=s.size(); i>0; i--)
  {
    if(s[i]=='-'||(s[i]=='j'&&(s[i-1]=='n'||s[i-1]=='l'))||s[i]=='=')
    {
      if(s[i]=='='&&s[i-1]=='z'&&s[i-2]=='d')
      {
        c--;
      }
      c--;
    }
  }

  cout << c << endl;
  
  return 0;
}