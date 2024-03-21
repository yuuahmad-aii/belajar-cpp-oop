#include "bentukGeometri.h"
#include <iostream>
#include <math.h>
using namespace std;

bentukGeometri::bentukGeometri(string inputNamaBentukGeometri)
{
    cout << "bentukGeometri : " << inputNamaBentukGeometri << endl;
    if (inputNamaBentukGeometri == "persegi")
        bentukGeometri::jenisGeometri = 1;
    else if (inputNamaBentukGeometri == "persegi panjang")
        bentukGeometri::jenisGeometri = 2;
    else if (inputNamaBentukGeometri == "segitiga")
        bentukGeometri::jenisGeometri = 3;
    else
        bentukGeometri::jenisGeometri = 4;
}

// masukkan parameter (panjang atau alas atau diameter), (lebar atau tinggi)
void bentukGeometri::inputParameter(float panjangORalasORdiameter, float lebarORtinggi)
{
    bentukGeometri::panjang = panjangORalasORdiameter;
    bentukGeometri::alas = panjangORalasORdiameter;
    bentukGeometri::diameter = panjangORalasORdiameter;
    bentukGeometri::lebar = lebarORtinggi;
    bentukGeometri::tinggi = lebarORtinggi;
}

float bentukGeometri::hitungLuas()
{
    float luas;
    float radius = diameter / 2;
    // const float pi = 3.14f;
    switch (jenisGeometri)
    {
    case 1:
        luas = pow(panjang, 2);
        break;
    case 2:
        luas = panjang * lebar;
        break;
    case 3:
        luas = alas * tinggi / 2;
        break;
    case 4:
        // luas =pi* (bentukGeometri::diameter / 2) ^ 2
        luas = 22 / 7 * pow(radius,2);
        break;

    default:
        break;
    }

    return luas;
}
