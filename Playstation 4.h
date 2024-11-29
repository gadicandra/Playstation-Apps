/**
 * Project Untitled
 */


#ifndef _PLAYSTATION 4_H
#define _PLAYSTATION 4_H

#include "Item.h"


class Playstation 4: public Item {
public: 
    
int calculatePS4rentalrate();
    
void getPS4rentalrate();
    
/**
 * @param value
 */
void setPS4rentalrate(void value);
private: 
    int PS4rentalate;
};

#endif //_PLAYSTATION 4_H