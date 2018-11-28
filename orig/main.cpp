#include <iostream>
#include "hanoi.h"

using namespace std;

Hanoi h;

void hh(int n, int from, int to, int buf);

int main()
{
    h.SetSticks("A", "B", "C");
    h.ShowNumber(true);
    h.PutRings(0, 7);
    h.SetDelay(1);
    hh(7, 0, 2, 1);
    return 0;
}

void hh(int n, int from, int to, int buf)
{
    if(n==1){h.Move(from, to);}
    else{
        hh(n-1, from, buf, to);
        h.Move(from, to);
        hh(n-1, buf, to, from);
    }
}
