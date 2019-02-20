#include <iostream>
#include <stdlib.h>
#include <conio.h>

using namespace std;

struct Buku
{
       char kd[20];
       char nm[50];
       char thn [10];
       char pengarang[50];
       char hg[10];
};
Buku book[10];
int a,i;

void Input()
{
    char get[1];
    cout << "Masukan Jumlah Buku : ";
    cin >>a;
    for (i=0;i<a;i++)
    {
        cout<<endl;
        cout << "Buku ke-"<<i+1<<endl<<endl;
        cout << "Kode Buku\t: ";        cin >> book[i].kd; cin.getline(get,1);
        cout << "Nama Buku\t: ";        cin.getline(book[i].nm,50);
        cout << "Tahun Terbit\t: ";     cin.getline(book[i].thn,10);
        cout << "Nama Pengarang\t: ";   cin.getline(book[i].pengarang,50);
        cout << "Harga\t\t: Rp. ";      cin.getline(book[i].hg,10);
        cout<<endl;
    }
    system("cls");
}

void Show ()
{

    cout<<"=================================\n";
    cout<<"\t\tData Buku\n";
    cout<<"================================\n";
       for (int i=0; i<a; i++){
           cout<<"============+=====================\n";
           cout<<"Kode        : "<<book[i].kd<<endl;
           cout<<"nama buku   : "<<book[i].nm<<endl;
           cout<<"Tahun       : "<<book[i].thn<<endl;
           cout<<"Pengarang   : "<<book[i].pengarang<<endl;
           cout<<"Harga       : Rp. "<<book[i].hg<<endl;
           cout<<"============+========================\n";
           cout<<endl;
           }
       cout<<"\n\n";
}

void Delete ()
{
    int j,k;
    cout << "Hapus Data Buku ke-";
    cin >> j;
    j=j-1;
    i--;
    for (k=j;k<i;k++)
    {
        book[i]=book[i-1];
    }
    a=a-1;
    cout << "\t\t\tData Buku Berhasil Dihapus"<<endl;
    getch();system("cls");

}

void Edit()
{
    int j;
    cout << "Edit Data Buku ke-";
    cin >> j;
    j=j-1;
    cout << "Kode Buku\t: ";
    cin >> book[j].kd;
    cout << "Nama Buku\t: ";
    cin >> book[j].nm;
    cout << "Tahun Terbit\t: ";
    cin >> book[j].thn;
    cout << "Nama Pengarang\t: ";
    cin >> book[j].pengarang;
    cout << "Harga\t\t: ";
    cin >> book[j].hg;
    Show();

}

int main()
{
    int pilihan;


    while (pilihan!=99)
    {
        cout<<"--------------------------------------------------"<<endl;
        cout<<"-------------Selamat datang di Data buku-----------"<<endl;
        cout <<"-----------------FARIDA WIJAYANTI-----------------\n";
        cout <<"-------------------18050623012-------------------\n";
        cout<<endl;
        cout<<"Pilih menu dibawah ini"<<endl;
        cout << "1. Masukan Data Buku"<<endl;
        cout << "2. Hapus Data Buku"<<endl;
        cout << "3. Edit Data Buku "<<endl;
        cout << "4. Tampilkan Data Buku"<<endl;
        cout << "0. Keluar"<<endl<<endl;
        cout << "__________________________\n";
        cout<<endl;
        cout << "Masukan Pilihan : ";
        cin >> pilihan;
        system("cls");

        if (pilihan == 1)
        {
            Input();
        }

        else if (pilihan == 2)
        {
            Delete();
        }

        else if (pilihan == 3)
        {
            Edit();
        }

        else if (pilihan == 4)
        {
            Show();
        }

        else if (pilihan == 0)
        {
            return 0;
        }

        else
        {
            cout << "Pilihan Tidak ada!";
        }
    }
}
