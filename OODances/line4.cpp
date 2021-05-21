#include "line4.h"

line4::line4(point &fresh_start, point &fresh_end)
{
	start_ptr = &fresh_start;
	end_ptr = &fresh_end;
}

double line4::get_x()
{
	return start_ptr->get_x();
}

double line4::get_y()
{
	return start_ptr->get_y();
}

int line4::int_x()
{
	return start_ptr->int_x();
}

int line4::int_y()
{
	return start_ptr->int_y();
}

double line4::end_x()
{
	return end_ptr->get_x();
}

double line4::end_y()
{
	return end_ptr->get_y();
}

int line4::int_end_x()
{
	return end_ptr->int_x();
}

int line4::int_end_y()
{
	return end_ptr->int_y();
}

double line4::length()
{
	return start_ptr->dist(*end_ptr);
}

double line4::dir()
{
	return start_ptr->dir(*end_ptr);
}

void line4::shift(double dx, double dy)
{
	start_ptr->shift(dx, dy);
	end_ptr->shift(dx, dy);
}

void line4::rotate(double da)
{
	double a = dir() + da, r = length();
	end_ptr->shift(start_ptr->get_x() - end_ptr->get_x() + r * cos(a), start_ptr->get_y() - end_ptr->get_y() + r * sin(a));
}
