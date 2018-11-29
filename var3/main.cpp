#include <iostream>
#include "hanoi.h"
#include "rlutil.h"
//#include <windows.h>


using namespace std;

Hanoi h;
const int NC=12;
const int TimeY=5;
const int Digits[3]={102,94,86};
int gtime=0;

void TimeCalculate(int t);

void hh(int n, int from, int to, int buf);
void RESET(int re);
void Zero(int z);
void One(int O);
void Two(int Tw);
void Three(int Th);
void four(int fo);
void five(int fi);
void six(int si);
void seven(int se);
void eight(int e);
void nine(int n);

void (*n[10])(int)={Zero,One,Two,Three,four,five,six,seven,eight,nine};

int main()
{
    h.SetSticks("A","B","C");
    h.ShowNumber(true);
    h.PutRings(0, 7);
    h.SetDelay(1);
    rlutil::setColor(14);
    rlutil::locate(94,3);
    cout <<"當前移動次數：";
    rlutil::locate(20,11);
    cout <<"當前步驟：";
    hh(7, 0, 2, 1);
    rlutil::locate(3,31);
    return 0;
}

void hh(int n, int from, int to, int buf)
{
    gtime++;
    TimeCalculate(gtime);
    if(n==1){h.Move(from, to);}
    else{
        hh(n-1, from, buf, to);
        h.Move(from, to);
        hh(n-1, buf, to, from);
    }
}

void TimeCalculate(int t){
    int D=0,TD=0,HD=0;
    D=t%10;
    TD=t/10%10;
    HD=t/100%10;
    RESET(Digits[0]);
    (*n[D])(Digits[0]);
    RESET(Digits[1]);
    (*n[TD])(Digits[1]);
    RESET(Digits[2]);
    (*n[HD])(Digits[2]);
    rlutil::msleep(100);
}

void RESET(int re){
    rlutil::setBackgroundColor(0);
    for(int i=0;i<5;i++){
        rlutil::locate(re+5, TimeY+i);
        cout <<"      ";
    }
}

void Zero(int z){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(z+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    for(int i=1;i<4;i++){
        rlutil::locate(z+5, TimeY+i);
        cout<<"  ";
        rlutil::locate(z+9, TimeY+i);
        cout<<"  ";
    }
    rlutil::locate(z+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void One(int O){
    rlutil::setBackgroundColor(NC);
    for(int i=0;i<5;i++){
        rlutil::locate(O+9, TimeY+i);
        cout << "  ";
    }
}

void Two(int Tw){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(Tw+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(Tw+9, TimeY+1);  cout<<"  ";
    rlutil::locate(Tw+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(Tw+5, TimeY+3);  cout<<"  ";
    rlutil::locate(Tw+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void Three(int Th){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(Th+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(Th+9, TimeY+1);  cout<<"  ";
    rlutil::locate(Th+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(Th+9, TimeY+3);  cout<<"  ";
    rlutil::locate(Th+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void four(int fo){
    rlutil::setBackgroundColor(NC);
    for(int i=0;i<2;i++){
        rlutil::locate(fo+5, TimeY+i);
        cout<<"  ";
        rlutil::locate(fo+9, TimeY+i);
        cout<<"  ";
    }
    rlutil::locate(fo+5, TimeY+2);
    for(int i=0;i<6;i++) cout <<" ";
    for(int i=3;i<5;i++){
        rlutil::locate(fo+9, TimeY+i);
        cout<<"  ";
    }
}

void five(int fi){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(fi+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(fi+5, TimeY+1);  cout<<"  ";
    rlutil::locate(fi+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(fi+9, TimeY+3);  cout<<"  ";
    rlutil::locate(fi+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void six(int si){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(si+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(si+5, TimeY+1);  cout<<"  ";
    rlutil::locate(si+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(si+5, TimeY+3);  cout<<"  ";
    rlutil::locate(si+9, TimeY+3);  cout<<"  ";
    rlutil::locate(si+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void seven(int se){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(se+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(se+5, TimeY+1);  cout <<"  ";
    for(int i=1;i<5;i++){
        rlutil::locate(se+9, TimeY+i);
        cout <<"  ";
    }
}

void eight(int e){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(e+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(e+5, TimeY+1);  cout <<"  ";
    rlutil::locate(e+9, TimeY+1);  cout <<"  ";
    rlutil::locate(e+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(e+5, TimeY+3);  cout <<"  ";
    rlutil::locate(e+9, TimeY+3);  cout <<"  ";
    rlutil::locate(e+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}

void nine(int n){
    rlutil::setBackgroundColor(NC);
    rlutil::locate(n+5, TimeY);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(n+5, TimeY+1);  cout <<"  ";
    rlutil::locate(n+9, TimeY+1);  cout <<"  ";
    rlutil::locate(n+5, TimeY+2);
    for(int i=0;i<6;i++) cout << " ";
    rlutil::locate(n+9, TimeY+3);  cout <<"  ";
    rlutil::locate(n+5, TimeY+4);
    for(int i=0;i<6;i++) cout << " ";
}


