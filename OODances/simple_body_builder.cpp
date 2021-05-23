#include "simple_body_builder.h"

simple_body_builder::simple_body_builder()
{
	Reset();
}

simple_body_builder::~simple_body_builder()
{
	delete simple_body;
}

void simple_body_builder::build_legs() const
{
	//this->simple_body->set_left_leg();
	//this->simple_body->set_right_leg();
}

void simple_body_builder::build_arms() const
{
	//this->simple_body->set_left_arm();
	//this->simple_body->set_rigft_arm();
}

void simple_body_builder::build_torso() const
{
	//this->simple_body->set_torso()
}

void simple_body_builder::Reset()
{
	this->simple_body = new body();
}

body* simple_body_builder::get_body()
{
	body* result = this->simple_body;
	this->Reset();
	return result;
}
