#include "line6.h"

line6::line6(point& fresh_start, point& fresh_end)
{
	start_ptr = &fresh_start;
	len = fresh_start.dist(fresh_end);
	ang = fresh_start.dir(fresh_end);
}

double line6::get_x() const
{
	return start_ptr->get_x();
}

double line6::get_y() const
{
	return start_ptr->get_y();
}

int line6::int_x() const
{
	return start_ptr->int_x();
}

int line6::int_y() const
{
	return start_ptr->int_y();
}

double line6::end_x() const
{
	return start_ptr->get_x() + len * cos(ang);
}

double line6::end_y() const
{
	return start_ptr->get_y() + len * sin(ang);
}

int line6::int_end_x() const
{
	point end(end_x(), 0);
	return end.int_x();
}

int line6::int_end_y() const
{
	point end(0, end_y());
	return end.int_y();
}

double line6::length() const
{
	return len;
}

double line6::dir() const
{
	return ang;
}

void line6::shift(double dx, double dy)
{
	start_ptr->shift(dx, dy);
}

void line6::rotate(double da)
{
	ang += da;
}
