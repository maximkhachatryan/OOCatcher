#pragma once
#include "point.h"
#include "abstractLine.h"

class line6 : public abstractLine
{
public:
	line6(point& fresh_start, point& fresh_end);

	double get_x() override;
	double get_y() override;
	int int_x() override;
	int int_y() override;
	double end_x() override;
	double end_y() override;
	int int_end_x() override;
	int int_end_y() override;

	double length() override;
	double dir() override;

	void shift(double dx, double dy) override;
	void rotate(double da) override;

private:
	point* start_ptr;
	double len, ang;
};
