#include <stdio.h>
#include <stdlib.h>
#define V 3

int fonk1(int array[V][V],int indis,int cd, int vs[V]){
    if(vs[indis]==1)
        return cd;
    vs[indis]=1;
    int dg=cd;
    for(int i=0;i<V;i++){
        if(array[indis][i] != 0)
            dg++;
    }
    return dg;
}
void fonk2(int array[V][V],int indis,int vs[V],int* md,int* mn){
    if(indis>=V)
        return;
    int cd=fonk1(array,indis,0,vs);
    if(cd > *md){
        *md=cd;
        *mn=indis;
    }
    for(int i=0;i<V;i++)
        vs[i]=0;
    fonk2(array,indis+1,vs,md,mn);
}
int main(){
    int array[V][V]={
        {0,0,3},
        {2,0,8},
        [7,0,0]
    };
    int vs[V]={0};
    int md = -1;
    int mn = -1;
    fonk2(array,0,vs,&md,&mn);
    if(mn != -1){
        printf("result= %d & %d", mn,md);
    }
    return 0;
}