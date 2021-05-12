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


double line0::end_x() const
{
	return x + len * cos(ang);
}

double line0::end_y() const
{
	return y + len * sin(ang);
}

int line0::int_end_x() const
{
	point end(end_x(), 0);
	return end.int_x();
}

int line0::int_end_y() const
{
	point end(0, end_y());
	return end.int_y();
}

double line0::length() const
{
	return len;
}

double line0::dir() const
{
	return ang;
}

void line0::rotate(double da)
{
	ang += da;
}