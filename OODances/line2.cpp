#include "line2.h"

line2::line2(double start_x, double start_y, double end_x, double end_y) : start(start_x, start_y), end(end_x, end_y)
{

}

line2::line2(point &fresh_start, point &fresh_end) : start(fresh_start), end(fresh_end)
{

}

double line2::get_x()
{
	return start.get_x();
}

double line2::get_y()
{
	return start.get_y();
}

int line2::int_x()
{
	return start.int_x();
}

int line2::int_y()
{
	return start.int_y();
}

double line2::end_x()
{
	return end.get_x();
}

double line2::end_y()
{
	return end.get_y();
}

int line2::int_end_x()
{
	return end.int_x();
}

int line2::int_end_y()
{
	return end.int_y();
}

double line2::length()
{
	return start.dist(end);
}

double line2::dir()
{
	return start.dir(end);
}

void line2::shift(double dx, double dy)
{
	start.shift(dx, dy);
	end.shift(dx, dy);
}

void line2::rotate(double da)
{
	double a = dir() + da, r = length();
	end.shift(start.get_x() - end.get_x() + r * cos(a), start.get_y() - end.get_y() + r * sin(a));
}