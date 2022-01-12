#include <stdio.h>
#include <stdlib.h>
int main(){
    int hi,hf,rm,rh,mi,mf;
    scanf("%d%d%d%d", &hi, &mi, &hf, &mf);
    if(hi==mf && hf==mf && mf==mi){
        rm=mi-mf;
        rh=24+hi-hf;
    }else if(hi==hf && mf>mi){
        rm=mf-mi;
        rh=hi-hf;
    }else if(hi==hf && mi>mf){
        rm=60-mi+mf;
        rh=24-hi+hf-1;
    }else if(mi==mf && hi<hf){
        rm=0;
        rh=hf-hi;
    }else if(mi==mf && hi>hf){
        rm=0;
        rh=24-hi+hf;
    }else if(hf>hi && mf>mi){
        rm=mf-mi;
        rh=hf-hi;
    }else if(hi<hf && mi>mf){
        rm=60-mi+mf;
        rh=hf-hi-1;
    }else if(hi>hf && mi<mf){
        rm=mf-mi;
        rh=24-hi-1+hf;
    }else if(hi>hf && mi>mf){
        rm=60+mf-mi;
        rh=24+hf-hi-1;
    }
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", rh, rm);
    return 0;
}