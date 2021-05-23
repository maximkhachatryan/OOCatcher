#pragma once
#include "body_builder.h"
#include "body.h"

class simple_body_builder :
    public body_builder
{
private:
    body* simple_body;

public:
    simple_body_builder();
    ~simple_body_builder();

    void build_legs() const override;

    void build_arms() const override;

    void build_torso() const override;

    void Reset();

    body* get_body();
};

