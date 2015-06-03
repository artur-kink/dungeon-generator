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

    bool generateMap();

public:

    /** Is there a generated map. */
    bool hasGeneratedMap;

    /** List of all map areas. */
    std::vector<Area*> areas;

    /** Number of rooms to generate. */
    int roomsToGenerate;

    /** Maximum manhattan distance between rooms. */
    int maxRoomDistance;

    /** Minimum manhattan distance between rooms. */
    int minRoomDistance;

    /** Maximum width of map. Size of 0 means no limit. */
    int maxMapWidth;

    /** Maximum height of map. Size of 0 means no limit. */
    int maxMapHeight;

    /**
     * Maximum number of attempts at generating before failing. 
     * If generator isSeeded only 1 attempt is made.
     **/
    unsigned int maxAttempts;

    /** Number of attempts made during generation. */
    unsigned int numAttempts;

    MapGenerator();

    void clearSeed();
    void setSeed(int seed);
    int getSeed();

    bool generate();

    void clean();

    ~MapGenerator();
};

}

#endif
