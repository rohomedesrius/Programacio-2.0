#include <iostream>


#define PI 3.14159265359

class Circle {

private:

	int r;

public: 

	Circle(){}

	const Circle& operator = (const Circle& circle1);

	bool operator == (const Circle& circle1)const;
	bool operator != (const Circle& circle1)const;

	const Circle& operator += (const Circle& circle1);
	const Circle& operator -= (const Circle& circle1);

	Circle operator + (const Circle& circle1)const;
	Circle operator - (const Circle& circle1)const;

	float getArea() const;

	~Circle() {}

};