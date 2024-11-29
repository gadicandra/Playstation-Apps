/**
 * Project Untitled
 */


#ifndef _PLAYSTATION 3_H
#define _PLAYSTATION 3_H

#include "Item.h"


class Playstation 3: public Item {
public: 
    
int calculatePS3rentalrate();
    
void getPS3rentalrate();
    
/**
 * @param value
 */
void setPS3rentalrate(void value);
private: 
    int PS3rentalrate;
};

#endif //_PLAYSTATION 3_H