#include<iostream>
#include<graphics.h>
using namespace std;

void dispCircle(int xc_,int yc_, int x, int y) {
         
    putpixel(xc_+x, yc_+y, WHITE);
    putpixel(xc_-x, yc_+y, WHITE);
    putpixel(xc_+x, yc_-y, WHITE);
    putpixel(xc_-x, yc_-y, WHITE);
    putpixel(xc_+y, yc_+x, WHITE);
    putpixel(xc_-y, yc_+x, WHITE);
    putpixel(xc_+y, yc_-x, WHITE);
    putpixel(xc_-y, yc_-x, WHITE);
}

void BCircle(int _x, int _y, int _r){

	int x = 0, y = _r;
	int d = 3 - 2 * _r;

	dispCircle(_x, _y, x, y);

	while(y >= x)
	{
		x++;
		
		if(d > 0){
			y--;
			d = d + 4 * (x - y) + 10;
		}

		else{
			d = d + 4 * x + 6;			
		}

		dispCircle(_x, _y, x, y);
	}
}

int main(){

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

	BCircle(100, 100, 60);

	getch();
	closegraph();

	return 0;
}
