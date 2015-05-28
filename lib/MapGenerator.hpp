#ifndef _MAPGENERATOR_HPP
#define _MAPGENERATOR_HPP

#include <vector>

#include "Area.hpp"

namespace dgen{

class MapGenerator{
private:


public:
    std::vector<Area*> areas;

    MapGenerator();

};

}

#endif
