//
// Created by johnson on 20/03/2022.
//

#pragma once

#include <ostream>
#include "SecondHand.h"

class Clock
{
    friend std::ostream &operator<<(std::ostream &stream, const Clock &clock)
    {
        return stream << clock._min_hand.get_minutes() << " min " << clock._sec_hand.get_seconds() << " sec";
    }

public:
    void tick()
    {
        _sec_hand.advance();

        for (auto it = _events.begin(); it != _events.end();)
        {
            if (it->notify_time(_min_hand.get_minutes(), _sec_hand.get_seconds()))
            {
                it = _events.erase(it);
            }

            else
            {
                ++it;
            }
        }
    }

    void add_event(const Event &event)
    {
        _events.push_back(event);
    }

private:
    MinuteHand         _min_hand;
    SecondHand         _sec_hand { _min_hand };
    std::vector<Event> _events;
};