#include "Circle.h"

const Circle& Circle::operator =(const Circle& circle1){

	r = circle1.r;
	
	return *this;
}


bool Circle::operator ==(const Circle& circle1)const{

	if (r == circle1.r)
		return true;
	else
		return false;
}

bool Circle::operator !=(const Circle& circle1)const{

	if (r != circle1.r)
		return true;
	else
		return false;

}

const Circle& Circle::operator +=(const Circle& circle1){

	r = r + circle1.r;

	return *this;
}

const Circle& Circle::operator -=(const Circle& circle1){

	r = r - circle1.r;

	return *this;
}

Circle Circle::operator +(const Circle& circle1)const{

	Circle tmp;

	tmp.r = r + circle1.r;

	return tmp;

}

Circle Circle::operator -(const Circle& circle1)const{

	Circle tmp;

	tmp.r = r - circle1.r;

	return tmp;

}

float Circle::getArea() const{
	
	return (PI * (r*r));

}