#include "algorithmes.h"



int main(void){
        
    u_int32_t *a=(u_int32_t *) malloc(sizeof(u_int32_t)*3);
    u_int32_t *b=(u_int32_t *) malloc(sizeof(u_int32_t)*3);
    
    a[0]=2 ; a[1]=10 ; a[2]=1; 
    b[0]=1 ; b[1]=8 ; b[2]=9;
    u_int32_t *res=NULL;
    u_int64_t taille_res=0;
    mult_TC4(a,3,b,3,&res,&taille_res);
    
    printf("taille : %llu\n",taille_res);
    
    for (int i=0;i<taille_res;i++){
          printf("%d\n",res[i]);
    }
    
    free(a);
    free(b);
    free(res);
    

  return 0;
}


