#include "header.h"

int main()
{
    float ww, tt;
    while ((ww != 0) && (tt != 0)){
        cout << "Masukan nilai wawancara = " << endl;
        cin>>ww;
        cout<<"Masukan nilai test tulis = "<<endl;
        cin>>tt;
        inference(wawancara(ww),test_tulis(tt));
        cout<<endl;
    }

    return 0;
}
