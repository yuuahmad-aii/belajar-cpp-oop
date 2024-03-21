#ifndef _BENTUKGEOMETRI
#define _BENTUKGEOMETRI
#include <iostream>
using namespace std;

class bentukGeometri
{
private:
    /* data */
    //persegi, persigi panjang, segitiga, lingkaran
    int jenisGeometri;
    int panjang,alas,diameter,lebar,tinggi;
public:
    // masukkan nama bentuk geometri disini
    bentukGeometri(string);
    float hitungLuas();
    void inputParameter(float,float);
};

#endif