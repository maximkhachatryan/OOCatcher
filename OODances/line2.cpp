#include "line2.h"

line2::line2(double start_x, double start_y, double end_x, double end_y) : start(start_x, start_y), end(end_x, end_y)
{

}

line2::line2(point &fresh_start, point &fresh_end) : start(fresh_start), end(fresh_end)
{

}

double line2::get_x() const
{
	return start.get_x();
}

double line2::get_y() const
{
	return start.get_y();
}

int line2::int_x() const
{
	return start.int_x();
}

int line2::int_y() const
{
	return start.int_y();
}

double line2::end_x() const
{
	return end.get_x();
}

double line2::end_y() const
{
	return end.get_y();
}

int line2::int_end_x() const
{
	return end.int_x();
}

int line2::int_end_y() const
{
	return end.int_y();
}

double line2::length() const
{
	return start.dist(end);
}

double line2::dir() const
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