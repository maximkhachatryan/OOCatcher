#pragma once
#include "point.h"

class line7
{
public:
	line7(double start_x, double start_y, double end_x, double end_y);
	line7(point& fresh_start, point& fresh_end);
	line7(const line7& that);
	~line7();

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
	point* start_ptr;
	double len, ang;
};

