#include <iostream>
#include <windows.h>
#include <cstdlib>
using namespace std;

main()

{
    int pin=1234;
    cout<<"================================================="<<endl;
    cout<<"|\tSelamat Datang di ATM UWWWAAUUUU        |"<<endl;
    cout<<"|\t\tPecahan Rp.50.000               |"<<endl;
    cout<<"================================================="<<endl;
    cout<<"\nMasukkan Pin Anda :";
    cin>>pin;
   while (!(pin==1234))
   {
      system("CLS");
      cout<<"============================================"<<endl;
      cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
      cout<<"============================================"<<endl;
      cout<<"\n";
      cout << "Pin yang anda masukkan salah" << endl;
      cout << "\n\tMasukkan Pin : " ;
      cin >> pin;
   }
    if (pin==1234)
   {
      cout << "Pin yang anda masukkan benar" << endl;
   }
    else
    {
      system("CLS");
      cout << "Pin yang anda masukkan salah" << endl;
      cout << "Masukkan Pin" << endl;
      cin >> pin;
    }
        int pilihan, saldo=1000000, tf, tn, sisa, tujuan, top;
        menu :
        system("cls");
        cout<<"============================================"<<endl;
        cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
        cout<<"============================================"<<endl;
        cout<<"\n";
        cout<<"\tMENU : \n\n";
        cout<<"\t\t1. Cek Saldo \n";
        cout<<"\t\t2. Transfer \n";
        cout<<"\t\t3. Tarik Tunai \n";
        cout<<"\t\t4. Setor Tunai \n";
        cout<<"\t\t5. Exit \n\n";
        cout<<"\t  Masukkan Pilihan Anda :";
        cin>>pilihan;
            switch(pilihan)
    {
        case 1:
            {
                menu1:
                system("cls");
                char a;
                cout<<"============================================"<<endl;
                cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
                cout<<"============================================"<<endl;
                cout<<"\n";
                cout<<" Saldo Anda : Rp. "<<saldo<<endl<<endl<<endl;
                cout<<"\n";
                cout<<" Kembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu1;
                }
                break;
            }
        case 2:
            {
                menu2:
                system("cls");
                char a;
                cout<<"============================================"<<endl;
                cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
                cout<<"============================================"<<endl;
                cout<<"\n";
                cout<<" Transfer \n";
                cout<<"\n";
                cout<<" Masukkan Rekening Tujuan : "; cin>>tujuan;
                cout<<"\n";
                cout<<" Masukkan Jumlah Transfer : Rp. "; cin>>tf;
                cout<<"\n";
                sisa=saldo-tf;
                cout<<" Sisa Saldo Saat Ini : Rp. "<<sisa<<endl;
                cout<<"\n";
                cout<<"\nKembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    saldo=saldo-tf;
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu2;
                }
                break;
            }
        case 3:
            {
                menu3:
                system("cls");
                char a;
                cout<<"============================================"<<endl;
                cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
                cout<<"============================================"<<endl;
                cout<<"\n";
                cout<<" Tarik Tunai \n";
                cout<<"\n";
                cout<<" Masukkan Jumlah Yang Akan Ditarik : Rp. ";
                cin>>tn;
                sisa=saldo-tn;
                cout<<"\n";
                cout<<" Sisa Saldo Sekarang : Rp. "<<sisa<<endl;
                cout<<"\n";
                cout<<" Silahkan Ambil Uang Anda, Jgn Lupa Sedekah"<<endl;
                cout<<"\nKembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    saldo = saldo-tn;
                    goto menu;

                 }
                else if(a=='n'||a=='N')
                {
                    goto menu3;
                }
                break;
            }
        case 4:
            {
                menu4:
                system("cls");
                char a;
                cout<<"============================================"<<endl;
                cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
                cout<<"============================================"<<endl;
                cout<<"\n";
                cout<<" Setor Tunai \n";
                cout<<"\n";
                cout<<" Masukkan Jumlah yang Akan disetor : Rp. "; cin>>top;
                cout<<"\n";
                sisa=saldo+top;
                cout<<" Anda Berhasil Menyetor \n";
                cout<<"\n";
                cout<<" Jumlah saldo saat ini : Rp. "<<sisa<<endl;
                cout<<"\n";
                cout<<"\nKembali Ke Menu Utama y/n :"; cin>>a;
                if (a=='y'||a=='Y')
                {
                    saldo=saldo+top;
                    goto menu;
                }
                else if(a=='n'||a=='N')
                {
                    goto menu4;
                }
                break;
            }
        case 5:
            {
                char a;
                system("cls");
                 cout<<"============================================"<<endl;
                cout<<"|\t ===BANK UWWWAUUUUUUUU===          |\n";
                cout<<"============================================"<<endl;
                cout<<"\n";
                cout<<"Apakah Anda Yakin Akan Keluar : y/n \n";
                cin>>a;
                if (a=='y'||a=='Y')
                {
                cout<<"Terimakasih telah menggunakan BANK UWWWAUUUUUUUU";
                exit (0);
                }
                else if(a=='n'||a=='N')
                {
                    goto menu;
                }
            }
    }
}
