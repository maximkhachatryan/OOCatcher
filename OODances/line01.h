#pragma once
#include "point.h"

class line01
{
public:
	line01(double start_x, double start_y, double end_x, double end_y);
	line01(point &fresh_start, point &fresh_end);

	double get_x() const;
	double get_y() const;
	int int_x() const;
	int int_y() const;
	double end_x() const;
	double end_y() const;
	int int_end_x() const;
	int int_end_y() const;

	double length() const;
	double dir() const;

	void shift(double dx, double dy);
	void rotate(double da);

private:
	double x, y, len, ang;
};