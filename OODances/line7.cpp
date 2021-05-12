#include "line7.h"

line7::line7(double start_x, double start_y, double end_x, double end_y)
{
	point end(end_x, end_y);
	start_ptr = new point(start_x, start_y);
	len = start_ptr->dist(end);
	ang = start_ptr->dir(end);
}

line7::line7(point& fresh_start, point& fresh_end)
{
	start_ptr = new point(fresh_start);
	len = fresh_start.dist(fresh_end);
	ang = fresh_start.dir(fresh_end);
}

line7::line7(const line7& that)
{
	start_ptr = new point(*that.start_ptr);
	len = that.len;
	ang = that.ang;
}

line7::~line7()
{
	delete start_ptr;
	start_ptr = nullptr;
}

double line7::get_x() const
{
	return start_ptr->get_x();
}

double line7::get_y() const
{
	return start_ptr->get_y();
}

int line7::int_x() const
{
	return start_ptr->int_x();
}

int line7::int_y() const
{
	return start_ptr->int_y();
}

double line7::end_x() const
{
	return start_ptr->get_x() + len * cos(ang);
}

double line7::end_y() const
{
	return start_ptr->get_y() + len * sin(ang);
}

int line7::int_end_x() const
{
	point end(end_x(), 0);
	return end.int_x();
}

int line7::int_end_y() const
{
	point end(0, end_y());
	return end.int_y();
}

double line7::length() const
{
	return len;
}

double line7::dir() const
{
	return ang;
}

void line7::shift(double dx, double dy)
{
	start_ptr->shift(dx, dy);
}

void line7::rotate(double da)
{
	ang += da;
}
