#include "head.h"
#define tsize 20
typedef struct book
  { char name[tsize];
    char phone[tsize];
    struct book *next;
    struct book *prev;
   } book;


book *begin;
book *end; 
void create(void);
void delete(book **begin, book **end);
void search(void);
book *search1(char *);
void save(void);
void get();
void alphabet(book *point,  book **begin, book **end);
void print (book *begin);

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
