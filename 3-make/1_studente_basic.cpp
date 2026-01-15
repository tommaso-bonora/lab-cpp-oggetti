#include <iostream>
#include <string>
using namespace std;

/***************************************************************************
 *                      Utilizzo della classe studente                    */

class Studente {
public:
    string nome;
    int eta;
    float media;

    void stampaStudente(){
        cout << "Nome: " << nome << ", eta: " << eta << ", media: " << media << endl;

    }
};

int main()
{
    /*********************** Creazione di oggetti ******************************/
Studente m;
m.nome="Mario";
m.eta=17;
m.media=7;

Studente s2;
Studente *p=&s2;
p->nome="Maria";
p->eta=18;
p->media=8;
m.stampaStudente();
p->stampaStudente();


    /************************** Visualizzazione ********************************/
    // TODO Visualizzare il nome e la media sia di Mario che Maria

    return 0;
}
