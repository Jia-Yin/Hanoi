#ifndef HANOI_H
#define HANOI_H

#include <stack>
#include <string>

using namespace std;

const int WALLCOLOR = 2;
const int STICKCOLOR = 7;
const int FONTCOLOR = 15;
const int ERRORCOLOR = 12;
const int MSGCOLOR = 14;
const int R1COLOR = 14;
const int R2COLOR = 13;
const int R3COLOR = 12;
const int R4COLOR = 11;
const int R5COLOR = 10;
const int R6COLOR = 9;
const int R7COLOR = 7;

const int OFFSET_X = 2;
const int OFFSET_Y = 1;
const int SEP_Y = 2;
const int WIDTH = 75;
const int HEIGHT = 22;
const int STICKWIDTH = 10;
const int COLORS[] = {0,R1COLOR, R2COLOR, R3COLOR, R4COLOR, R5COLOR, R6COLOR, R7COLOR};

class Hanoi
{
    public:
        Hanoi();

        void SetSticks(string left, string middle, string right);
        void SetDelay(int val) { m_Delay = val; }
        void ShowNumber(bool show);
        void PutRings(int r, int n);
        void PutRings(string r, int n);
        void Move(int from, int to);
        void Move(string from, string to);

    protected:

    private:
        int m_Rings;
        int m_Delay;
        int m_x[3], m_yBase;
        bool m_sring;
        string m_stick[3];
        stack<int> m_stack[3];

        void DrawBound();
        void DrawSticks();
        void DrawStick(int x0, string c);
        void ShowError(string str);
        void ShowMessage(string str);
        int  MoveToTop(int from);
        void MoveAtTop(int from, int to, int n);
        void MoveToStick(int to, int n);
};

#endif // HANOI_H
