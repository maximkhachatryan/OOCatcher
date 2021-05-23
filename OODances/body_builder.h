#pragma once
class body_builder
{
public:
	virtual ~body_builder() {}
	virtual void build_legs() const = 0;
	virtual void build_arms() const = 0;
	virtual void build_torso() const = 0;
};

