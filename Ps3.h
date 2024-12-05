#ifndef PS3_H
#define PS3_H

#include "Playstation.h"

class Ps3 : public Playstation {
    private:
        int ps3RentalRate;
        int ps3Availability;
        int totalRentalRate;
        int rentTime;
    
    public:
        Ps3();

        Ps3(int rate);

        int getPS3RentalRate();

        int getPS3Availability();

        void displayPS3();

        int countRentalRatePS3(int rentTime);
        
};

#endif //PS3_H