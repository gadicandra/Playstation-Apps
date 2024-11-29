/**
 * Project Untitled
 */


#ifndef _OWNER_H
#define _OWNER_H

class Owner {
public: 
    
void manageinventory();
    
void generatereport();
    
void loginowner();
    
void logoutowner();
    
void getownername();
    
/**
 * @param value
 */
void setownername(void value);
    
void getownercontact();
    
/**
 * @param value
 */
void setownercontact(void value);
private: 
    string ownername;
    string ownercontact;
};

#endif //_OWNER_H