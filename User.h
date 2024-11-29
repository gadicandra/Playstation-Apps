/**
 * Project Untitled
 */


#ifndef _USER_H
#define _USER_H

class User {
public: 
    
void savehistory();
    
void rentitem();
    
void returnitem();
    
void loginuser();
    
void signup();
    
void logoutuser();
    
void getuserid();
    
/**
 * @param value
 */
void setuserid(void value);
    
void getusername();
    
/**
 * @param value
 */
void setusername(void value);
    
void getusercontact();
    
/**
 * @param value
 */
void setusercontact(void value);
private: 
    image userid;
    string username;
    string usercontact;
};

#endif //_USER_H