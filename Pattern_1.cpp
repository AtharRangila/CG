/*
	==========
	PATTERN 1
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

int main(){

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);


	DDA_Algo(10,10, 110, 10);
	DDA_Algo(10, 80, 110, 80);
	DDA_Algo(10, 10, 10, 80);
	DDA_Algo(110, 10, 110, 80);

	DDA_Algo(10, 45, 60, 10);
	DDA_Algo(10,45, 60, 80);
	DDA_Algo(60, 80, 110, 45);
	DDA_Algo(110, 45, 60, 10);
	
	DDA_Algo(35, 27, 85, 27);
	DDA_Algo(35, 27, 35, 62);
	DDA_Algo(35, 62, 85, 62);
	DDA_Algo(85, 27, 85, 62);
	
	getch();
	closegraph();

	return 0;
}
