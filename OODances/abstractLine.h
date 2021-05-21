#pragma once
class abstractLine
{
public:
	virtual double get_x() = 0;
	virtual double get_y() = 0;
	virtual int int_x() = 0;
	virtual int int_y() = 0;
	virtual double end_x() = 0;
	virtual double end_y() = 0;
	virtual int int_end_x() = 0;
	virtual int int_end_y() = 0;

	virtual double length() = 0;
	virtual double dir() = 0;

	virtual void shift(double dx, double dy) = 0;
	virtual void rotate(double da) = 0;
};

