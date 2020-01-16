/*
	==========
	CHESSBOARD
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

void flood(int x,int y,int fillColor, int defaultColor)  
{  
    if(getpixel(x,y)==defaultColor)  
    {  
        putpixel(x,y,fillColor);  
        flood(x+1,y,fillColor,defaultColor);  
        flood(x-1,y,fillColor,defaultColor);  
        flood(x,y+1,fillColor,defaultColor);  
        flood(x,y-1,fillColor,defaultColor);  
    }  
}  

int main(){

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

	
	DDA_Algo(10,10,130,10);
	DDA_Algo(10,40,130,40);
	DDA_Algo(10, 70, 130,70);
	DDA_Algo(10, 100, 130, 100);
	DDA_Algo(10, 130, 130, 130);

	DDA_Algo(10,10,10,130);
	DDA_Algo(40,10,40,130);
	DDA_Algo(70, 10, 70,130);
	DDA_Algo(100, 10, 100, 130);
	DDA_Algo(130, 10, 130, 130);
	

	flood(11,11,5,0); //1
	flood(11,99,5,0);  //4
	flood(62,62,5,0); //3
	flood(99,99,5,0); //5
	flood(75,15,5,0); //2
	flood(11+30,99+30,5,0);  //7
	flood(99+30,99+30,5,0); //5
	flood(75+30,15+30,5,0); //2

	getch();
	closegraph();

	return 0;
}























