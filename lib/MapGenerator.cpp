#include "MapGenerator.hpp"

namespace dgen{

MapGenerator::MapGenerator(){
    isSeeded = false;
}

/**
 * Remove set seed value.
 */
void MapGenerator::clearSeed(){
    isSeeded = false;
}

/**
 * Set seed value to use.
 */
void MapGenerator::setSeed(int s){
    isSeeded = true;
    seed = s;
}

/**
 * Get seed value used to generate map.
 */
int MapGenerator::getSeed(){
    return seed;
}

/**
 * Generate map.
 * @return true if map generated, false otherwise.
 */
bool MapGenerator::generate(){
    if(!isSeeded){
        seed = 0;
    }else{
        seed = time(NULL);
    }
    srand(seed);

    return false;
}

}
