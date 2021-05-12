#pragma once
#include "point.h"

class line0 : public point
{
public:
	line0(double start_x, double start_y, double end_x, double end_y);
	line0(point &fresh_start, point &fresh_end);

	double end_x() const;
	double end_y() const;
	int int_end_x() const;
	int int_end_y() const;

	double length() const;
	double dir() const;

	void rotate(double da);

private:
	double len, ang;
};

