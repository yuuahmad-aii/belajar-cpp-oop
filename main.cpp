#include <stdio.h>
#include <math.h>
#include <iostream>
#include "mahasiswa.h"
#include "bentukGeometri.h"
using namespace std;

int main(int argc, char const *argv[])
{
    printf("hai dunia apa kabar anda");
    Mahasiswa mahasiswaA = Mahasiswa("yusuf", 2.5);
    mahasiswaA.perkenalan();
    mahasiswaA.ubahNama("ahmad maulana");
    mahasiswaA.perkenalan();
    cout << mahasiswaA.naikkanIpk(2.2) << endl;
    Mahasiswa mahasiswaB = Mahasiswa("nanik", 2.5);
    mahasiswaB.perkenalan();
    mahasiswaB.ubahNama("kamelia");
    mahasiswaB.perkenalan();
    cout << mahasiswaB.naikkanIpk(3.1) << endl;

    bentukGeometri persegi1 = bentukGeometri("persegi");
    persegi1.inputParameter(4, 0);
    cout << "luas : " << persegi1.hitungLuas() << endl;

    bentukGeometri persegiPanjang1 = bentukGeometri("persegi panjang");
    persegiPanjang1.inputParameter(4, 12);
    cout << "luas : " << persegiPanjang1.hitungLuas() << endl;

    bentukGeometri lingkaran1 = bentukGeometri("lingkaran");
    lingkaran1.inputParameter(14, 0);
    cout << "luas : " << lingkaran1.hitungLuas() << endl;

    bentukGeometri lingkaran2 = bentukGeometri("lingkaran");
    lingkaran2.inputParameter(7, 0);
    cout << "luas : " << lingkaran2.hitungLuas() << endl;
    return 0;
}
