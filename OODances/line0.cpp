#include "line0.h"

line0::line0(double start_x, double start_y, double end_x, double end_y) : point(start_x, start_y)
{
	point end(end_x, end_y);
	len = dist(end);
	ang = point::dir(end);
}

line0::line0(point &fresh_start, point &fresh_end) : point(fresh_start)
{
	len = dist(fresh_end);
	ang = point::dir(fresh_end);
}

double line0::get_x()
{
	return point::get_x();
}

double line0::get_y()
{
	return point::get_y();
}

int line0::int_x()
{
	return point::int_x();
}

int line0::int_y()
{
	return point::int_y();
}

void line0::shift(double dx, double dy)
{
	return point::shift(dx, dy);
}


double line0::end_x()
{
	return x + len * cos(ang);
}

double line0::end_y()
{
	return y + len * sin(ang);
}

int line0::int_end_x()
{
	point end(end_x(), 0);
	return end.int_x();
}

int line0::int_end_y()
{
	point end(0, end_y());
	return end.int_y();
}

double line0::length()
{
	return len;
}

double line0::dir()
{
	return ang;
}

void line0::rotate(double da)
{
	ang += da;
}