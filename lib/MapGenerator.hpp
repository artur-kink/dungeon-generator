#ifndef _MAPGENERATOR_HPP
#define _MAPGENERATOR_HPP

#include <vector>
#include <stdlib.h>
#include <time.h>

#include "Area.hpp"

namespace dgen{

class MapGenerator{
private:

    /** Random seed value. */
    int seed;
    /** Is seed value provided. */
    bool isSeeded;

public:
    /** List of all map areas. */
    std::vector<Area*> areas;

    MapGenerator();

    void clearSeed();
    void setSeed(int seed);
    int getSeed();

    bool generate();
};

}

#endif
