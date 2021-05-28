#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void tree()
{
	line(500,410,510,100);
	line(530,410,520,100);

	fillellipse(510,100,5,5);
	fillellipse(520,100,5,5);
	fillellipse(500,100,5,5);
	arc(472,80,350,150,40);
	arc(555,80,20,190,40);
	arc(472,102,15,230,40);
	arc(555,102,320,164,40);
	fillellipse(530,100,5,5);

}
void basket()
{
}


void climb1(int p)
{
	tree();
	line(0,410,getmaxx(),410);

	fillellipse(500,300-p,5,10);

	line(500,310-p,500,360-p);

	line(500,330-p,510,330-p);
	line(510,330-p,515,310-p);

	line(500,360-p,510,365-p);
	line(510,365-p,525,360-p);

}
void climb2(int q)
{
	tree(); basket();
	line(0,410,getmaxx(),410);

	fillellipse(500,300-q,5,10);


	line(500,310-q,500,360-q);

	line(500,330-q,503,335-q);
	line(503,335-q,508,310-q);

	line(500,360-q,510,365-q);
	line(510,365-q,520,365-q);

}
void climbtop()
{
	fillellipse(500,100,5,10);


	line(500,110,500,160);

	line(500,130,503,135);
	line(503,135,508,110);

	line(500,160,510,165);
	line(510,165,520,165);


}
void main()
{
	int n,m,i=2;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	while(!kbhit())
	{
		n=10,m=10;
		if(i>=1)
		{
			while(n<=200)
			{
				cleardevice();
				climb1(n);
				delay(100);
				n+=5;
				cleardevice();
				climb2(n);
				delay(100);
				n+=5;
			}
			if(n>=200)
			{
				while(m<=310)
				{
				tree();
				line(0,410,getmaxx(),410);
				climbtop();
				fillellipse(530,100+m,5,5);
				m+=5;
				delay(20);
				cleardevice();

				}
			}
			i=100;
		}
		delay(100);
	}
	getch();
	closegraph();
}
			