#ifndef HEADER_H_INCLUDED
#define HEADER_H_INCLUDED

#include <string>
#include <iostream>

using namespace std;

struct elm_fuz{
    string kategori;
    float nilai;
};

elm_fuz wawancara(float w);
elm_fuz test_tulis(float t);
void inference(elm_fuz w, elm_fuz t);

#endif // HEADER_H_INCLUDED
