#include<iostream>
#include<math.h>
using namespace std;

void DDA_Algo(int x1, int y1, int x2, int y2){

    float dx = x2-x1, dy = y2 - y1;
    int len;

    float x = x1 + 0.5*(dx/abs((int)dx)), y = y1 + 0.5*(dy/abs((int)dy));

    if(abs((int)dx) > abs((int)dy))
        len = abs((int)dx);
    else
        len = abs((int)dy);

    dx = (x2-x1)/(float)len, dy = (y2-y1)/(float)len;
    cout<<dx<<" "<<dy<<endl<<endl<<endl;

    for(int i = 0; i <= len; i++)
    {
        //putpixel(floor(x), floor(y));
        cout<<floor(x)<<" "<<floor(y)<<endl;
        x+=dx;
        y+=dy;
    }
}

void Bresenham_Algo(int x1, int y1, int x2, int y2){

    int dx = abs(x2 - x1), dy = abs(y2 - y1), x = x1, y = x1, len;
    int e = (2*abs(dy))-dx;


    if(abs(dx) > abs(dy))
        len = abs(dx);
    else
        len = abs(dy);

    for(int i = 0; i <= len; i++)
    {
        cout<<x<<" "<<y<<endl;
        while(e >= 0)
        {
            y++;
            e = e - 2*dx;
        }

        x++;
        e = e + 2*dy;
    }
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
                cout<<"Enter x1 :";
                cin>>y1;
                cout<<"Enter x1 :";
                cin>>x2;
                cout<<"Enter x1 :";
                cin>>y2;

                DDA_Algo(x1, y1, x2, y2);
                break;

            case 2:
                cout<<"Enter x1 :";
                cin>>x1;
                cout<<"Enter x1 :";
                cin>>y1;
                cout<<"Enter x1 :";
                cin>>x2;
                cout<<"Enter x1 :";
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
