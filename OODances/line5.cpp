#include "line5.h"

line5::line5(double start_x, double start_y, double end_x, double end_y)
{
	start_ptr = new point(start_x, start_y);
	end_ptr = new point(end_x, end_y);
}

line5::line5(point& fresh_start, point& fresh_end)
{
	start_ptr = new point(fresh_start);
	end_ptr = new point(fresh_end);
}

line5::line5(const line5 &that)
{
	start_ptr = new point(that.get_x(), that.get_y());
	end_ptr = new point(that.end_x(), that.end_y());
}

line5::~line5()
{
	delete start_ptr;
	start_ptr = nullptr;

	delete end_ptr;
	end_ptr = nullptr;
}

double line5::get_x() const
{
	return start_ptr->get_x();
}

double line5::get_y() const
{
	return start_ptr->get_y();
}

int line5::int_x() const
{
	return start_ptr->int_x();
}

int line5::int_y() const
{
	return start_ptr->int_y();
}

double line5::end_x() const
{
	return end_ptr->get_x();
}

double line5::end_y() const
{
	return end_ptr->get_y();
}

int line5::int_end_x() const
{
	return end_ptr->int_x();
}

int line5::int_end_y() const
{
	return end_ptr->int_y();
}

double line5::length() const
{
	return start_ptr->dist(*end_ptr);
}

double line5::dir() const
{
	return start_ptr->dir(*end_ptr);
}

void line5::shift(double dx, double dy)
{
	start_ptr->shift(dx, dy);
	end_ptr->shift(dx, dy);
}

void line5::rotate(double da)
{
	double a = dir() + da, r = length();
	end_ptr->shift(start_ptr->get_x() - end_ptr->get_x() + r * cos(a), start_ptr->get_y() - end_ptr->get_y() + r * sin(a));
}