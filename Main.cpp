#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int menu(){
	int a =0;
	
	printf("1- Delete all 3-letter words.\n");
	printf("2- Move the first word to the end of the sentence.\n");
	printf("3- Reverse each word.\n");
	printf("4- Exchange the first and last words\n");
	
	printf("Select menu number: ");
	scanf("%d",a);
	return a;
}

int main() {
    char str[1000], ch[10];
    int scount = 0,k=0,ecount = 0;
    int ssize=strlen(ch);

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);


	int a =0;

/*	
	printf("1- Delete all 3-letter words.\n");
	printf("2- Move the first word to the end of the sentence.\n");
	printf("3- Reverse each word.\n");
	printf("4- Exchange the first and last words\n");
	
	printf("Select menu number: ");
	scanf(" %d",a);
*/

	
    	char l1[50],l2[50],l3[50];
    	int ls1=strlen(l1);
		int ls2=strlen(l2);
		int ls3=strlen(l3);
		int i=0;


		
		printf("Delete 1 letter: ");
    	scanf("%s", &l1);
		printf("Delete 2 letter: ");
    	scanf("%s", &l2);
		printf("Delete 3 letter: ");
    	scanf("%s", &l3);		
	
		if(str[i-1]==' '&&strncmp(&str[i],l1,ls1)==0)
		{
			int k=i;
			str[k++]='*';
			for(int a=0;a<ssize-1;a++)
			{
				str[k]= '-';
				k++;
			}
		}
		
		if(str[i-1]==' '&&strncmp(&str[i],l2,ls2)==0)
		{
			int k=i;
			str[k++]='*';
			for(int a=0;a<ssize-1;a++)
			{
				str[k]= '-';
				k++;
			}
		}
		
		if(str[i-1]==' '&&strncmp(&str[i],l3,ls3)==0)
		{
			int k=i;
			str[k++]='*';
			for(int a=0;a<ssize-1;a++)
			{
				str[k]= '-';
				k++;
			}
		}
			
		printf("Sonuc: %s", str);
			
	
    
    

    printf("Enter a character to find its frequency: ");
    scanf("%s", &ch);

    for (int i = 0; str[i] != '\0'; ++i) {
    	
    	
		if( strncmp(&str[i],ch,ssize)==0 && (k==1 || i == 0 )  )
		{ ++scount; }
		
		
		if( strncmp(&str[i],ch,ssize)==0 )
		{  
		
		
		if(str[i+ssize+1] == ' ' || str[i+ssize+2] == '\0') ++ecount; 
		
		}
	
    		if(str[i] == ' ') k=1; else k=0;

    }

    printf("Start of %c = %d\n", ch, scount);
    printf("End of %c = %d", ch, ecount);
    return 0;
}
