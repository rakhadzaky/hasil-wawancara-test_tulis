#include "header.h"

int main()
{
    int ww, tt;

    cout << "Masukan nilai wawancara = " << endl;
    cin>>ww;
    cout<<"Masukan nilai test tulis = "<<endl;
    cin>>tt;
    inference(wawancara(ww),test_tulis(tt));

    return 0;
}
