#include<stdio.h>
#include<string.h>
#include<math.h>
#include<conio.h>
                    // 562+*84/-
int main()
	{
		char ex[111];
		int a=0,i=1,n,st[111],s=0,t=0,y=0, k ;
		int c=0;
		printf("please enter full expression : ");
        gets(ex);
        k=strlen(ex);
        ex[k] = ')';

		for(i=0;ex[i]!=')';i++)
		{

			if(ex[i]>='0' && ex[i]<='9')
			{
				st[a]=ex[i]-'0';
				a++;

			}

			else
			{

            if(ex[i]=='*')
					{
           c=st[a-2]*st[a-1];
				 }

				else if(ex[i]=='+')
                c=st[a-2]+st[a-1];

				else if(ex[i]=='-')
               c=st[a-2]-st[a-1];

				else if(ex[i]=='/')
             c=st[a-2]/st[a-1];

			  a--;

			  st[a-1]=c;

			}
		}
		       printf("here is the ans: %d",c);

        	   getch();
 		return 0;
	}
