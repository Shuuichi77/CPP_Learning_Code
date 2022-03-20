//
// Created by johnson on 20/03/2022.
//

#pragma once

#include "MinuteHand.h"

class SecondHand
{
public:
    explicit SecondHand(MinuteHand &min_hand)
            : _min_hand { min_hand } {}

    int get_seconds() const { return _seconds; }

    void advance()
    {
        ++_seconds;
        if (_seconds >= 60)
        {
            _seconds = 0;
            _min_hand.advance();
        }
    }

private:
    int        _seconds = 0;
    MinuteHand &_min_hand;
};