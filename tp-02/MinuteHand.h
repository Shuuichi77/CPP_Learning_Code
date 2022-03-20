//
// Created by johnson on 20/03/2022.
//

#pragma once

class MinuteHand
{
public:
    int get_minutes() const { return _minutes; }

    void advance() { ++_minutes; }

private :
    int _minutes = 0;
};
