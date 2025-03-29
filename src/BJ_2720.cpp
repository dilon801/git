//백준 2720번 세탁소 사장 동혁
//변수 한 번에 선언하고 초기화 할 때
//변수, 변수 = k 가 아니라 변수=k, 변수=k 임...

#include<iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int C;
        int q = 0;
        int d = 0;
        int n = 0;
        int p = 0;
        cin >> C;
        if (C / 25 != 0)
        {
            q = C / 25;
            C %= 25;
        }
        if (C / 10 != 0)
        {
            d = C / 10;
            C %= 10;
        }
        if (C / 5 != 0)
        {
            n = C / 5;
            C %= 5;
        }
        if (C / 1 != 0)
        {
            p = C;
        }
        cout << q << " "<< d << " "<< n << " "<< p << endl;
    }

    return 0;
}