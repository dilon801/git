//백준 25206번 너의 평점은

#include <iostream>

using namespace std;

int main()
{
    double g_total=0;
    double s_total=0;
    class Grade
    {
    public:

        string subject;
        double grade;
        string score;
    };

    Grade g[20];
    for(int i=0; i<20; i++)
    {
        cin >> g[i].subject >> g[i].grade >> g[i].score;
        if(g[i].score[0]=='P')
        {
            continue;
        }

        double score;
        if(g[i].score[1]=='+')
        {
            score=0.5;
        }
        else if(g[i].score[0]=='F')
        {
            score=1;
        }
        else
        {
            score=0;
        }
        g_total+=g[i].grade;
        s_total+=g[i].grade/1*(69-g[i].score[0]+score);
    }

    cout.precision(6);
    cout << fixed;
    if(s_total==0)
    {
        cout << 0;
        return 0;
    }
    cout << s_total/g_total;

    return 0;
}