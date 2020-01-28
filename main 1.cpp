// project is on this beacuse 
// can't install isula studio here


// Rectangle simulator

#include <iostream>
#include <graphics.h>
using namespace std;


//Constants

#define MAXX 1500
#define MAXY 800
#define DIFF 50
#define BOUND_COLOR GREEN

// class definations

class Vector2D
{
	public:
		double x,y;
		Vector2D()	// constructor
		{
			x = y = 0.0 ;
		}
		Vector2D(double a,double b ) : x( a ), y( b ) // constructor 2
		{			
		}
		setVal(double x,double y)
		{
			x = x;
			y = y;
		}
		
};


class Force : public Vector2D
{
	public:
		Vector2D pointOfAction;
	
};

class Rect
{
	public:
		Vector2D p[4] ;
		Vector2D linV;
		Vector2D linA;
		Vector2D angV;
		Vector2D angA;
		Vector2D com;
		double mass;
		
		Rect(Vector2D &points) // constructor
		{
			
		}
		
};

void drawBoundary()
{
	setfillstyle(SOLID_FILL,BOUND_COLOR);
	bar(0, 0, MAXX, DIFF) ; 
	bar(0, MAXY-DIFF, MAXX, MAXY);
	bar(0, DIFF, DIFF, MAXY-DIFF);
	bar(MAXX-DIFF, DIFF, MAXX, MAXY-DIFF) ;	
}

int main()
{
	//for easy initialisation
	short int halfL;
	short int halfB;
	Vector2D com(200,300);

	Vector2D pt[4];
	pt[0].setVal(com.x - halfL, );
	 

	Rect abcd(&pt) ;

	
	initwindow(MAXX, MAXY);
	
	drawBoundary();
	delay(2000);
	
	
	
	
	return 0;
}
