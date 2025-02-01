#include <iostream>

using namespace std;

int main()
{
  int c=0;
  string s;
  string cr[8] = {"c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z="};
  cin >> s;
  
  for(int i=0; i<s.size(); i++)
  {
    for(int j=0; j<8; j++)
    {
      if(s.find(cr[j], i))
      {
        i++;
        if(cr[j]=="dz=")
        {
          i++;
        }
        break;
      }
    }
    c++;
  }

  cout << c << endl;
  
  return 0;
}