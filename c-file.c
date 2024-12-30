
#include <stdio.h>


//extern "C" void __stdcall asmfunc(void);

#ifdef __cplusplus
extern "C" {
#endif

void __stdcall asmfunc(int array ,int *num);

#ifdef __cplusplus
}
#endif


int main() {
    system("cls");
    int array[7]={23,0,3,4,0,5,7};
    int num=0;

    printf("assembly proc calling from  from C! \n");


    printf("The arraay is :\n ");
    for(int i=0;i<7;i++){
        printf(" %d ", array[i]);
    }

getch();

    
    asmfunc(array,&num); //assembly proc calling
   
   getch();
    
    
    printf("\nback to  C! \n"); // printing in c
    printf("The number of non-zero values are : %d ",num);
    
  
    
    return 0;
}