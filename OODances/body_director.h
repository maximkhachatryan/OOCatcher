#pragma once
#include "body_builder.h"
class body_director
{
private:
	body_builder* builder;

public:
	void set_builder(body_builder* builder);
	void create_full_body();
	void create_body_wthout_arms();

};

