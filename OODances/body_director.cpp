#include "body_director.h"

void body_director::set_builder(body_builder* builder)
{
	this->builder = builder;
}

void body_director::create_full_body()
{
	this->builder->build_legs();
	this->builder->build_torso();
	this->builder->build_arms();
}

void body_director::create_body_wthout_arms()
{
	this->builder->build_legs();
	this->builder->build_torso();
}
