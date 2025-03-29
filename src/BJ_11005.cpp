//백준 11005번 진법 변환 2
//insert 함수 두번째 파라미터는 무조건 string
//to_string 함수는 int를 string으로 바꿔줌!!
//정수는 문자열에 들어갈 때 모두 아스키 코드 변환!!

#include<iostream>
#include<string>

using namespace std;

int main()
{
    int N, B;
    string b = "";
    string a;
    cin >> N >> B;
    while(N!=0)
    {
        if(N%B>9)
        {
            a = char((N % B + 55));
            b.insert(0, a);
        }
        else
        {
            a = char(N % B + 48);
            b.insert(0, a);
        }
        N /= B;
    }
    cout << b;

    return 0;
}