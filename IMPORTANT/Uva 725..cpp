
#include "stdafx.h"

// http://uva.onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=666

#include "UVa725.h"

#include <iostream>

using namespace std;

int UVa725()
{
    bool first = true;
    while (true)
    {
        int n;
        cin >> n;
        if (n == 0)
        {
            break;
        }
        if (first)
        {
            first = false;
        }
        else
        {
            cout << endl;
        }

        bool no_solution = true;

        // fghij * N = abcde
        // N is at least 2, so fghij has to be smaller than 99999/2 => f is at most 4
        for (int f = 0; f < 5; f++)
        {
            for (int g = 0; g < 10; g++)
            {
                if (g != f)
                {
                    for (int h = 0; h < 10; h++)
                    {
                        if (h != f && h != g)
                        {
                            for (int i = 0; i < 10; i++)
                            {
                                if (i != f && i != g && i != h)
                                {
                                    for (int j = 0; j < 10; j++)
                                    {
                                        if (j != f && j != g && j != h && j != i)
                                        {
                                            int fghij = (((f * 10 + g) * 10 + h) * 10 + i) * 10 + j;
                                            int abcde = fghij * n;

                                            if (abcde < 100000)
                                            {
                                                int e = abcde % 10;
                                                int abcd = abcde / 10;
                                                int d = abcd % 10;
                                                int abc = abcd / 10;
                                                int c = abc % 10;
                                                int ab = abc / 10;
                                                int b = ab % 10;
                                                int a = ab / 10;

                                                int count[10];
                                                for (int x = 0; x < 10; x++)
                                                {
                                                    count[x] = 0;
                                                }

                                                count[a]++;
                                                count[b]++;
                                                count[c]++;
                                                count[d]++;
                                                count[e]++;
                                                count[f]++;
                                                count[g]++;
                                                count[h]++;
                                                count[i]++;
                                                count[j]++;

                                                bool dup = false;
                                                for (int x = 0; x < 10 && !dup; x++)
                                                {
                                                    if (count[x] != 1){
                                                        dup = true;
                                                    }
                                                }

                                                if (!dup)
                                                {
                                                    no_solution = false;
                                                    cout << a << b << c << d << e << " / " << f << g << h << i << j << " = " << n << endl;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
        if (no_solution)
        {
            cout << "There are no solutions for " << n << "." << endl;
        }
    }

    return 0;
}
