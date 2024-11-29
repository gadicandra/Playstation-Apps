/**
 * Project Untitled
 */

#ifndef _ITEM_H
#define _ITEM_H

#include <string>
using namespace std;

class Item {
public: 
    // Method untuk mengecek ketersediaan item
    void checkavailability();
    
    // Method untuk memperbarui status item
    void updatestatus();
    
    // Getter untuk nama item
    string getitemname();
    
    // Setter untuk nama item
    void setitemname(const string& value);
    
    // Getter untuk tipe item
    string getitemtype();
    
    // Setter untuk tipe item
    void setitemtype(const string& value);
    
    // Getter untuk ketersediaan item
    bool getavailability();
    
    // Setter untuk ketersediaan item
    void setavailability(bool value);
    
    // Getter untuk foto item
    string getitemphoto();
    
    // Setter untuk foto item
    void setitemphoto(const string& value);
    
private: 
    string itemname;       // Nama item
    string itemtype;       // Tipe item
    bool availability;     // Status ketersediaan
    string itemphoto;      // Path atau lokasi foto item
};

#endif //_ITEM_H
