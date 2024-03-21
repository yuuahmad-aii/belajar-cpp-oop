#include "mahasiswa.h"
#include <iostream>
using namespace std;

Mahasiswa::Mahasiswa(string inputNama, float inputIpk)
{
    Mahasiswa::nama = inputNama;
    Mahasiswa::ipk = inputIpk;
}
void Mahasiswa::perkenalan()
{
    cout << "Perkenalan saya " << nama << " ipk " << ipk << endl;
}

void Mahasiswa::ubahNama(string inputNama)
{
    Mahasiswa::nama = inputNama;
}

float Mahasiswa::naikkanIpk(float nilaiTambah)
{
    Mahasiswa::ipk += nilaiTambah;
    return ipk;
}