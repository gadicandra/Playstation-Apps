#ifndef USER_H
#define USER_H


class User: public userInterface {
    private:
    int targetLine;
    string checkUsername;
    string checkPassword;
    int pilihanRegister;
    string username, password, rePassword;
    bool isCorrect;
    string nama, email; 
    string noTelp, idNumber;
    int balance, plusBalance;
    
    public :

    bool regist();

    bool loginAsMember();

    bool loginAsAdministrator();

    void listUserTerdaftar();
    
    int profil(string us);

    void profilPemesan(string us);

    void updateData(string us);

    void replaceLine(string us);

    void Delete(string us);
    
    void addBalance(string us);

    string mulai();

};
#endif // USER_H
