#include "line02.h"

line02::line02(double start_x, double start_y, double end_x, double end_y)
{
	x = start_x;
	y = start_y;
	x1 = end_x;
	y1 = end_y;
}

line02::line02(point &fresh_start, point &fresh_end)
{
	x = fresh_start.get_x();
	y = fresh_start.get_y();
	x1 = fresh_end.get_x();
	y1 = fresh_end.get_y();
}

double line02::get_x()
{
	return x;
}

double line02::get_y()
{
	return y;
}

int line02::int_x()
{
	return x + (x > 0 ? 0.5 : -0.5);
}

int line02::int_y()
{
	return y + (y > 0 ? 0.5 : -0.5);
}

double line02::end_x()
{
	return x1;
}

double line02::end_y()
{
	return y1;
}

int line02::int_end_x()
{
	return x1 + (x1 > 0 ? 0.5 : -0.5);
}

int line02::int_end_y()
{
	return y1 + (y1 > 0 ? 0.5 : -0.5);
}

double line02::length()
{
	return sqrt((x - x1) * (x - x1) + (y - y1) * (y - y1));
}

double line02::dir()
{
	return atan2(y1 - y, x1 - x);
}

void line02::shift(double dx, double dy)
{
	x += dx;
	y += dy;
	x1 += dx;
	y1 += dy;
}

void line02::rotate(double da)
{
	double a = dir() + da, r = length();
	x1 = x + r * cos(a);
	y1 = y + r * sin(a);
}