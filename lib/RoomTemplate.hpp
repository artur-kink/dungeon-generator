#ifndef _ROOMTEMPLATE_HPP
#define _ROOMTEMPLATE_HPP

#include "AreaTemplate.hpp"

namespace dgen{

/**
 * Basic square room template.
 */
class RoomTemplate:public AreaTemplate{
public:

    virtual bool isPointInArea(int x, int y);

};

}

#endif
