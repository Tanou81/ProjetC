#define ACCENTS L"ÀÁÂÃÄÅàáâãäåÇçÈÉÊËèéêëÌÍÎÏìíîïÑñÒÓÔÕÖòóôõöÙÚÛÜùúûüÝýÿ"
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <ctype.h>
#define SIZE 500
#include <locale.h>



void  ConvertirAccents(wchar_t* str){

	
	for (int i = 0 ; i<wcslen(str); i++){
		 
			switch(str[i]){
			case L'À': case L'Á': case L' ': case L'Ã': case L'Ä': case 7:
				{str[i]='A';};
                break;
                case L'È':case L'É':case L'Ê':case L'Ë':
                {str[i]='E';};
                break;
                case L'Ç':
                {str[i]='C';}
                break;
                case L'Ì' : case L'Í' : case L'Î': case L'Ï':
                {str[i]='I';}
                break;
                case L'Ý' :
                {str[i]='Y';}
                break;
                case L'Ñ' :
                {str[i]='N';}
                break;
                case L'à' : case L'á': case L'â': case L'ã' : case L'ä':
                {str[i]='a';}
                break;
                case L'è' : case L'é': case L'ê' : case L'ë' :
                {str[i]='e';}
                break;
                case L'ì': case L'í': case L'î' : case L'ï' :
                {str[i]='i';}
                break;
                case L'ç' :
                {str[i]='c';}
                break;
                case L'ò': case L'ó': case L'ô': case L'õ': case L'ö':
                {str[i]='o';}
                break;
                case L'ù': case L'ú': case L'û': case L'ü':
                {str[i]='u';}
                break;
                case L'ý': case L'ÿ':
                {str[i]='y';}
                break;
               
			
		}
	}
	
}

int main()
{
	//setLocale
	struct lconv *loc;
	setlocale (LC_ALL,"");
	loc=localeconv(); 
	
	//char str[20]={20};
	//char str[5]=  "salut";
	//wprinft(L"%ls\n",str[5]);
	wchar_t texte[SIZE]={7};
	wchar_t str[SIZE]=  L"ÀÁÂÃÄÅàáâãäåÇçÈÉÊËèéêëÌÍÎÏìíîïÑñÒÓÔÕÖòóôõöÙÚÛÜùúûüÝýÿ";
	ConvertirAccents(str);
	wprintf(L"%ls\n",str);
    //cesar(str, 10);
	//int shift; 
	//printf("rentrer votre chaine de caractère : "); 
	//scanf("%s",str);
	 

	//verifierAlpahenumerique(str);
	//cesar(str, shift); 
	
    return 0;
}


