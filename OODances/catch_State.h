#pragma once
#include "walkerState.h"
class catch_State :
    public walkerState
{
private:
    walkerState* _nextStep;
public:
    catch_State(walkerState* nextStep);
    void handle_step(walker* walker) override;
};

