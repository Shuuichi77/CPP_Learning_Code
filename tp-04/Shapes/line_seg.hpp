#pragma once

#include "line.hpp"

class LineSegment : public Line
{
public:
    using Line::Line;

    PointContainer intersect(const Shape& other) const override
    {
        return other.intersect((*this));
    }

    PointContainer intersect(const Line& ln) const override
    {
        return ln.intersect((*this));
    }

    ~LineSegment() = default;
};
