#include "line01.h"

line01::line01(double start_x, double start_y, double end_x, double end_y)
{
	point start(start_x, start_y);
	point end(end_x, end_y);

	x = start_x;
	y = start_y;
	len = start.dist(end);
	ang = start.dir(end);
}

line01::line01(point &fresh_start, point &fresh_end)
{
	x = fresh_start.get_x();
	y = fresh_start.get_y();
	len = fresh_start.dist(fresh_end);
	ang = fresh_start.dir(fresh_end);
}

double line01::get_x()
{
	return x;
}

double line01::get_y()
{
	return y;
}

int line01::int_x()
{
	return x + (x > 0 ? 0.5 : -0.5);
}

int line01::int_y()
{
	return y + (y > 0 ? 0.5 : -0.5);
}

double line01::end_x()
{
	return x + len * cos(ang);
}

double line01::end_y()
{
	return y + len * sin(ang);
}

int line01::int_end_x()
{
	double x1 = end_x();
	return x1 + (x1 > 0 ? 0.5 : -0.5);
}

int line01::int_end_y()
{
	double y1 = end_y();
	return y1 + (y1 > 0 ? 0.5 : -0.5);
}

double line01::length()
{
	return len;
}

double line01::dir()
{
	return ang;
}

void line01::shift(double dx, double dy)
{
	x += dx;
	y += dy;
}

void line01::rotate(double da)
{
	ang += da;
}
