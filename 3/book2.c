#include "head.h"

 int main ()
 {  int a;
    get();
    print(begin);
    while(1)
        {   
         printf ("1 - добавить контакт \n"
                 "2 - найти контакт \n"
                 "3 - удалить контакт \n"); 
         scanf("%d",&a);
         switch (a)
            {

             case 1: create();break;
             case 2: search();break;
             case 3: delete(&begin , &end);break;
             default: exit(0); 
            }
         save();
         print(begin);
         }
     return 0;
  }