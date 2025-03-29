//백준 2745번 진법 변환
//숫자도 아스키 코드로 변환되면 다른 수가 된다는 것을 기억!

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    string N;
    int B, d = 0;
    cin >> N >> B;
    for (int i = 0; i < N.size();i++)
    {
        if(N[i]>64)
        {
            N[i] -= 55;
        }
        else if(N[i]>47)
        {
            N[i] -= 48;
        }
        
        d += N[i]*pow(B, N.size()-i-1);
    }
    cout << d;

    return 0;
}