#ifndef MAIN_HPP
#define MAIN_HPP

#include <iostream>
#include <iomanip>
using namespace std;

int findcross(int[][10]);
void printout(int[][10], int);

int findcross(int M[][10])
{
    int cnt = 0;

    for (int i = 1; i < 9; i++)
    {
        for (int j = 1; j < 9; j++)
        {
            if (M[i][j] == 1 &&
                M[i - 1][j] == 1 &&
                M[i + 1][j] == 1 &&
                M[i][j - 1] == 1 &&
                M[i][j + 1] == 1)
            {
                cout << "Found cross center " << i << "," << j << endl;
                cnt++;
            }
        }
    }

    return cnt;
}

void printout(int M[][10], int cnt)
{
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
            cout << setw(5) << M[i][j];

        cout << endl;
    }

    cout << "Total found cross " << cnt << endl;
}

#endif
