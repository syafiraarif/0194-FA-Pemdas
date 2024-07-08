#include <iostream> 
using namespace std;

 class MasukUniversitas  {
    // isi access modifier disini 
public : 
    // isi daftar variable yang dibutuhkan di bawah ini 
    int uangPendaftaran;
    int uangSemesterPertama;
    int uangBangunan;
    int totalBiaya;



public:
    MasukUniversitas() {
        uangPendaftaran = 0;
        // isi nilai default variable yang dibutuhkan di bawah ini 
        uangSemesterPertama = 0;
        uangBangunan = 0;
        totalBiaya = 0;
       
    }

    virtual void namaJalurMasuk(string pNama)
    { 
        return; 
    }
    // isi disini dengan fungsi virtual yang dibutuhkan 

    void setUangPendaftaran(int nilai) {
        this->uangPendaftaran = nilai;
    }

    float getUangPendaftaran() {
        return uangPendaftaran;
    }

    void setUangSemesterPertama(int nilai) {
        this->uangPendaftaran = nilai;
    }

    float getUangSemesterPertama() {
        return uangSemesterPertama;
    }

    void setUangBangunan(int nilai) {
        this->uangBangunan = nilai;
    }

    float getUangbangunan() {
        return uangBangunan;
    }

    void setTotalBiaya(int nilai) {
        this->totalBiaya = nilai;
    }

    float getTotalBiaya() {
        return totalBiaya;
    }


    // isi setter dan getter variable yang dibutuhkan di bawah ini 
 
   
};

class SNBT : virtual public MasukUniversitas {
    // isi disini untuk melengkapi class SNBT 
public:
    void input()
    {
        cout << "Uang Pendaftaran =";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama =";
        cin >> uangSemesterPertama;
        cout << "Uang bangunan =";
        cin >> uangBangunan;
    }

    
    void hitungTotalBiaya(int UP, int USB, int UB )
    {
        totalBiaya = UP + USB + UB;
    }

    void tampilkanTotalBiaya()
    {
        string status;
        string rekomendasi;

        if (totalBiaya > 15000000) 
        {
            status = "Mahal";
            cout << "tidak di rekomendasikan " << rekomendasi << endl;
        }
        else if (totalBiaya < 10000000) 
        {
            status = "Murah";
            cout << "boleh dipertimbangkan " << rekomendasi << endl;
        }
        else 
        {
            status = "Sedang";
            cout << "di rekomendasikan " << rekomendasi <<  endl;
        }
    }

    void output()
    {
        cout << "Uang Pendaftaran = " << uangPendaftaran << endl;
        cout << "Uang Semester Pertama = " << uangSemesterPertama << endl;
        cout << "Uang Bangunan = " << uangBangunan << endl;
    }
};

class SNBP : public MasukUniversitas {
    // isi disini untuk melengkapi class SNBP 
public:
    void input()
    {
        cout << "Uang Pendaftaran =";
        cin >> uangPendaftaran;
        cout << "Uang Semester Pertama =";
        cin >> uangSemesterPertama;
    }

    void hitungTotalBiaya(int UP, int USB)
    {
        totalBiaya = UP + USB;
    }

    void tampilkanTotalBiaya()
    {
        string status;

        if (totalBiaya > 15000000)
        {
            status = "Mahal";
        }
        else if (totalBiaya < 10000000)
        {
            status = "Murah";
        }
        else
        {
            status = "Sedang";
        }

        cout << "Total Biaya adalah = " << totalBiaya << endl;
        cout << " statusnya adalah = " << status << endl;
    }

    void output()
    {
        cout << "Uang Pendaftaran = " << uangPendaftaran << endl;
        cout << "Uang Semester Pertama = " << uangSemesterPertama << endl;
    }
};

int main() {
    // isi disini untuk fungsi main 
    SNBT jalur1();
    SNBP jalur2();

    int pilihan;
    do
    {
        system("CLS");
        cout << "Pilih Jalur Masuk" << endl;
        cout << "1. SNBT" << endl;
        cout << "2. SNBP" << endl;
        cout << "3. Keluar" << endl;
        cout << "Pilih : ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            SNBT();
            cout << "\n " << endl;
            system("pause");
            break;
        case 2:
            SNBP();
            cout << "\n " << endl;
            system("pause");
            break;
        case 3:
            break;
        default:
            cout << "pilihan tidak valid" << endl;
            system("pause");
            break;
        }
    } while (pilihan != 3);

    return 0;
}
