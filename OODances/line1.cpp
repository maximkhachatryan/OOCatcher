#include "line1.h"

line1::line1(double start_x, double start_y, double end_x, double end_y) : start(start_x, start_y)
{
	point end(end_x, end_y);
	len = start.dist(end);
	ang = start.dir(end);
}

line1::line1(point &fresh_start, point &fresh_end) : start(fresh_start)
{
	len = fresh_start.dist(fresh_end);
	ang = fresh_start.dir(fresh_end);
}

double line1::get_x()
{
	return start.get_x();
}

double line1::get_y()
{
	return start.get_y();
}

int line1::int_x()
{
	return start.int_x();
}

int line1::int_y()
{
	return start.int_y();
}

double line1::end_x()
{
	return start.get_x() + len * cos(ang);
}

double line1::end_y()
{
	return start.get_y() + len * sin(ang);
}

int line1::int_end_x()
{
	point end(end_x(), 0);
	return end.int_x();
}

int line1::int_end_y()
{
	point end(0, end_y());
	return end.int_y();
}

double line1::length()
{
	return len;
}

double line1::dir()
{
	return ang;
}

void line1::shift(double dx, double dy)
{
	start.shift(dx, dy);
}

void line1::rotate(double da)
{
	ang += da;
}