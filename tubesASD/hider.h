#ifndef HIDER_H_INCLUDED
#define HIDER_H_INCLUDED

#include <string>

typedef struct elmkereta *adrKereta;
typedef struct elmkota *adrKota;
typedef struct elmjadwal *adrJadwal;

struct elmkereta{
    adrKereta next;
    adrKereta prev;
    adrKota asal;
    std::string nama_kereta;
};

struct elmkota{
    adrKota next;
    adrKota prev;
    std::string nama_kota;
};

struct tanggal{
    int tgl;
    int bln;
    int thn;
    char hari;
};

struct detailjadwal{
    tanggal info_tanggal;
    char jam_berangkat;
    char jam_tiba;
};

struct elmjadwal{
    detailjadwal info;
    adrJadwal next;
    adrJadwal prev;
    adrKereta kereta;
};

struct list{
    adrJadwal first;
    adrJadwal last;
};
#endif // HIDER_H_INCLUDED
