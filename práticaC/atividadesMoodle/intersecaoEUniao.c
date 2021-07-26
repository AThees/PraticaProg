#include <stdio.h>
#define tam 10

void uniao(int v1[], int v2[], int vUniao[], int tamanho){
    
    int i, j;
    int aux;
    
    for (i = 0; i < tamanho; i++){
        
        vUniao[i] = v1[i];
        
    }
    
    j = i; // Atribui o ultimo elemento para continuar a contagem; 
    
    for(i = 0; i < tamanho; i++, j++){
        
        vUniao[j] = v2[i];
        
    }
    
    for(i = 0; (i <= (tam * 2) - 1); i++){
        
        for(j = (tam * 2) - 1; j > i; j--){
            
            if (vUniao [j] < vUniao [j - 1]){
                
                aux = vUniao[j];
                vUniao[j] = vUniao[j - 1];
                vUniao[j - 1] = aux;
                
            }
        }
    }
    
    
    
}

void intersecao(int v1[], int v2[], int vInter[], int tamanho){
    
    int i, j, zerar, aux;
    
    for(i = 0; i < tamanho; i++){
        
        vInter[i] = v1[i];
        
    }
    
    for(i = 0; i < tamanho; i++){
        
        zerar = 1;
        
        for(j = 0; j < tam; j++){
            
            if(vInter[i] == v2[j]){
                
                zerar = 0;
                break;
                
            }    
            
            else {
                
                continue;
                
                
            }
            
        }
        
        if(zerar == 1){
            
            vInter[i] = 0;
            
        }
        
    }
    
    for(i = 0; i <= tam - 1; i++){
        
        for(j = tam  - 1; j > i; j--){
            
            if (vInter [j] < vInter [j - 1]){
                
                aux = vInter[j];
                vInter[j] = vInter[j - 1];
                vInter[j - 1] = aux;
                
            }
        }
    }
    
    
    
    
}















int main(void){
    
    int v1[tam], v2[tam], vInter[tam], vUniao[2*tam], i;

    
    
    for(i = 0; i < tam; i++){
        
        scanf("%d", &v1[i]);
        
    }

        for(i = 0; i < tam; i++){
        
        scanf("%d", &v2[i]);
        
    }
    
    uniao(v1, v2, vUniao, tam);
    
    intersecao(v1, v2, vInter, tam);
    
    printf("A intersecao dos dois conjuntos eh:\n");
    for(i = 0; i < tam; i++){
        
        if(vInter[i] == 0){
            continue;
        }
        
        printf("%d ", vInter[i]);
        
    }
    
    printf("\n");
    
    printf("A uniao dos dois conjuntos eh:\n");
    for (i = 0; i < tam * 2; i++){
        
        if( vUniao[i] == vUniao[i - 1]){
            continue;
        }
        
        printf("%d ", vUniao[i]);
    }        
}