#ifndef _AREA_HPP
#define _AREA_HPP

#include <vector>

#include "Point.hpp"

namespace dgen{

class Area;

/**
 * A connection point between two areas. 
 */
struct Connection{
public:
    /** First area being connected. */
    Area* firstArea;
    /** Point of connection for the first area. */
    Point firstPoint;
 
    /** Second area being connected. */
    Area* secondArea;
    /** Point of connection for the second area. */
    Point secondPoint;
};

/**
 * A base implementation for an area on the map.
 */
class Area{
private:

public:
    /** List of connections this Area has. */
    std::vector<Connection*> connections;

    /** Position of this Area. */
    Point position;
};

}

#endif
