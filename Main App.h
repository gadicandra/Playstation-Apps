/**
 * Project Untitled
 */


#ifndef _MAIN APP_H
#define _MAIN APP_H

class Main App {
public: 
    
void displayinventory();
    
void processrental();
    
float calculaterentalfee();
    
void payrentalfee();
    
void processreturn();
    
float calculatefine();
    
void payfine();
    
void getrentaldate();
    
/**
 * @param value
 */
void setrentaldate(void value);
    
void getduedate();
    
/**
 * @param value
 */
void setduedate(void value);
    
void gettotalitem();
    
/**
 * @param value
 */
void settotalitem(void value);
    
void getrentalfee();
    
/**
 * @param value
 */
void setrentalfee(void value);
    
void getfine();
    
/**
 * @param value
 */
void setfine(void value);
private: 
    string rentaldate;
    string duedate;
    int totalitem;
    float rentallfee;
    float fine;
};

#endif //_MAIN APP_H