#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 10
#define MAX_PEOPLE 10
int howMany = 0;

typedef struct  {
    char title[50];
    char author[50];
    char borrowDate[50];
    char returnDate[50];
}Book;


typedef struct {
    char name[50];
    char surname[50];
    int howManyBooks;
    Book books[MAX_BOOKS];
} Person;

void addPerson(Person czlonk[]){
    Person person;
    printf("Wypisz imie: \n");
    scanf("%s",person.name);
    printf("Wypisz nazwisko: \n");
    scanf("%s",person.surname);
    person.howManyBooks = 0;
    czlonk[howMany] = person;
    howMany++;
}

int addBook(Person *person){
    if(person->howManyBooks > MAX_BOOKS){
        printf("Nie mozna dodac wiecej ksiazek\n");
        return 0;
    }

    printf("Wypisz tytul: \n");
    scanf("%s",person->books[person->howManyBooks].title);
    printf("Wypisz autora: \n");
    scanf("%s",person->books[person->howManyBooks].author);
    printf("Wypisz date wypozyczenia: \n");
    scanf("%s",person->books[person->howManyBooks].borrowDate);
    printf("Wypisz date oddania: \n");
    scanf("%s",person->books[person->howManyBooks].returnDate);

    person->howManyBooks++;
    return 0;
}

void showPerson(Person *person){
    printf("Imie: %s\nNazwisko: %s\nIle wypozyczonych: %i\n",person->name,person->surname,person->howManyBooks);
}

int main()
{
    Person czlonk[MAX_PEOPLE];
    char c[1];
    c[0] = '\0';
    while((c[0] = getchar()) != EOF){
        if(c[0] == 'a'){
            addPerson(&czlonk);
            //printf("%s\n",czlonk[howMany - 1].name);
        }
        else if(c[0] == 'b'){
            printf("Wypisz numer czlowieka: \n");
            int x;
            scanf("%i",&x);
            addBook(&czlonk[x]);
            //printf("%s\n",czlonk[x].books[0].author);
        }
        else if(c[0] == 'c'){
            printf("Wypisz numer czlowieka: \n");
            int x;
            scanf("%i",&x);
            showPerson(&czlonk[x]);
        }

    }

}