#include "header.h"

elm_fuz wawancara(float w){
    float rendah_bawah, rendah_atas, sedang_bawah, sedang_atas;
    rendah_bawah = 35;
    rendah_atas = 45;
    sedang_bawah = 75;
    sedang_atas = 85;
    elm_fuz a;
    if(w <= rendah_bawah){
        a.kategori = "rendah";
        a.nilai = 1;
    }else if((w > rendah_bawah) && (w < rendah_atas)) {
        elm_fuz k,l;
        k.kategori = "rendah";
        k.nilai = (-(w-rendah_atas)) / (rendah_atas - rendah_bawah);
        l.kategori = "sedang";
        l.nilai = (w-rendah_bawah) / (rendah_atas - rendah_bawah);
        cout<<k.kategori<<"("<<k.nilai<<")";
        cout<<l.kategori<<"("<<l.nilai<<")"<<endl;

        if(k.nilai >= l.nilai){
            a = k;
        }else{
            a = l;
        }
    }else if((w >= rendah_atas) && (w <= sedang_bawah)){
        a.kategori = "sedang";
        a.nilai = 1;
    }else if((w > sedang_bawah) && (w < sedang_atas)){
        elm_fuz k,l;
        k.kategori = "sedang";
        k.nilai = -(w-sedang_atas) / (sedang_atas - sedang_bawah);
        l.kategori = "tinggi";
        l.nilai = (w-sedang_bawah) / (sedang_atas - sedang_bawah);

        if(k.nilai >= l.nilai){
            a = k;
        }else{
            a = l;
        }
    }else if((w >= sedang_atas)){
        a.kategori = "tinggi";
        a.nilai = 1;
    }
    return a;
}

elm_fuz test_tulis(float t){
    float rendah_bawah, rendah_atas, sedang_bawah, sedang_atas;
    rendah_bawah = 30;
    rendah_atas = 45;
    sedang_bawah = 80;
    sedang_atas = 90;
    elm_fuz a;
    if(t <= rendah_bawah){
        a.kategori = "rendah";
        a.nilai = 1;
    }else if((t > rendah_bawah) && (t < rendah_atas)) {
        elm_fuz k,l;
        k.kategori = "rendah";
        k.nilai = -(t-rendah_atas) / (rendah_atas - rendah_bawah);
        l.kategori = "sedang";
        l.nilai = (t-rendah_bawah) / (rendah_atas - rendah_bawah);

        if(k.nilai >= l.nilai){
            a = k;
        }else{
            a = l;
        }
    }else if((t >= rendah_atas) && (t <= sedang_bawah)){
        a.kategori = "sedang";
        a.nilai = 1;
    }else if((t > sedang_bawah) && (t < sedang_atas)){
        elm_fuz k,l;
        k.kategori = "sedang";
        k.nilai = -(t-sedang_atas) / (sedang_atas - sedang_bawah);
        l.kategori = "tinggi";
        l.nilai = (t-sedang_bawah) / (sedang_atas - sedang_bawah);

        if(k.nilai >= l.nilai){
            a = k;
        }else{
            a = l;
        }
    }else if((t >= sedang_atas)){
        a.kategori = "tinggi";
        a.nilai = 1;
    }
    return a;
}

void inference(elm_fuz w, elm_fuz t){
    elm_fuz a;
    if(w.kategori == "rendah"){
        if(t.kategori == "rendah"){
            a.kategori = "tolak";
        }else if(t.kategori == "sedang"){
            a.kategori = "tolak";
        }else if(t.kategori == "tinggi"){
            a.kategori = "terima";
        }
    }else if(w.kategori == "sedang"){
        if(t.kategori == "rendah"){
            a.kategori = "tolak";
        }else if(t.kategori == "sedang"){
            a.kategori = "terima";
        }else if(t.kategori == "tinggi"){
            a.kategori = "terima";
        }
    }else if(w.kategori == "tinggi"){
        if(t.kategori == "rendah"){
            a.kategori = "terima";
        }else if(t.kategori == "sedang"){
            a.kategori = "terima";
        }else if(t.kategori == "tinggi"){
            a.kategori = "terima";
        }
    }

    if (w.nilai <= t.nilai){
        a.nilai = w.nilai;
    }else{
        a.nilai = t.nilai;
    }

    cout<<w.kategori<<"("<<w.nilai<<")";
    cout<<t.kategori<<"("<<t.nilai<<")";
    cout<<a.kategori<<"("<<a.nilai<<")";
}
