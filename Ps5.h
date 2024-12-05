#ifndef PS5_H
#define PS5_H

#include "Playstation.h"

class Ps5 : public Playstation {
    private:
        int ps5RentalRate;
        int ps5Availability;
        int totalRentalRate;
        int rentTime;

    
    public:
        Ps5();

        Ps5(int rate);

        int getPS5RentalRate();

        int getPS5Availability();

        void displayPS5();

        int countRentalRatePS5(int rentTime);
};

#endif //PS5_H