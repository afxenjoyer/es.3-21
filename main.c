#include <stdio.h>

int main(void)
{
    int giorno;
    int mese;
    int anno;

    printf("Inserisci il giorno della data da verificare\n");
    scanf("%d",&giorno);
    printf("Inserisci il mese della data da verificare\n");
    scanf("%d",&mese);
    printf("Inserisci l'anno della data da verificare\n");
    scanf("%d",&anno);

    if (mese >= 1 && mese <= 12 && giorno < 32)
    {
        if (mese == 2)
        {
            if (giorno > 28)
            {
                printf("La data digitata è sbagliata\n");
            }
            // (anno%4 == 0) check per controllare se l'anno è bisestile
            else if (giorno > 29 && anno%4 == 0)
            {
                if(anno%100 == 0 && anno%400 == 0){
                    printf("La data digitata è sbagliata\n");
                }
                else{
                    printf("La data digitata è corretta\n");
                }
                printf("La data digitata è sbagliata\n");
            }
            else
            {
                printf("La data digitata è corretta\n");
            }
        }
        else if (mese == 4 || mese == 6 || mese == 9 || mese == 11)
        {
            if (giorno > 30)
            {
                printf("La data digitata è sbagliata\n");
            }
            else
            {
                printf("La data digitata è corretta\n");
            }
        }
    }
    else
    {
        printf("La data digitata è sbagliata\n");
    }
    return 0;
}
