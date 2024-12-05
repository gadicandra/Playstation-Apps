#ifndef PLAYSTATION_H
#define PLAYSTATION_H

#include "UI.h"

class Playstation: public userInterface{
    private:
        int balance;
        int rentTime;
        int pilihanKonfirmasi;
    public:
        int pemesanan();

        bool cekBalance(string us, int rent);

        void mengurangiBalance(string us, int rent);

        int lamaPenyewaan();

        void pesanan(int ps, int rent, int time, string us);

        void mengurangiKetersediaan(int ps);

        void mengaturKetersediaan();

        bool pengembalianPS(int ps, string us);

        bool cekKetersediaan(int ps);

        void riwayatPemesanan(string us);

        void ringkasanAdmin(int pilihan, int rent, int time);

        void konfirmasi(int ps, string us);

        void konfirmasiAdmin();

        void listPesanan();
};
#endif //PLAYSTATION_H