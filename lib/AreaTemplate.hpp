#ifndef _AREATEMPLATE_HPP
#define _AREATEMPLATE_HPP

#include "Point.hpp"

namespace dgen{

/**
 * A base class for an area layout template.
 */
class AreaTemplate{
public:

    /** Check if x,y point is in this area. */
    virtual bool isPointInArea(int x, int y) = 0;
    
    /** Wrapper for isPointInArea(int, int) */
    bool isPointInArea(Point& point);
};

}

#endif
