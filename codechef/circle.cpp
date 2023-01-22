#include<stdio.h>
#include<conio.h>
#include<math.h>
#include<graphics.h>
 
void draw_circle(int,int,int);
int round(float);
 
main()
{
 int xc,yc,R;
 int driver,mode;
 
 clrscr();
 printf("Enter the center of the circle:\n");
 printf("Xc =");
 scanf("%d",&xc);
 printf("Yc =");
 scanf("%d",&yc);
 printf("Enter the radius of the circle :");
 scanf("%d",&R);
 
 clrscr();
 driver = DETECT;
 initgraph(&driver,&mode,"\\tc\\bgi");  \\The bgi path might be different in your case.
 draw_circle(xc,yc,R);
 
 getch();
 closegraph();
}
 
void draw_circle(int xc,int yc,int rad)
{
 float x,y;
 
 for(x= xc-rad;x<=xc+rad;x++)
    {
    y = yc + sqrt(pow(rad,2) - pow(x-xc,2));
    y = round(y);
    putpixel((int)x,(int)y,EGA_WHITE);
    }
 for(x= xc-rad;x<=xc+rad;x++) 
    {
    y = yc - sqrt(pow(rad,2) - pow(x-xc,2));
    y = round(y);
    putpixel((int)x,(int)y,EGA_WHITE);
    }
}
 
int round(float x)
{
 int val = (x + 0.5);
 return val;
 
}