#ifndef _MAHASISWA
#define _MAHASISWA
using namespace std;
#include <iostream>

class Mahasiswa
{
private:
    /* data */
public:
    int nim;
    float ipk;
    string nama;
    Mahasiswa(string, float);
    void perkenalan();
    void ubahNama(string);
    float naikkanIpk(float);
};

#endif