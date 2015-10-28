#include <iostream>
#include <stdio.h>

template<class TYPE>
class Point2D {

private:

	TYPE x, y;

public:

	Point2D(){};

	Point2D(Point2D& point){

		x = point.x;
		y = point.y;

	};

	Point2D(TYPE _x, TYPE _y){
	
		x = _x;
		y = _y;

	};

	virtual ~Point2D(){};
	
	Point2D operator -(const Point2D& p)const{

		Point2D tmp;

		tmp.x = x - point1.x;
		tmp.y = y - point1.y;

		return tmp;
	};

	Point2D operator +(const Point2D& p)const{ 
		
		Point2D tmp;

		tmp.x = x + point1.x;
		tmp.y = y + point1.y;

		return tmp;

	};

	Point2D operator +( TYPE a)const{ 
		
		Point2D tmp;

		tmp.x = x + a;
		tmp.y = y + a;

		return tmp;
	};

	Point2D operator -(TYPE a)const{

		Point2D tmp;

		tmp.x = x - a;
		tmp.y = y - a;

		return tmp;
	};

	const Point2D& operator =(const Point2D& p){ 
		
		x = p.x;
		y = p.y;

		return *this;

	};

	bool operator !=(const Point2D& p)const{

		if (x != p.x || y != p.y)
			return true;
		else
			return false;
	};

	bool operator ==(const Point2D& p)const{
		
		if (x == p.x && y == p.y)
			return true;
		else
			return false;
	};

	const Point2D& operator +=(const Point2D& p){ 

		x = x + p.x;
		y = y + p.y;

		return *this;
	};

	const Point2D& operator -=(const Point2D& p){

		x = x - p.x;
		y = y - p.y;

		return *this;

	};

	bool isZero()const{

		if (x && y == 0)
			return true;

		else
			return false;
	};

	void setZero(){

		x = 0;
		y = 0;

	};

	void Negate(){

		x = -x;
		y = -y;

	};

	int GetX()const { return x; };
	int GetY()const { return y; };

	void SetX(int a){ x = a; }
	void SetY(int a){ y = a; }

	
	void SwapTemp(Point2D &a, Point2D &b){

		Point2D temp;
		temp = a;
		a = b;
		b = temp;

	};

};
	
