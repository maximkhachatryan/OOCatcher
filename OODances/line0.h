#pragma once
#include "point.h"
#include "abstractLine.h"

//Implemented pattern Adapter here (using multiple inheritance)
class line0 : public abstractLine, public point
{
public:
	line0(double start_x, double start_y, double end_x, double end_y);
	line0(point &fresh_start, point &fresh_end);

	double get_x() override;
	double get_y() override;
	int int_x() override;
	int int_y() override;

	void shift(double dx, double dy) override;

	double end_x() override;
	double end_y() override;
	int int_end_x() override;
	int int_end_y() override;

	double length() override;
	double dir() override;

	void rotate(double da) override;

private:
	double len, ang;
};

