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
   
    //Setup rand 
    if(!isSeeded)
        seed = time(NULL);
    srand(seed);

    clean();

    //Attempt map generation
    if(isSeeded){
        numAttempts = 1;
        return generateMap();
    }else{
        for(numAttempts = 0; numAttempts < maxAttempts; numAttempts++){
            if(generateMap())
                return true;
        } 
    }

    return false;
}

/**
 * Map generating logic.
 * @return true if map generated, false otherwise.
 */
bool MapGenerator::generateMap(){
    hasGeneratedMap = false;
    
    return hasGeneratedMap;  
}

/**
 * Cleans up any generated map data.
 */
void MapGenerator::clean(){
    hasGeneratedMap = false;
    for(int i = 0; i < areas.size(); i++){
        delete areas[i];
    }
    areas.clear();
}

MapGenerator::~MapGenerator(){
    clean();
}

}
