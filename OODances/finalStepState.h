#pragma once
#include "walkerState.h"
class finalStepState :
    public walkerState
{
    void handle_substep1() override;
    void handle_substep2() override;
    void handle_substep3() override;
    void handle_substep4() override;
    void handle_substep5() override;
};

