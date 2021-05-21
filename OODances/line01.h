#pragma once
#include "point.h"
#include "abstractLine.h"

class line01 : public abstractLine
{
public:
	line01(double start_x, double start_y, double end_x, double end_y);
	line01(point &fresh_start, point &fresh_end);

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
	double x, y, len, ang;
};