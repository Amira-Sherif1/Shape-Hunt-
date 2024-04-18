//Header file for Basic shapes in the game
#pragma once
#include "shape.h"

////////////////////////////////////////////////////  class Rect  ///////////////////////////////////////
//Rectanle class
/*							wdth
					---------------------
					|					|
			hght    |		 x			|     x is the reference point of the rectangle
					|					|
					--------------------
*/


class Rect:public shape
{
	int hght, wdth;	//height and width of the recangle
public:
	Rect(game* r_pGame, point ref, int r_hght, int r_wdth);
	void SetHght(int h);
	void Setwdht(int w);
	int GetHght() const;
	int GetWdht() const;
	virtual void draw() const;
};


////////////////////////////////////////////////////  class circle  ///////////////////////////////////////
//Reference point of the circle is its center
class circle :public shape
{
	//Add data memebrs for class circle
	int rad;
public:	
	circle(game* r_pGame, point ref, int r);	//add more parameters for the constructor if needed
	void SetRad(int c);
	int GetRad() const;
	virtual void draw() const;
};


// refrence point for the triangle at p1 the left down point
class Triangle : public shape
{
	int length,hight ;
	
public:
	Triangle(game* r_pgame, int len,point ref);
	void SetLenght(int h);
	void SetHight(int w);
	int GetHight() const;
	int Getlenght() const;
	virtual void draw() const;

};
