#include <stdio.h>

struct pila{
};
void init_pila();
void vacia_pila();
void ins_pila();
void retirar_pm();

int main(){
    int opc;
    printf("menu\n");
    printf("1.ingresar dato de la pila\n");
    printf("2.vaciar pila\n");
    printf("3.insertar pila\n");
    printf("4.retirar\n");
    printf("ingrese el numero de la opcion:\n");
    scanf("%d",&opc);
    switch(opc)
         {
         case 1:init_pila();
         break;
         case 2:vacia_pila();
         break;
         case 3:ins_pila();
         break;
         case 4:retirar_pm();
         break;
         default: printf("\n Opcion no valida!!"); break;
         }

return 0;

}
void init_pila(){
}
void vacia_pila(){
}
void ins_pila(){
}
void retirar_pm(){
}
