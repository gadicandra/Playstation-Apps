#ifndef PS4_H
#define PS4_H

#include "Playstation.h"

class Ps4 : public Playstation {
    private:
        int ps4RentalRate;
        int ps4Availability;
        int totalRentalRate;
        int rentTime;

    
    public:
        Ps4();

        Ps4(int rate);

        int getPS4RentalRate();

        int getPS4Availability();

        void displayPS4();

        int countRentalRatePS4(int rentTime);
};

#endif //PS4_H