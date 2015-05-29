#include <iostream>

#include "MapGenerator.hpp"

int main(int argc, char** argv){

    std::cout << "Generating example map\n"; 
    
    dgen::MapGenerator mapGen;

    if(mapGen.generate()){
        std::cout << "Created map\n";
    }else{
        std::cout << "Failed to create map\n";
    }

    return 0;
}
