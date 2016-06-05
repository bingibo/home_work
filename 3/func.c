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
book *search1(char *);




void create(void)
   {  
       book *point ;
       point=(book *)malloc(sizeof (book));
       printf("Введите имя:\n");  
       scanf("%s",point->name);
       printf("Введите номер: \n");  
       scanf("%s",point->phone);
       alphabet(point, &begin , &end);
    
    }

void alphabet(book *point, book **begin, book **end)
  {        
       book *p,*pre=*begin;
       if (!*end)                 
           {           
            *begin=point;
            *end=point;  
           }
      p=NULL;
      while(pre)
      {
          if(strcmp(pre->name, point->name)<0)
              {
                  p=pre;
                  pre=pre->next;
              }
          else 
          {
              if (p) {
              p->next=point;
              point->next=pre;
              return;
          }
          point->next=pre;            
          *begin=point;
          return;
           }
       }
      (*end)->next=point;
      point->next=NULL;
      *end=point;
   }                                      


 void print (book *begin)
 {
     printf("\n\nСПИСОК ВАШИХ КОНТАКТОВ: \n");
     while (begin)
     {
         printf("Имя: %s \n",begin->name);
         printf("Телефон : %s\n\n",begin->phone);
         begin=begin->next;
      }
  }
  
void search(void)
 {
    char name[20];
    book *begin;
    printf("введите имя: \n");
    scanf("%s", name);
    begin=search1(name);
    if(!begin) printf("не найдено\n");
    else 
    {
        printf("\n\n\nРЕЗУЛЬТАТЫ ПОИСКА\n");
        printf("Имя: %s\n", begin->name);
        printf("Телефон: %s\n\n\n\n\n", begin->phone);
    }
   
 }

void delete(book **begin, book **end)
{
    book *point;
    char s[tsize];
    printf("введите имя: ");
    scanf("%s", s);
    point=search1(s);
    if(point)
    {
        if(*begin==point) 
        {
            *begin=point->next;
            if(*begin) (*begin)->prev=NULL;
            else *end=NULL;
        }
        else 
        {
            point->prev->next=point->next;
            if(point!=*end) point->next->prev=point->prev;
            else *end=point->prev;
        }
        free(point);
    }  
}



void save(void)
 {
    book *point;
    point=begin;
    FILE *fp;
    fp=fopen("book.txt", "wb");    
    while(point)
    {
        fwrite(point, sizeof(book), 1, fp);
        point=point->next;
    }
    fclose(fp);
  }


 void get()
 {
    book *point;
    FILE *fp;
    fp=fopen("book.txt", "rb");
    while(begin) 
    {
        point=begin->next;
        free(begin);
        begin=point;
      }
    begin=end=NULL;
    
    while(!feof(fp)) 
      {
        point=(book *)malloc( sizeof(book));
        if(!point){ 
            printf("нет свободной памяти\n");
            return;
                    }
        if(1 !=fread(point, sizeof(book), 1, fp)) break;
        alphabet( point, &begin,&end);   
       }
    fclose(fp);
}
 book *search1(char *name)
 { 
    book *point;
    point=begin;
    while(point) 
    {
        if(!strcmp(name, point->name)) 
        return point;
        point=point->next;
    }
    return NULL;
}







