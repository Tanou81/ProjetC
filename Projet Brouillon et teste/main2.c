 #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wchar.h>
#define ACCENTS L"ÀÁÂÃÄÅàáâãäåÇçÈÉÊËèéêëÌÍÎÏìíîïÑñÒÓÔÕÖòóôõöÙÚÛÜùúûüÝýÿ"
#include <stdio.h>
#include <wchar.h>
#include <string.h>
#include <ctype.h>
#define SIZE 500
#include <locale.h>


void  verifierAlpahenumerique(wchar_t* str){
	int i ;
int boolean;  	
	//int fin = strlen(str); 
	for (i = 0; i<+wcslen(str); i++)
	{
		if (str[i]>='A' && str[i]<='Z' || str[i]>='a' && str[i]<='z'){
			boolean  =  1; 
		}else{ 
		boolean =  0; 
		}
	}
	if (boolean ==1){
		printf("code bon "); 
	}else
	{
		printf("code mauvais ");
	}		
}
	
	void  ConvertirAccents(wchar_t* str){

	
	for (int i = 0 ; i<wcslen(str); i++){
		 
			switch(str[i]){
			case L'À': case L'Á': case L'Â': case L'Ã': case L'Ä': case 7:
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
	




#include <stdio.h>
void cesar(wchar_t* str, int shift) {
  int i = 0;
  
  while (str[i] != '\0') {
    if (str[i] >= 'A' && str[i]<= 'Z') {
        char c = str[i] - 'A';
        c += shift;
        c = c % 26;
        str[i] = c + 'A';
	}else{
			if(str[i] >= 'a' && str[i]<= 'z'){
				 char c = str[i] - 'a';
				c += shift;
				c = c % 26;
				
				str[i] = c + 'a';
			}
		}
    
    i++;
  }
  printf("%s", str);
}


void DechiffrerCessar(wchar_t* str, int shift){
	int i =0; 
	  while (str[i] != '\0') {
    if (str[i]  >= 'A' && str[i]<= 'Z') {
        char c = str[i] - 'A';
        
			c -= shift;
		if (c<0){
					
					c = c +26; //26 ou 26 +1
				}else{
					
					c = c % 26 ;
				}
				
				
			
		
        
        str[i] = c + 'A';
	}else{
			if (str[i]  >= 'a' && str[i]<= 'z') {
        char c = str[i] - 'a';
        
			c -= shift;
		if (c<0){
					
					c = c +26; //26 ou 26 +1
				}else{
					
					c = c % 26 ;
				}
				
				
			
		
        
        str[i] = c + 'a';
    
   
  }
		
	} i++;
	  }
}
	
	
	void ChiffrerVigenere (wchar_t* cleVigenere,wchar_t* Alphabet,wchar_t * str){
		
		//remet des majuscule partout 
		for (int i = 0 ; i<wcslen(str); i++){
		if (str[i] >= 'a' && str[i]<= 'z') {
		 
			switch(str[i]){
			case L'a': 
				{str[i]='A';}
                break;
                case L'b':
                {str[i]='B';}
                break;
					case L'c':
                 {str[i]='C';}
                break;
                case L'd' :
                 {str[i]='D';}
                break;
                case L'e' :
                 {str[i]='E';}
                break;
                case L'f' :
                 {str[i]='F';}
                break;
                case L'g':
                 {str[i]='G';}
                break;
                case L'h' : 
                 {str[i]='H';}
                break;
                case L'i': 
                 {str[i]='I';}
                break;
				case L'j' :
                 {str[i]='J';}
                break;
                case L'k' :
                 {str[i]='K';}
                break;
                case L'l':
                 {str[i]='L';}
                break;
                case L'm':
                 {str[i]='M';}
                break;
                case L'n':
                 {str[i]='N';}
                break;
				case L'o': 
				{str[i]='O';}
                break;
                case L'p':
                {str[i]='P';}
                break;
                case L'q':
                 {str[i]='Q';}
                break;
                case L'r' :
                 {str[i]='R';}
                break;
                case L's' :
                 {str[i]='S';}
                break;
                case L't' :
                 {str[i]='T';}
                break;
                case L'u':
                 {str[i]='U';}
                break;
                case L'v' : 
                 {str[i]='V';}
                break;
                case L'w': 
                 {str[i]='W';}
                break;
                case L'x' :
                 {str[i]='X';}
                break;
                case L'y':
                 {str[i]='Y';}
                break;
                case L'z':
                 {str[i]='Z';}
                break;
				case L' ':
                 {str	[i]=' '; }
                break;
			
			}
		}
		}
		wprintf(L"%ls\n",str);
	
	
	
	
	
	
		// fait en sorte que alphabet de i devienne la clé 
for (int i = 0 ; i<wcslen(cleVigenere); i++){
	
			
				
				if (cleVigenere[i] >= 'A' && cleVigenere[i]<= 'Z') {
					
					switch(str[i]){
				case L'A': 
				{Alphabet[i]=cleVigenere[i];}
                break;
                case L'B':
                {Alphabet[i]=cleVigenere[i];}
                break;
                case L'C':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'D' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'E' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'F' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'G':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'H' : 
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'I': 
                 {Alphabet[i]=cleVigenere[i];} 
                break;
                case L'K' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'L':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'M':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'N':
                 {Alphabet[i]=cleVigenere[i];}
                break;
				case L'O': 
				{Alphabet[i]=cleVigenere[i];}
                break;
                case L'P':
                {Alphabet[i]=cleVigenere[i];}
                break;
                case L'Q':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'R' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'S' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'T' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'U':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'V' : 
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'W': 
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'X' :
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'Y':
                 {Alphabet[i]=cleVigenere[i];}
                break;
                case L'Z':
                 {Alphabet[i]=cleVigenere[i];}
                break;
				case L' ':
                 {Alphabet[i]=cleVigenere[i];}
                break;
				
				
				
			}
			}
				
               
			
		}
		
	
	wprintf(L"%ls\n",Alphabet);
	
	//code le message de str 
	for (int i = 0 ; i<wcslen(str); i++){
	//	char cv = Alphabet[i] ; 
	//	cv = cv % 26; 
		
			
				
				if (str[i] >= 'A' && str[i]<= 'Z') {
					
					switch(str[i]){
						
			case L'A': 
				{str[i]=Alphabet[i];}
                break;
                case L'B':
                {str[i]=Alphabet[i];}
                break;
                case L'C':
                 {str[i]=Alphabet[i];}
                break;
                case L'D' :
                 {str[i]=3;}
                break;
                case L'E' :
                 {str[i]=4;}
                break;
                case L'F' :
                 {str[i]=5;}
                break;
                case L'G':
                 {str[i]=6;}
                break;
                case L'H' : 
                 {str[i]=7;}
                break;
                case L'I': 
                 {str[i]=8;}
                break;
                case L'K' :
                 {str[i]=9;}
                break;
                case L'L':
                 {str[i]=10;}
                break;
                case L'M':
                 {str[i]=11;}
                break;
                case L'N':
                 {str[i]=12;}
                break;
				case L'O': 
				{str[i]=13;}
                break;
                case L'P':
                {str[i]=14;}
                break;
                case L'Q':
                 {str[i]=15;}
                break;
                case L'R' :
                 {str[i]=16;}
                break;
                case L'S' :
                 {str[i]=17;}
                break;
                case L'T' :
                 {str[i]=18;}
                break;
                case L'U':
                 {str[i]=19;}
                break;
                case L'V' : 
                 {str[i]=20;}
                break;
                case L'W': 
                 {str[i]=21;}
                break;
                case L'X' :
                 {str[i]=22;}
                break;
                case L'Y':
                 {str[i]=23;}
                break;
                case L'Z':
                 {str[i]=24;}
                break;
				case L' ':
                 {str[i]=25;}
                break;
				
				
				
			}
			}
				
               
			
		}
		wprintf(L"%ls\n",str);
	}
	  
	  

	
	//void DechiffrerVigenère(){
	//	return 0 ; 
		
		
		
	//}
	
	
	
	









int main()
{
	struct lconv *loc;
	setlocale (LC_ALL,"");
	loc=localeconv(); 
	
	//char str[20]={20};
	//char str[5]=  "salut";
	//wprinft(L"%ls\n",str[5]);
	    //cesar(str, 10);
	//int shift; 
	//printf("rentrer votre chaine de caractère : "); 
	//scanf("%s",str);
		//printf("rentrer votre chaine de caractère : "); 
	//scanf("%s",str);
	int shift; 
	wchar_t str[SIZE]=  L" abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	wchar_t cleVigenere[SIZE]= L"AZERTYUIOPQSDFGHJKLMWXCVBN"; 
	wchar_t Alphabet[SIZE]=L"ABCDEFGHIJKLMNOPQRSTUVWXYZ"; 
	wchar_t texte[SIZE]={7};
	
	//ABCDEFGHIJKLMNOPQRSTUVWXYZ
	
	ConvertirAccents(str);
	wprintf(L"%ls\n",str);
	verifierAlpahenumerique(str);

	
	ChiffrerVigenere(cleVigenere, Alphabet, str);  
	//wprintf(L"%ls\n",str);
	//wprintf(L"%ls\n",Alphabet);

	
	//cesar(str, 3);
	//wprintf(L"%ls\n",str);

	
	//DechiffrerCessar(str,3);
	//wprintf(L"%ls\n",str);
    return 0;
}






