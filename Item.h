/**
 * Project Untitled
 */


#ifndef _ITEM_H
#define _ITEM_H

class Item {
public: 
    
void checkavailability();
    
void updatestatus();
    
void getitemname();
    
/**
 * @param value
 */
void setitemname(void value);
    
void getitemtype();
    
/**
 * @param value
 */
void setitemtype(void value);
    
void getavailability();
    
/**
 * @param value
 */
void setavailability(void value);
    
void getitemphoto();
    
/**
 * @param value
 */
void setitemphoto(void value);
private: 
    string itemname;
    string itemtype;
    boolean availability;
    image itemphoto;
};

#endif //_ITEM_H