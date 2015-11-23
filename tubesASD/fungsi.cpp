#include <iostream>
#include "hider.h"

using namespace std;

void createList(list *L){
    L->first = NULL;
    L->last = NULL;
}

adrJadwal alokasiJadwal(detailjadwal x){
    adrJadwal jadw = new elmjadwal;
    jadw->info = x;
    jadw->next = NULL;
    jadw->prev = NULL;
    jadw->kereta = NULL;

    return jadw;
}

detailjadwal inputJadwal(int tang,int bul,int tah,char har,char jam_ber, char jam_tib){
    detailjadwal jad;
    jad.info_tanggal.tgl = tang;
    jad.info_tanggal.bln = bul;
    jad.info_tanggal.thn = tah;
    jad.info_tanggal.hari = har;
    jad.jam_berangkat = jam_ber;
    jad.jam_tiba = jam_tib;

    return jad;
}

void addJadwal(list *L,adrJadwal j){
    adrJadwal f,l;

    f = L->first;
    l = L->last;

    if((f != NULL)&&(l != NULL)){
        //insert last
        L->last->next = j;

    }else{
        //list kosong
        L->first = j;
        L->last = j;
    }
}
