#include<graphics.h>
#include<math.h>
using namespace std;
// Xay dung ham ve do thi ham so co he truc toa do
float   xwmin, ywmin, xwmax, ywmax;
float tlx, tly;
int xvmin, yvmin, xvmax, yvmax;

void Taokhung(float x1, float y1, float x2, float y2)
{
    xwmin=x1;
    ywmin=y1;
    xwmax=x2;
    ywmax=y2;
}

void Taomanhinh(int x1, int y1, int x2, int y2)
{
    xvmin=x1;
    yvmin=y1;
    xvmax=x2;
    yvmax=y2;
    tlx=(xvmax-xvmin)/(xwmax-xwmin);
    tly=(yvmax-yvmin)/(ywmax-ywmin);
}

void Chuyenden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    moveto(xm,ym);
}

void veden2D(float x, float y)
{
    int xm=(int)(tlx*(x-xwmin)+xvmin+0.5);
    int ym= (int)(tly*(ywmax-y)+yvmin+0.5);
    lineto(xm,ym);
}

void Do_thi_truc(float xmin, float xmax)
{
    float dx=0.01;
    float x=xmin;
    float  y = 2 + 3*x - x*x*x;
    Chuyenden2D(x,y);
    while (x<=xmax)
    {
        x=x+dx;
        y = 2 + 3*x - x*x*x;
        veden2D(x,y);
    }
}

void Truc_Ox()
{
    Chuyenden2D(-5,0);
    for(int x=-5;x<=5;++x)
    {
        veden2D(x, 0);
    }

    for(int x=-3; x<=3; ++x)
    {
        Chuyenden2D(x,0.3);
        veden2D(x,-0.3);
    }
}
void Truc_Oy()
{
    Chuyenden2D(0,-5);
    for(int y=-4;y<=4;++y)
    {
        veden2D(0,y);
    }

    for(int y=-4;y<=4;++y)
    {
        Chuyenden2D(-0.3,y);
        veden2D(0.3,y);
    }
}
int main()
{
    initwindow(700,700);
    Taokhung(-3,3,3,-3);
    Taomanhinh(100,400,500,100);

    setcolor(12);
    Truc_Ox();
    Truc_Oy();

    setcolor(9);
    Do_thi_truc(-2,2);

    getch();
    closegraph();

}

