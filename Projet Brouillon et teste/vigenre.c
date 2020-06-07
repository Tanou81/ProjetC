/*include <stdio.h>
#include <stdlib.h>
void crypter();
int main(){
    crypter();
    return 0;
}
void crypter(){
 
int i=0;
    char mcr[]="";
char cle []="";
    char mc[]="";
    printf("entrez une clé ");
    scanf("%s",cle);
    printf("\nentrez un message ");
    scanf("%s",mc);
    while(mc[i]!='\0'){
        switch(cle[i]){
            case 'a':
               cle[i]=0;
               break;
            case 'b':
               cle[i]=1;
               break;
            case 'c':
               cle[i]=2;
            case 'd':
               cle[i]=3;
               break;
            case 'e':
               cle[i]=4;
               break;
            case 'f':
               cle[i]=5;
            case 'g':
               cle[i]=6;
               break;
            case 'h':
               cle[i]=7;
               break;
            case 'i':
               cle[i]=8;
            case 'j':
               cle[i]=9;
               break;
            case 'k':
               cle[i]=10;
               break;
            case 'l':
               cle[i]=11;
            case 'm':
               cle[i]=12;
               break;
            case 'n':
               cle[i]=13;
               break;
            case 'o':
               cle[i]=14;
            case 'p':
              cle[i]=15;
               break;
            case 'q':
               cle[i]=16;
               break;
            case 'r':
               cle[i]=17;
            case 's':
               cle[i]=18;
               break;
            case 't':
               cle[i]=19;
               break;
            case 'u':
               cle[i]=20;
            case 'v':
               cle[i]=21;
               break;
            case 'w':
               cle[i]=22;
               break;
            case 'x':
               cle[i]=23;
            case 'y':
               cle[i]=24;
            case 'z':
               cle[i]=25;
 
        }
         switch(mc[i]){
            case 'a':
               mc[i]=0;
               break;
            case 'b':
               mc[i]=1;
               break;
            case 'c':
               mc[i]=2;
            case 'd':
               mc[i]=3;
               break;
            case 'e':
               mc[i]=4;
               break;
            case 'f':
               mc[i]=5;
            case 'g':
               mc[i]=6;
               break;
            case 'h':
               mc[i]=7;
               break;
            case 'i':
               mc[i]=8;
            case 'j':
               mc[i]=9;
               break;
            case 'k':
               mc[i]=10;
               break;
            case 'l':
               mc[i]=11;
            case 'm':
               mc[i]=12;
               break;
            case 'n':
               mc[i]=13;
               break;
            case 'o':
               mc[i]=14;
            case 'p':
              mc[i]=15;
               break;
            case 'q':
               mc[i]=16;
               break;
            case 'r':
               mc[i]=17;
            case 's':
               mc[i]=18;
               break;
            case 't':
               mc[i]=19;
               break;
            case 'u':
               mc[i]=20;
            case 'v':
               mc[i]=21;
               break;
            case 'w':
               mc[i]=22;
               break;
            case 'x':
               mc[i]=23;
               break;
            case 'y':
               mc[i]=24;
            case 'z':
               mc[i]=25;
               break;
            case '_':
               mc[i]=100;
               break;
 
        }
        mcr[i]=((mc[i]+cle[i])%26)-1;
    switch(mcr[i]){
        case 0:
           mcr[i]='a';
           break;
        case 1:
           mcr[i]='b';
           break;
        case 2:
           mcr[i]='c';
           break;
        case 3:
           mcr[i]='d';
           break;
    case 4:
           mcr[i]='e';
           break;
        case 5:
           mcr[i]='f';
           break;
        case 6:
           mcr[i]='g';
           break;
        case 7:
           mcr[i]='h';
           break;
           case 8:
           mcr[i]='i';
           break;
        case 9:
           mcr[i]='j';
           break;
        case 10:
           mcr[i]='k';
           break;
        case 11:
           mcr[i]='l';
           break;
           case 12:
           mcr[i]='m';
           break;
        case 13:
           mcr[i]='n';
           break;
        case 14:
           mcr[i]='o';
           break;
        case 15:
           mcr[i]='p';
           break;
           case 16:
           mcr[i]='q';
           break;
        case 17:
           mcr[i]='r';
           break;
        case 18:
           mcr[i]='s';
           break;
        case 19:
           mcr[i]='t';
           break;
           case 20:
           mcr[i]='u';
           break;
        case 21:
           mcr[i]='v';
           break;
        case 22:
           mcr[i]='w';
           break;
        case 23:
           mcr[i]='x';
           break;
           case 24:
           mcr[i]='y';
           break;
        case 25:
           mcr[i]='z';
           break;
        default:
           mcr[i]='_';
    }
        i++;
    }
printf("%s",mcr);
}*/


/*#include <stdio.h>
#include <stdlib.h>
void crypter();
int main(){
    crypter();
    return 0;
}
void crypter(){
 
int i=0;
    char mcr[100]="";
    char cle [100]="";
    char mc[100]="";
    printf("entrez une cle \n");
    scanf("%s",cle);
    printf("\nentrez un message \n");
    scanf("%s",mc);
	
	int tCle=0; 
	while(cle[tCle] != 0)
		tCle++; 
 
  /*  while(mc[i]!='\0')
    {
        cle[i%tCle]-='a';
        mc[i]-='a';
        mcr[i]=(mc[i]+cle[i]2*'a')%26+'a';
        mcr[i]+='a';
		i++; 
    }
	for(;mc[i] != 0; i++){
    mcr[i]=(mc[i]+cle[i%tCle]-2*'a')%26 +'a'; 
	}


	printf("le code codé est \n" ); 
    printf("%s \n",mcr);
	
}
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <wchar.h>
wchar_t Alpha[] = {L"abcdefghijklmnopqrstuvwxyzx85x82x8Ax88x20x97x87x93?!.,;:"};
wchar_t Cle [200];
wchar_t Acoder [200], cod[200];
int lgtext, lgclef, lgalpha;
int PosCle =-1;
int NouvPos; //nouvelle position qui determinera la lettre correspondant au chiffrement
wchar_t LetCle; // la lettre dans la clé de chiffrement
wchar_t Let; //La lettre dans la phrae à coder
void chiffrement ();
void dechiffrement();
int search (wchar_t *s , wchar_t carac)
{
    int i;
    for(i = 0; s[i] !=' '; i++)
        if(s[i] == carac)
            return i;
    return 0;
}
static void purger(void)
{
    int c;
    while ((c = getchar()) != 'n' && c != EOF)
        {}
}
static void clean (wchar_t *chaine)
{
    wchar_t *p = wcschr(chaine, 'n');
    if (p)
    {
        *p = 0;
    }
    else
    {
        purger();
    }
}
int main ()
{
  /*  printf ("n ***** Cryptage et Decryptage de Vigenere *****n");
    printf ("n Merci de faire un choixn");
    printf ("n [1] pour le cryptage n [2] pour le decryptage n");
    int action;
    scanf ("%d", &action);
	printf("c'est un bon choix %d !\n\n",action);
   /* if (action ==1)
    {
        chiffrement();
    }
    else if (action==2)
    {
        dechiffrement();
    }
    else
    {
        printf ("n Veuillez choisir un nombre entre 1 et 2n" );
    }*/
    return 0;
	chiffrement();
}
void chiffrement ()
{
    int i;
    wprintf (L"Veuillez saisir la phrase %c crypter:", 133 );
    rewind(stdin);
    fgetws(Acoder, sizeof Acoder, stdin);
    clean(Acoder);
    //wscanf(L"%ls", Acoder);
    wprintf (L"Entrez la cle de codage de la phrase:" );
    rewind(stdin);
    fgetws(Cle, sizeof Cle, stdin);
    clean(Cle);
    lgtext = wcslen(Acoder);// longueur de la phrase saisie au clavier
    lgclef = wcslen(Cle); //Longueur de la clé de chiffrement
    lgalpha = wcslen (Alpha);
    for (i=0; i< lgtext ; i++)
    {
        PosCle= PosCle+1;
        if (PosCle>=lgclef)
            PosCle=0;
        /* on determine quelle est la lettre cle et sa position dans l'alphabet que nous avons définit en prenant en compte les caractère acceutué */
        LetCle = Cle[PosCle];
        /* on determine la position de la lettre a coder et le decalage a appliquer */
        Let = Acoder[i];
        int pos = search (Alpha,LetCle);
        int pos1 = search (Alpha,Let);
        NouvPos = pos+pos1;
        if (NouvPos >= lgalpha)
            NouvPos = NouvPos - lgalpha;
        cod[i]= Alpha[NouvPos];
    }
    wprintf(L"la phrase codee est: %lsn", cod);
    wprintf (L"la phrase a chiffrer est: %lsn", Acoder);
    wprintf (L"La cle de chiffrement est: %lsn", Cle);
}
void dechiffrement()
{
    int i;
    wprintf (L"n Veuillez saisir la phrase %c dechiffrer:n", 133 );
    fgetc(stdin);
    fgetws(cod, sizeof cod, stdin);
    clean(cod);
    //wscanf(L"%ls", cod);
    wprintf (L"n Entrez la cle de decodage de la phrase: n" );
    //fgetc(stdin);
    fgetws(Cle, sizeof Cle, stdin);
    clean(Cle);
    //wscanf(L"%ls", Cle);
    lgtext = wcslen(cod);
    lgclef = wcslen(Cle);
    lgalpha = wcslen (Alpha);
    for (i=0; i< lgtext ; i++)
    {
        PosCle= PosCle+1;
        if (PosCle>=lgclef)
            PosCle=0;
        /* on determine quelle est la lettre cle et sa position dans l'alphabet que nous avons définit en prenant en compte les caractère acceutué */
        LetCle = Cle[PosCle];
        /* on determine la position de la lettre a décoder et le decalage a appliquer */
        Let = cod[i];
        int pos = search (Alpha,LetCle);
        int pos1 = search (Alpha,Let);
        NouvPos = pos1 - pos;
        if (NouvPos < 0)
            NouvPos = lgalpha - abs(NouvPos);
        Acoder[i]= Alpha[NouvPos];
    }
    wprintf(L"la phrase initial est: %lsn", Acoder);
    wprintf(L"la phrase codee est: %lsn", cod);
    wprintf (L"La cle de chiffrement est: %lsn", Cle);
}

