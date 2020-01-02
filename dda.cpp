#include<iostream>
#include<math.h>
#include<graphics.h>
using namespace std;

template<typename T>
int sign(T x){
	if(x < 0)
		return -1;
	else if(x > 0)
		return 1;
	return 0;
}

int main(){

	float x1, x2, y1, y2, len, color = 255;
	float x, y, dx, dy;

	cin>>x1>>y1>>x2>>y2;

	dx = abs(x2-x1);
	dy = abs(y2-y1);

	if(dx > dy)
		len = dx;
	else
		len = dy;
	

	dx = (x2-x1)/len;
	dy = (y2-y1)/len;

	//int gd=DETECT,gm;
	//initgraph(&gd,&gm,NULL);

	int i = 0;

	x = x1 + 0.5*(sign(dx));
	y = y1 + 0.5*(sign(dy));	

	dx = abs(dx);
	dy = abs(dy);

	if(dx < 0)
		dx = dx * -1;
	if(dy < 0)
		dy = dy * -1;

	while(i <= len){
		//putpixel(floor(x), floor(y), color);
		cout<<x<<" "<<y<<endl;
		x+=dx;
		y+=dy;
		i++;
	}

	//getch();
	//closegraph();

	return 0;
}


	
