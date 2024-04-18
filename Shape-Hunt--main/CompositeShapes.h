#pragma once
#include "Basicshapes.h"
#include "game.h"
#include "BasicShapes.h"


////////////////////////////////////////////////////  class Sign  ///////////////////////////////////////
//This class reprsents the composite shape "sign"
//The sign is composed of 2 Recatngles
/*				

					 ------------------
					|				   |
					|		 x		   |     x is the reference point of the Sign shape
					|			       |
					 ------------------
						   |   |
						   |   |
						   | . |
						   |   |
						   |   |
							---
*/

//Note: sign reference point is the center point of the top rectangle
class Sign :public shape
{
	Rect* base;
	Rect* top;
public:
	Sign(game* r_pGame, point ref);
	virtual void draw() const;


};
class Tree : public shape {
	Rect* root;
	Triangle* T1;
	Triangle* T2;
	Triangle* T3;
	Triangle* T4;
public:
	Tree(game* r_pGame, point ref);
	virtual void draw() const;

};
class Boat :public shape {
	Rect* rect1;
	Rect* rect2;
	Triangle* T1;
	Triangle* T2;
	Triangle* T3;

public:
	Boat(game* r_pgame, point ref);
	virtual void draw() const;
};

class Butterfly : public shape {
	circle* cir1;
	circle* cir2;
	circle* cir3;
	circle* cir4;
	circle* cir5;
	Rect* rect;

public:
	Butterfly(game* r_pgame, point ref);
	virtual void draw()const;
};

class arrow :public shape {
	Rect* rect1;
	Triangle* T1;
	int distance;
	int size;

public:
	arrow(game* r_pgame, point ref, int size=50);
	void SetSize(int s);
	int GetSize() const;
	virtual void draw() const;
};