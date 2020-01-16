/*
	================
	  LINE DRAWING
	================	

	SAHIL HADKE
	16
*/

#include<iostream>
#include<graphics.h>
#include<math.h>
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
	
	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

    for (int i = 0; i <= steps; i++) 
    { 
        putpixel (X,Y,WHITE);  
        X += Xinc;          
        Y += Yinc;        
     } 

	getch();
	closegraph();
} 

void Bresenham_Algo(int x1, int y1, int x2, int y2){

    int dx = abs(x2 - x1), dy = abs(y2 - y1), x = x1, y = x1, len;
    int e = (2*abs(dy))-dx;


    if(abs(dx) > abs(dy))
        len = abs(dx);
    else
        len = abs(dy);

	int gd = DETECT, gm;
	initgraph(&gd, &gm, NULL);

    for(int i = 0; i <= len; i++)
    {
        putpixel(x, y, 255);
        while(e >= 0)
        {
            y++;
            e = e - 2*dx;
        }

        x++;
        e = e + 2*dy;
    }

	getch();
	closegraph();
}

int main()
{

    int x1, y1, x2, y2, choice, while_counter = 1;

    while(while_counter)
    {
        cout<<"----MENU----"<<endl;
        cout<<"1. DDA Algorithm"<<endl<<"2. Bresenham's Algorithm"<<endl<<"3. Exit"<<endl;
        cout<<"Enter your choice :";
        cin>>choice;

        switch(choice)
        {
            case 1:
                cout<<"Enter x1 :";
                cin>>x1;
                cout<<"Enter y1 :";
                cin>>y1;
                cout<<"Enter x2 :";
                cin>>x2;
                cout<<"Enter y2 :";
                cin>>y2;

                DDA_Algo(x1, y1, x2, y2);
                break;

            case 2:
                cout<<"Enter x1 :";
                cin>>x1;
                cout<<"Enter y1 :";
                cin>>y1;
                cout<<"Enter x2 :";
                cin>>x2;
                cout<<"Enter y2 :";
                cin>>y2;

                Bresenham_Algo(x1, y1, x2, y2);
                break;

            default:
                while_counter = 0;
                break;
        }
    }

    return 0;
}
