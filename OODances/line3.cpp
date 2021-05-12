#include "line3.h"

line3::line3(double start_x, double start_y, double end_x, double end_y)
{
	ends[0].shift(start_x, start_y);
	ends[1].shift(end_x, end_y);
}

line3::line3(point &fresh_start, point &fresh_end)
{
	ends[0].shift(fresh_start.get_x(), fresh_start.get_y());
	ends[1].shift(fresh_end.get_x(), fresh_end.get_y());
}


double line3::get_x() const
{
	return ends[0].get_x();
}

double line3::get_y() const
{
	return ends[0].get_y();
}

int line3::int_x() const
{
	return ends[0].int_x();
}

int line3::int_y() const
{
	return ends[0].int_y();
}

double line3::end_x() const
{
	return ends[1].get_x();
}

double line3::end_y() const
{
	return ends[1].get_y();
}

int line3::int_end_x() const
{
	return ends[1].int_x();
}

int line3::int_end_y() const
{
	return ends[1].int_y();
}

double line3::length() const
{
	return ends[0].dist(ends[1]);
}

double line3::dir() const
{
	return ends[0].dir(ends[1]);
}

void line3::shift(double dx, double dy)
{
	for (point p : ends)
		p.shift(dx, dy);
}

void line3::rotate(double da)
{
	double a = dir() + da, r = length();
	ends[1].shift(ends[0].get_x() - ends[1].get_x() + r * cos(a), ends[0].get_y() - ends[1].get_y() + r * sin(a));
}