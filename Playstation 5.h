/**
 * Project Untitled
 */


#ifndef _PLAYSTATION 5_H
#define _PLAYSTATION 5_H

#include "Item.h"


class Playstation 5: public Item {
public: 
    
int calculatePS5rentalrate();
    
void getPS5rentalrate();
    
/**
 * @param value
 */
void setPS5rentalrate(void value);
private: 
    int PS5rentalrate;
};

#endif //_PLAYSTATION 5_H