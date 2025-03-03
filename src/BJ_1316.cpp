//백준 1316번 그룹 단어 체커

#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int c=N;
    string s[100];

    for(int i=0; i<N; i++)
    {
        cin >> s[i];
        for(int j=0; j<s[i].size(); j++)
        {
            for(int k=s[i].find(s[i][j]); k<s[i].rfind(s[i][j]); k++)
            {
                if(s[i][k]!=s[i][j])
                {
                    c--;
                    j=s[i].size();
                    break;
                }
            }
        }
    }
    cout << c;

    return 0;
}