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
        //Fungsi untuk memilih playstation yang akan dipesan dan mengembalikan pilihannya

        bool cekBalance(string us, int rent);
        //Fungsi untuk mengecek apakah balance cukup untuk menyewa playstation

        void mengurangiBalance(string us, int rent);
        //Fungsi untuk mengurangi balance jika mengonfirmasi akan menyewa playstation

        int lamaPenyewaan();
        //Fungsi untuk menginput berapa lama penyewaan dan mengembalikan nilainya

        void pesanan(int ps, int rent, int time, string us);
        //Fungsi untuk mencetak pesanan di history.txt dan listPesanan.txt

        void mengurangiKetersediaan(int ps);
        //Fungsi untuk mengurangi ketersediaan ps setelah mengonfirmasi penyewaan

        void mengaturKetersediaan();
        //Fungsi untuk mengatur ketersediaan ps yang dilakukan oleh Admin

        bool pengembalianPS(int ps, string us);
        //Fungsi untuk mengecek apakah terdapat ps(3/4/5) yang belum dikembalikan

        bool cekKetersediaan(int ps);
        //Fungsi untuk mengecek apakah ps tersedia untuk di sewa

        void riwayatPemesanan(string us);
        //Fungsi untuk mengecek riwayat pemesanan yang dilakukan oleh member

        void ringkasanAdmin(int pilihan, int rent, int time);
        //Fungsi untuk mencetak ringkasan untuk Admin

        void konfirmasi(int ps, string us);
        //Fungsi untuk meminta konfirmasi pengembalian ke Admin

        void konfirmasiAdmin();
        //Fungsi untuk mengkonfirmasi pengembalian oleh Admin

        void listPesanan();
        //Fungsi untuk mencetak penyewaan yang sedang berjalan
};
#endif //PLAYSTATION_H
