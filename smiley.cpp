/*
	==========
	  SMILEY
	==========
	Sahil Hadke
	16
*/


#include<iostream>
#include<graphics.h>  
using namespace std;

void DDA_Algo(int X0, int Y0, int X1, int Y1) 
{ 
    int dx = X1 - X0; 
    int dy = Y1 - Y0; 
  
    int steps = abs(dx) > abs(dy) ? abs(dx) : abs(dy); 
  
    float Xinc = dx / (float) steps; 
    float Yinc = dy / (float) steps; 
  
    float X = X0; 
    float Y = Y0; 


    for (int i = 0; i <= steps; i++) 
    { 
        putpixel (X,Y,WHITE);  
        X += Xinc;          
        Y += Yinc;        
     } 

} 

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

	
	BCircle(100, 100, 70); 
	BCircle(70, 80, 10);
	BCircle(130, 80, 10);
	
	DDA_Algo(80 ,130, 130 ,130);
	
	getch();
	closegraph();

	return 0;
  }
