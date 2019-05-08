#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>

using namespace std;

main()

{
    system("Color 1A");
    cout<<endl;
    string sambutan="\t\t>>>>>>>>>>SELAMAT DATANG DI ATM SWADIKAP UWWWAUUU<<<<<<<<<<\n\n";
    for (int x=0;x<=sambutan.length();x++){
     cout<<sambutan[x];
     for (double y=0;y<=9990000;y++){
 }}
     cout<<endl<<endl;
    system("color 1f");
    int pin=1234;
      cout<<"========================================================="<<endl;
      cout<<"||| SELAMAT DATANG DI ATM SWADIKAP UWWWAUUU           |||"<<endl;
      cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
      cout<<"=========================================================";
      cout<<"\nMasukkan Pin Anda :";
    cin>>pin;
   while (!(pin==1234))
   {
      system("CLS");
      cout<<"========================================================="<<endl;
      cout<<"||| SELAMAT DATANG DI ATM SWADIKAP UWWWAUUU           |||"<<endl;
      cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
      cout<<"=========================================================";
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
        cout<<"========================================================="<<endl;
        cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
        cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
        cout<<"=========================================================";
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
                cout<<"========================================================="<<endl;
                cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
                cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
                cout<<"=========================================================";
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
                cout<<"========================================================="<<endl;
                cout<<"|||            ATM SWADIKAP UWWWAUUU                 |||"<<endl;
                cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
                cout<<"=========================================================";
                cout<<"\n";
                cout<<" Transfer \n";
                cout<<"\n";
                cout<<" Masukkan Rekening Tujuan : "; cin>>tujuan;
                cout<<"\n";
                cout<<" Masukkan Jumlah Transfer : Rp. ";
                cin>>tf;
                if (saldo>=tf)
   {

      }
   else
   {
      while (!(saldo>=tf))
      {
        system("cls");
         cout<<"========================================================="<<endl;
        cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
        cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
        cout<<"=========================================================";
         cout<<"\n";
         cout << "Maaf Saldo Anda Kurang" << endl;
         cout<<"\n";
         cout<<" Masukkan Rekening Tujuan : ";
         cin>>tujuan;
         cout<<"\n";
 	     cout<<"Masukkan jumlah transfer : Rp. ";
         cin >> tf;
      }
   }
                cout<<"\n";
                cout<<"Transaksi berhasil !"<<endl;
                cout<<"\n";
                sisa=saldo-tf;
                cout<<" Jumlah Saldo Saat Ini : Rp. "<<sisa<<endl;
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
                cout<<"========================================================="<<endl;
                cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
                cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
                cout<<"=========================================================";
                cout<<"\n";
                cout<<" Tarik Tunai \n";
                cout<<"\n";
                cout<<" Masukkan Jumlah Yang Akan Ditarik : Rp. ";
                cin>>tn;
                 if (saldo>=tn)
   {
         }
   else
   {
      while (!(saldo>=tn))
      {
        system("cls");
        cout<<"========================================================="<<endl;
         cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
         cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
         cout<<"=========================================================";
         cout<<"\n";
         cout << "Maaf Saldo Anda Kurang" << endl;
         cout<<"\n";
 	 cout<<"Masukkan jumlah penarikan: Rp. ";
         cin >> tn;
      }
   }
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
                cout<<"========================================================="<<endl;
                cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
                cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
                cout<<"=========================================================";
                cout<<"\n";
                cout<<" Setor Tunai \n";
                cout<<"\n";
                cout<<" Masukkan Jumlah yang Akan disetor : Rp. "; cin>>top;
                cout<<"\n";
                sisa=saldo+top;
                cout<<" Anda Berhasil Menyetor ! \n";
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
                cout<<"========================================================="<<endl;
                cout<<"|||            ATM SWADIKAP UWWWAUUU                  |||"<<endl;
                cout<<"|||              PECAHAN RP 50000                     |||"<<endl;
                cout<<"=========================================================";
                cout<<"\n";
                cout<<"Apakah Anda Yakin Akan Keluar : y/n \n";
                cin>>a;
                if (a=='y'||a=='Y')
                {
                cout<<"\n";
                cout<<"Terimakasih telah menggunakan ATM SWADIKAP UWWWAUUU";
                exit (0);
                }
                else if(a=='n'||a=='N')
                {
                    goto menu;
                }
            }
    }
}
