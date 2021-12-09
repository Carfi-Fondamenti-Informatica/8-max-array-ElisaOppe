#include <iostream>
#include "lib.h"
using namespace std;


float funzione (int a){
    int r=0;
    float g=0, d=0;
    float numeri[a];
    for (int i=0;i<a;i++){
        cin >> numeri[r];
        d = numeri[r];
        r++;
        if(d>g){
            g=d;
        }else if((r==1)&&(d<0)){
            g=d;
        }
    }
    return g;
}
