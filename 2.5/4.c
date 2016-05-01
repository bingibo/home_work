#include <stdio.h>
#include <string.h>
char balance(char *b);
int main()
{
	char a[1000];
	char c[1000]={0};
	int i=0;
	int j=0;
	printf("введите строку, чтобы проверить баалнс скобок\n");
    gets(c);
	while (a[i]!='\0')
    {
        if (a[i]=='(' || a[i]=='{' || a[i]=='[' || a[i]==')' || a[i]=='}' || a[i]==']' || a[i]=='<' || a[i]=='>' || a[i]=='"' || a[i]=='`' || a[i]=='\'')
        {
        	c[j]=a[i];
            ++i;
            ++j;
        }
         else 
            ++i;
    }
   
              balance(c);
	return 0;
}

char balance(char *b)
{
	int c=0,e=0,g=0,i=-1,k=0,j=0;
	char a[1000];
					while(j<strlen(b))
		{
			switch (b[j]){
				case '(':  ++i; a[i]='('; break;
				case '[':  ++i; a[i]='['; break;
				case '{':  ++i; a[i]='{'; break;
				case '<':  ++i; a[i]='<'; break;
				case '"':  ++e; if (e%2==1)  
				                   {
				                   	++i; a[i]='"';
				                   }
					             else if  (a[i]=='"') 
					            	        --i; 
					             else  ++k; 	break;
            case '`':  ++g; if (g%2==1) 
                            {
                            	++i; a[i]='`';
                            }
					             else if (a[i]=='`')
								            --i;
					             else  ++k;    break;

				case '\'': ++c;  if (c%2==1)
				                 {
						               ++i;
						               a[i]='\'';
					              }
					              else { if (a[i]=='\'')
								                --i;
						                  else
						               	++k; } break;
				case ')':  if (i!=-1)
				           {
						     if (a[i]=='(')
							      --i;
					        }
					        else ++k; break;
				case ']':  if (i!=-1)
				           {
						     if (a[i]=='[')
						         --i;
					        }
					       else ++k; break;
				case '}': if (i!=-1)
				          {
					       if (a[i]=='{')
							    --i;
					       }
					       else ++k; break;
				case '>': if (i!=-1)
				          {
						    if (a[i]=='<')
							     --i;
					       }
					       else ++k; break;
					       }
					      ++j;
		}
		if(i==-1 && k==0)
			printf("баланс скобок соблюдён\n");
		else
			printf("баланс скобок не  соблюден\n");
		return 0;
}