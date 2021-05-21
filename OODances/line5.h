#pragma once
#include "point.h"
#include "abstractLine.h"

class line5 : public abstractLine
{
public:
	line5(double start_x, double start_y, double end_x, double end_y);
	line5(point& fresh_start, point& fresh_end);
	line5(const line5 &that);
	~line5();

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
	point* start_ptr, * end_ptr;
};

