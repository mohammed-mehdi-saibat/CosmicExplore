#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX 100

#define position1 "attacker"
#define position2 "Midfielder"
#define position3 "Defender"
#define position4 "Goalkeeper"


struct player
{
    int id ;
    char nom [MAX];
    int NumroMaillot ;
    char poste [MAX] ;
    int age ;
    int buts ;


};
struct returnfonction
{
    int w1;
    int lindis;
};

int indis[20];
struct player n[MAX] ;
struct player recherchont[20];

int recherche(int nm)
{
    char NomRecherch[MAX];
    int idrecherch;
    int  chois , w = 0;

    do
    {
        printf("--------------comment vous aver rechercher--------------\n1 . rechercher par nom .\n2 . rechercher par ID .\nchois : ");
        scanf("%d" , &chois);

    } while ( chois > 2 || chois < 1 );
    
    switch (chois)
    {
    case 1:
        ere :
        printf("entrer nom que tu veus : ");
        scanf(" %[^\n]s", NomRecherch);
        for (int i = 0; i < nm; i++)
        {
            if (strcmp(NomRecherch , n[i].nom) == 0 )
            {
                indis[w++] = i ;              
            }
        }
        if (w == 0 )
        {
            do
            {
                printf("le nom nexist pas");
                printf("\n1 . recherche un outre nom .\n2 . break .\nchois : ");
            } while ( chois < 1 || chois > 2 );
            if ( chois == 1 )
            {
                system("cls");
                goto ere ;
            }
        }

        break;
    case 2:
        printf("entrer nom que tu veus : ");
        scanf("%d", &idrecherch);
        for (int i = 0; i < nm; i++)
        {
            if (idrecherch = n[i].id )
            {
                indis[w++] = i ;
            }
            
        }

        break;
    default:
        break;
    }
}
int BackMenu()
{
    int chois ;
    do
    {
        //system("cls");
        printf("------tu peut back to menu------\n 1.back to menu .\n 2.clsprgrm .\n votre chois est : ");
        scanf("%d" , &chois);

        if (chois == 1)
        {
            return chois ;
        }else if (chois == 2)
        {
            return chois ;
        }
    } while ( chois < 1 || chois > 2);
}
int Id()
{
    static int nid = 111 ;
    nid = nid + 1 ;
    return nid ;
}

void tireposition(int nm , char arr[])
{
    struct player temp ;
    int w = 1 ;

    printf("\n%-5s %-10s %-15s %-15s %-15s %-10s%10s\n", "No", "ID", "Nom", "Maillot", "Poste", "Age", "Buts");
    for (int i = 0;  i < nm ; i++)
    {
        temp = n[i];
        while (strcmp(temp.poste , arr) == 0)
        {
            printf("%-5d %-10d %-20s %-10d %-15s %-15d %-10d\n" , w , n[i].id , n[i].nom , n[i].NumroMaillot , n[i].poste , n[i].age , n[i].buts);
            w++;
            break;
        }
    }
}

void tirealpha(int nm)
{
    struct player temp ;
    int j ;
    
    
    for (int i = 0; i < nm ; i++)
    {
        
        temp  = n[i] ;
        j = i ;

        while ( j > 0 && toupper(temp.nom[0]) < toupper(n[j - 1].nom[0]))
        {
            n[ j ] = n[ j - 1] ;
            j-- ;
           
        }
        n[ j ] = temp ;
    }
}

void tireage(int nm)
{
    struct player temp ;
    int j ;
    for (int i = 0; i < nm ; i++)
    {
        temp = n[i] ;
        j = i ;
        while ( j >= 0 && temp.age   < n[ j - 1].age )
        {
            n[ j ] = n[ j - 1];
            j--;
        }
        n[ j ] = temp ;
    }
}



int main()
{
    int chois , NmbrPlayer , Nplajout , found;

    n[7].id = 108 ;
    strcpy(n[7].nom, "Sergio Ramos");
    n[7].NumroMaillot = 4;
    strcpy(n[7].poste, "Defender");
    n[7].age = 39;
    n[7].buts = 100;

    n[6].id = 107 ;
    strcpy(n[6].nom, "Virgil van Dijk");
    n[6].NumroMaillot = 4;
    strcpy(n[6].poste, "Defender");
    n[6].age = 33;
    n[6].buts = 25 ;

    n[1].id = 102 ;
    strcpy(n[1].nom, "Cristiano Ronaldo");
    n[1].NumroMaillot = 7;
    strcpy(n[1].poste, "attacker");
    n[1].age = 38;
    n[1].buts = 850;

    n[2].id = 103 ;    
    strcpy(n[2].nom, "Neymar Jr");
    n[2].NumroMaillot = 11;
    strcpy(n[2].poste, "attacker");
    n[2].age = 32;
    n[2].buts = 450;

    n[3].id = 104 ;
    strcpy(n[3].nom, "Kylian Mbappe");
    n[3].NumroMaillot = 10;
    strcpy(n[3].poste, "attacker");
    n[3].age = 26;
    n[3].buts = 300 ;

    n[4].id = 105 ;
    strcpy(n[4].nom, "Luka Modric");
    n[4].NumroMaillot = 10;
    strcpy(n[4].poste, "Midfielder");
    n[4].age = 39;
    n[4].buts = 100;

    n[10].id = 111 ;
    strcpy(n[10].nom, "Luka Modric");
    n[10].NumroMaillot = 1;
    strcpy(n[10].poste, "Midfielder");
    n[10].age = 33;
    n[10].buts = 0;

    n[9].id = 110 ;
    strcpy(n[9].nom, "Thibaut Courtois");
    n[9].NumroMaillot = 1;
    strcpy(n[9].poste, "Goalkeeper");
    n[9].age = 33;
    n[9].buts = 0;

    n[0].id = 101 ;
    strcpy(n[0].nom, "Lionel Messi");
    n[0].NumroMaillot = 10;
    strcpy(n[0].poste, "attacker");
    n[0].age = 36;
    n[0].buts = 800;

    n[5].id = 106 ;
    strcpy(n[5].nom, "Kevin De Bruyne");
    n[5].NumroMaillot = 17;
    strcpy(n[5].poste, "Midfielder");
    n[5].age = 34;
    n[5].buts = 120;

    n[8].id = 109 ;
    strcpy(n[8].nom, "Manuel Neuer");
    n[8].NumroMaillot = 1;
    strcpy(n[8].poste, "Goalkeeper");
    n[8].age = 39;
    n[8].buts = 0;

    

    

    

    NmbrPlayer = 11 ;

    start:
    do
    {
        printf("-------bienvenu a la menu de gestion dune equip de foot-------");
        printf("\n1 .ajoutr un nouveu joueur .\n2 . afficer la liste de tous les joueurs .\n3 . modifir un joueur .\n4 . suprprimr un joueur .\n5 . rechercher un jouer .\n6 . statistiques du club .");
        printf("\nentrr votre chois : ");
        scanf("%d", &chois);
    } while ( chois < 1 || chois > 6 );

    switch (chois)
    {
    case 1 :
        system("cls");

        do
        {
            printf("-------les type de ajouter-------\n1 . ajouter un seul nouveu joueur .\n2 . ajouter plusieurs des joueur .\nchois : ");
            scanf("%d", &chois);
        } while ( chois < 1 || chois > 2 );

        switch (chois)
        {
        case 1 :
            
            n[NmbrPlayer].id = Id() ;
            printf("entrer le nom et prenom du player : ");
            scanf(" %[^\n]s" , n[NmbrPlayer].nom );
            printf("entrer le NumroMaillo du player : ");
            scanf(" %d" , &n[NmbrPlayer].NumroMaillot );
            do
            {
                printf("entrer le poste du player :\n 1 . attacker  2 . Midfielder  3 . Defender  4 . Goalkeeper");
                printf("\nchois : ");

                scanf("%d" ,&chois);

            } while ( chois < 1 || chois > 4 );
            switch (chois)
            {
            case 1:
                strcpy( n[NmbrPlayer].poste , position1 );
                break;
            case 2:
                strcpy( n[NmbrPlayer].poste , position2 );
                break;
            case 3:
                strcpy( n[NmbrPlayer].poste , position3 );
                break;
            case 4:
                strcpy( n[NmbrPlayer].poste , position4 );
                break;
            
            default:
                break;
            }
            
            
            printf("entrer le age du player : ");
            scanf(" %d" , &n[NmbrPlayer].age );
            printf("entrer le buts du player : ");
            scanf(" %d" , &n[NmbrPlayer].buts );
            NmbrPlayer++ ;

            chois = BackMenu() ;
            if (chois == 1)
            {
                system("cls");
                goto start ;
            }

            break;
        case 2 :

            printf("entrer le nombre des player que tu as ajouter : ");
            scanf("%d" , &Nplajout);

            for (int i = 0; i < Nplajout; NmbrPlayer++ , i++)
            {
                system("cls");
                n[NmbrPlayer].id = Id() ;
                printf("entrer le nom et prenom du player : ");
                scanf(" %[^\n]s" , n[NmbrPlayer].nom );
                printf("entrer le NumroMaillo du player : ");
                scanf(" %d" , &n[NmbrPlayer].NumroMaillot );
                do
                {
                    printf("entrer le poste du player :\n 1 . attacker  2 . Midfielder  3 . Defender  4 . Goalkeeper");
                    printf("\nchois : ");
                    scanf("%d" , &chois);
                } while ( chois < 1 || chois > 4 );
                    switch (chois)
                    {
                    case 1:
                        strcpy( n[NmbrPlayer].poste , position1 );
                        break;
                    case 2:
                        strcpy( n[NmbrPlayer].poste , position2 );
                        break;
                    case 3:
                        strcpy( n[NmbrPlayer].poste , position3 );
                        break;
                    case 4:
                        strcpy( n[NmbrPlayer].poste , position4 );
                        break;
                    default:
                        break;
            }
                printf("entrer le age du player : ");
                scanf(" %d" , &n[NmbrPlayer].age );
                printf("entrer le buts du player : ");
                scanf(" %d" , &n[NmbrPlayer].buts );
            } 
            chois = BackMenu ();
            if (chois == 1 )
            {
                system("cls");
                goto start ;
            }
            break;
        
        default:
            break;
        }
        
        
        break;
    case 2 :
        do
        {
           printf("-------chois comment tu vas trier les joueur-------\n1 . trier par nom .\n2 . trier les joueur par age .\n3 . trier les joueur par poste\nchois : ");
           scanf("%d" , &chois);
        } while ( chois < 1 || chois > 3);

        switch (chois)
        {
        case 1 :
            
            tirealpha(NmbrPlayer);

            printf("\n%-5s %-10s %-15s %-15s %-15s %-10s%10s\n", "No", "ID", "Nom", "Maillot", "Poste", "Age", "Buts");
            for (int i = 0 ; i < NmbrPlayer ; i++)
            {
                printf("%-5d %-10d %-20s %-10d %-15s %-15d %-10d\n" , i + 1 , n[i].id , n[i].nom , n[i].NumroMaillot , n[i].poste , n[i].age , n[i].buts);
            }
            
            
            chois = BackMenu() ;
            if (chois == 1)
            {
                system("cls");
                goto start ;
            }

            break;
        case 2 :
        
            tireage(NmbrPlayer);

            printf("\n%-5s %-10s %-15s %-15s %-15s %-10s%10s\n", "No", "ID", "Nom", "Maillot", "Poste", "Age", "Buts");
            for (int i = 0 ; i < NmbrPlayer ; i++)
            {
                printf("%-5d %-10d %-20s %-10d %-15s %-15d %-10d\n" , i + 1 , n[i].id , n[i].nom , n[i].NumroMaillot , n[i].poste , n[i].age , n[i].buts);
            }

            
            chois = BackMenu ();
            if (chois == 1 )
            {
                system("cls");
                goto start ;
            }
            break;
        case 3 :
            printf("--------------attacker--------------");
            tireposition(NmbrPlayer , position1);
            printf("--------------Midfielder--------------");
            tireposition(NmbrPlayer , position2);
            printf("--------------Defender--------------");
            tireposition(NmbrPlayer , position3);
            printf("--------------Goalkeeper--------------");
            tireposition(NmbrPlayer , position4);
            
            chois = BackMenu ();
            if (chois == 1 )
            {
                system("cls");
                goto start ;
            }
            break;
        
        default:
            break;
        }
        
        
        break;
    case 3 :
        system("cls");
        recherche(NmbrPlayer);
        printf("%-5d %-10d %-20s %-10d %-15s %-15d %-10d\n" , 1 , n[indis[0]].id , n[indis[0]].nom , n[indis[0]].NumroMaillot , n[indis[0]].poste , n[indis[0]].age , n[indis[0]].buts);

        
        do
        {
            printf("qoit tu va changer .\n 1 . modifier le post dun joueur .\n 2 . modifier lage dun joueur .\n 3 . Modifier le nombre de buts marques par un joueur.\n chois : ");
            scanf("%d" , &chois);
        } while ( chois < 1 || chois > 3 );
        switch (chois)
        {
        case 1:

            /*printf("entrer le NumroMaillo du player : ");
            scanf(" %d" , &n[NmbrPlayer].NumroMaillot );*/
            do
            {
                printf("entrer le new poste du player :\n 1 . attacker  2 . Midfielder  3 . Defender  4 . Goalkeeper");
                printf("\nchois : ");
                scanf("%d" , &chois);
            } while ( chois < 1 || chois > 4 );
                switch (chois)
                {
                case 1:
                    strcpy( n[indis[0]].poste , position1 );
                    break;
                case 2:
                    strcpy( n[indis[0]].poste , position2 );
                    break;
                case 3:
                    strcpy( n[indis[0]].poste , position3 );
                    break;
                case 4:
                    strcpy( n[indis[0]].poste , position4 );
                    break;
                default:
                    break;
                }
                chois = BackMenu ();
                if (chois == 1 )
                {
                    system("cls");
                    goto start ;
                }
                
                break;
            case 2:
                
                break;
            case 3:
                
                break;
            
            default:
                break;
            }
            

        
        
        
        
        
        break;
    case 4 :
        
        break;
    case 5 :
        
            recherche(NmbrPlayer);
            printf("\n%-5s %-10s %-15s %-15s %-15s %-10s%10s\n", "No", "ID", "Nom", "Maillot", "Poste", "Age", "Buts");
            for (int i = 0; indis[i] != 0 ; i++)
            {
                printf("%-5d %-10d %-20s %-10d %-15s %-15d %-10d\n" , i + 1 , n[indis[i]].id , n[indis[i]].nom , n[indis[i]].NumroMaillot , n[indis[i]].poste , n[indis[i]].age , n[indis[i]].buts);
            }
        chois = BackMenu ();
        if (chois == 1 )
        { 
            system("cls");
            goto start ;
        }
        break;
    case 6 :
        
        break;
    
    
    default:
        break;
    }
    


}