#ifndef UI_H
#define UI_H

#include <iostream>
using namespace std;

class userInterface{
    private:
        int pilihanMenuPertama;
        int pilihanMenuKedua;
        int pilihanMenuProfil;
        int pilihanMenuRental;
        int pilihanPengembalian;
        int pilihanAdministrator;
        int konfirmasi;
        int kembali;
    
    public:
        void header();
        //Function to display header of the app

        int firstMenu();
        //Function to display the first menu (Login as Member, signUp, Login as Administrator)

        int secondMenu();
        //Function to display the second menu (Profil, Rental PS, Pengembalian Barang, Riwayat Transaksi)

        int menuProfil();
        //Function to display profil

        void transisiProfil();
        //Function to transition profil menu to update data or back to second menu

        int menuRental();
        //Function to display availability of playstation and the rent price

        int konfirmasiPemesanan();
        //Function to confirmation the rent

        void balanceKurang();
        //Function to display when balance is not enough to pay

        void pembayaranBerhasil();
        //Function to display when transaction is succesfull

        int menuPengembalian();
        //Funtion to display return playstation menu

        int konfirmasiPengembalian();

        void menuKembali();
        //Function to display transaction history

        int menuAdministrator();

        void ringkasan();

};

#endif // UI_H