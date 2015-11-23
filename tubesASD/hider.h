#ifndef HIDER_H_INCLUDED
#define HIDER_H_INCLUDED

#include <cstring>

typedef struct elmkereta *adrKereta;
typedef struct elmkota *adrKota;

struct elmkereta{
    adrKereta next;
    adrKereta prev;
    adrKota asal;
    string nama_kereta;
};

struct elmkota{
    adrKota next;
    adrKota prev;
    string nama_kota;
};

struct detailjadwal{

};

#endif // HIDER_H_INCLUDED
