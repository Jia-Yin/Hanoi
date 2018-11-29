#include "hanoi.h"
#include "rlutil.h"
#include <sstream>

using namespace rlutil;

Hanoi::Hanoi()
{
    m_stick[0] = "A";
    m_stick[1] = "B";
    m_stick[2] = "C";
    m_sring = false;
    m_Delay = 100;
    m_yBase = OFFSET_Y+HEIGHT-5;
    m_x[1] = OFFSET_X+WIDTH/2+1;
    m_x[0] = m_x[1]-2*STICKWIDTH-3;
    m_x[2] = m_x[1]+2*STICKWIDTH+3;
    DrawBound();
    DrawSticks();
    BigTitle();
}

void Hanoi::BigTitle()
{
    setBackgroundColor(13);
    locate(OFFSET_X+4, OFFSET_Y+2);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+4, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+4, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+4, OFFSET_Y+5);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+4, OFFSET_Y+6);
    cout <<"  ";
    locate(OFFSET_X+12, OFFSET_Y+6);
    cout <<"  ";
    locate(OFFSET_X+4, OFFSET_Y+7);
    cout <<"  ";
    locate(OFFSET_X+12, OFFSET_Y+7);
    cout <<"  ";
    locate(OFFSET_X+4, OFFSET_Y+8);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+17, OFFSET_Y+2);
    cout<<"  ";
    locate(OFFSET_X+17, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+17, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+17, OFFSET_Y+5);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+17, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+17, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+17, OFFSET_Y+8);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+2);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+27, OFFSET_Y+8);
    cout<<"  ";
    locate(OFFSET_X+37, OFFSET_Y+2);
    cout<<"    ";
    locate(OFFSET_X+40, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+36, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+41, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+35, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+42, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+34, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+33, OFFSET_Y+6);
    for (int i=0; i<12 ;i++) cout<<" ";
    locate(OFFSET_X+44, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+32, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+44, OFFSET_Y+8);
    cout<<"  ";
    locate(OFFSET_X+32, OFFSET_Y+8);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+2);
    cout<<"     ";
    locate(OFFSET_X+61, OFFSET_Y+2);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+53, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+61, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+54, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+61, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+55, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+61, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+56, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+61, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+57, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+61, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+49, OFFSET_Y+8);
    cout<<"  ";
    locate(OFFSET_X+58, OFFSET_Y+8);
    cout<<"     ";
    locate(OFFSET_X+68, OFFSET_Y+2);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+66, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+78, OFFSET_Y+3);
    cout<<"  ";
    locate(OFFSET_X+66, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+78, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+66, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+78, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+66, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+78, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+66, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+78, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+68, OFFSET_Y+8);
    for (int i=0; i<10 ;i++) cout<<" ";
    locate(OFFSET_X+83, OFFSET_Y+2);
    cout<<"  ";
    locate(OFFSET_X+83, OFFSET_Y+4);
    cout<<"  ";
    locate(OFFSET_X+83, OFFSET_Y+5);
    cout<<"  ";
    locate(OFFSET_X+83, OFFSET_Y+6);
    cout<<"  ";
    locate(OFFSET_X+83, OFFSET_Y+7);
    cout<<"  ";
    locate(OFFSET_X+83, OFFSET_Y+8);
    cout<<"  ";
    setColor(14);
    locate(3,88);
    cout <<"當前移動總次數：    ";
}

void Hanoi::SetSticks(string left, string middle, string right)
{
    m_stick[0] = left;
    m_stick[1] = middle;
    m_stick[2] = right;
    DrawSticks();
}

void Hanoi::DrawBound()
{
    setBackgroundColor(WALLCOLOR);
    locate(OFFSET_X, OFFSET_Y);
    for (int i=0; i<WIDTH; i++) cout << " ";
    locate(OFFSET_X, OFFSET_Y+HEIGHT-1);
    for (int i=0; i<WIDTH; i++) cout << " ";
    for (int i=0; i<HEIGHT; i++) {
        locate(OFFSET_X, OFFSET_Y+i);
        cout << "  ";
        locate(OFFSET_X+WIDTH, OFFSET_Y+i);
        cout << "  ";
    }
}

void Hanoi::MoveToStick(int to, int n)
{
    hidecursor();
    int yfrom = m_yBase - 10 - SEP_Y;
    int yto = m_yBase - m_stack[to].size() - 1;
    for (int y=yfrom; y<yto; y++) {
        resetColor(); setColor(COLORS[n]);
        locate(m_x[to]-n, y+1);
        for (int j=-n; j<=n; j++) m_sring ? cout << n : cout << 'O';
        resetColor();
        locate(m_x[to]-n, y);
        for (int j=-n; j<=n; j++) cout << ' ';
        if (y>OFFSET_Y+6) {
            locate(m_x[to], y);
            setBackgroundColor(STICKCOLOR);
            cout << ' ';
        }
        cout.flush();
        msleep(m_Delay);
    }
    m_stack[to].push(n);
}

int Hanoi::MoveToTop(int from)
{
    hidecursor();
    int yfrom = m_yBase - m_stack[from].size();
    int yto = m_yBase - 10 - SEP_Y;
    int n = m_stack[from].top();
    for (int y=yfrom; y>yto; y--) {
        resetColor(); setColor(COLORS[n]);
        locate(m_x[from]-n, y-1);
        for (int j=-n; j<=n; j++) m_sring ? cout << n : cout << 'O';
        resetColor();
        locate(m_x[from]-n, y);
        for (int j=-n; j<=n; j++) cout << ' ';
        if (y>OFFSET_Y+6) {
            locate(m_x[from], y);
            setBackgroundColor(STICKCOLOR);
            cout << ' ';
        }
        cout.flush();
        msleep(m_Delay);
    }
    m_stack[from].pop();
    return n;
}

void Hanoi::MoveAtTop(int from, int to, int n)
{
    hidecursor();
    int xfrom = m_x[from];
    int xto = m_x[to];
    int y = m_yBase - 10 - SEP_Y;
    int step = 1;
    if (xto < xfrom) step = -1;
    for (int x=xfrom; x!=xto; x+=step) {
        resetColor();
        if (step>0) {
            locate(x-n, y);
            cout << ' ';
            locate(x+n+1, y);
            setColor(COLORS[n]);
            m_sring ? cout << n : cout << 'O';
        } else {
            locate(x+n, y);
            cout << ' ';
            locate(x-n-1, y);
            setColor(COLORS[n]);
            m_sring ? cout << n : cout << 'O';
        }
        cout.flush();
        msleep(m_Delay);
    }
}

void Hanoi::Move(string from, string to)
{
    int f=-1, t=-1;
    for (int i=0; i<3; i++) {
        if (m_stick[i]==from) f=i;
        if (m_stick[i]==to) t=i;
    }
    if (f<0) ShowError("No stick : "+from);
    if (t<0) ShowError("No stick : "+to);
    Move(f, t);
}


void Hanoi::Move(int from, int to)
{
    string str = "Move from " + m_stick[from] + " to " + m_stick[to]; // + m_stick[to];
    ShowMessage(str);
    if (!m_stack[from].size()) ShowError("Move from empty stick!");
    else if (m_stack[to].size()>0 && (m_stack[from].top() > m_stack[to].top())) ShowError("Move big on top of small!");
    int n = MoveToTop(from);
    MoveAtTop(from, to , n);
    MoveToStick(to, n);
    ShowMessage("");
    msleep(m_Delay);
}

void Hanoi::ShowMessage(string str)
{
    hidecursor();
    resetColor();
    setColor(MSGCOLOR);
    locate(OFFSET_X + 30, OFFSET_Y + 10);
    cout << str;
    for (int i=0; i<OFFSET_X+WIDTH-35-str.length(); i++) cout << ' ';
    cout.flush();
}

void Hanoi::ShowError(string str)
{
    hidecursor();
    for (int i=0; i<30; i++) {
        resetColor();
        setColor(ERRORCOLOR);
        locate(OFFSET_X + 4, OFFSET_Y + 2);
        cout << str;
        cout.flush();
        msleep(600);
        resetColor();
        locate(OFFSET_X + 4, OFFSET_Y + 2);
        for (int j=0; j<str.length(); j++) cout << " ";
        std::cout.flush();
        msleep(400);
    }
}

void Hanoi::PutRings(string r, int n)
{
    int s = -1;
    for (int i=0; i<3; i++) if (m_stick[i]==r) s = i;
    if (s<0) ShowError("No stick : " + r);
    PutRings(s, n);
}

void Hanoi::PutRings(int r, int n)
{
    if (n>7) {
        n = 7;
        ShowMessage("At most 7 rings, Set rings = 7");
    }
    for (int i=n; i>0; i--) {
        int y = m_yBase - m_stack[r].size() - 1;
        for (int j=-i; j<=i; j++) {
            resetColor();
            setColor(COLORS[i]);
            locate(m_x[r]+j, y);
            m_sring ? cout << i : cout << 'O';
        }
        m_stack[r].push(i);
    }
}

void Hanoi::ShowNumber(bool show) {
    m_sring = show;
}

void Hanoi::DrawStick(int x0, string str)
{
    setBackgroundColor(STICKCOLOR);
    //setColor(STICKCOLOR+1);
    for (int i=-STICKWIDTH; i<=STICKWIDTH; i++) {
        locate(x0+i, m_yBase);
        cout << " ";
    }
    for (int i=1; i<=10; i++) {
        locate(x0, m_yBase-i);
        cout << " ";
    }
    setColor(FONTCOLOR);
    setBackgroundColor(0);
    locate(x0-str.length()/2, m_yBase + 2);
    cout << str;
}

void Hanoi::DrawSticks()
{
    DrawStick(m_x[0], m_stick[0]);
    DrawStick(m_x[1], m_stick[1]);
    DrawStick(m_x[2], m_stick[2]);
}
