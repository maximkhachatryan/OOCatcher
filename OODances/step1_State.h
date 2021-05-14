#pragma once
#include "walkerState.h"
class step1_State :
    public walkerState
{
    void handle_step(walker* walker) override;
};

