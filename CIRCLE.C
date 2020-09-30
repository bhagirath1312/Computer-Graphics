 #include<stdio.h>
 #include<graphics.h>
 #include<conio.h>
 #include<math.h>
 #include<dos.h>
 void main()
 {

	int r,x,y,gd=DETECT,gm;
	float d;

	clrscr();
	printf("Enter Radius:");
	scanf("%d",&r);
	x=0;
	y=r;
	d=1-r;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	do
	{
		putpixel(300+x,300+y,YELLOW);
		putpixel(300+x,300-y,WHITE);
		putpixel(300-x,300+y,GREEN);
		putpixel(300-x,300-y,WHITE);
		putpixel(300+y,300+x,GREEN);
		putpixel(300+y,300-x,RED);
		putpixel(300-y,300+x,RED);
		putpixel(300-y,300-x,BLUE);
		if(d<0)
		{
			x=x+1;
			y=y;
			d=d+2*x+2;
		}
		else
		{
			x=x+1;
			y=y-1;
			d=d+2*(x-y)+1;
			delay(500);
		}
	}while(x<y);
	getch();
	closegraph();
 }