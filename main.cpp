#include <iostream>

using namespace std;

int main()
{
    //Ce programme demande à l'utilisateur de saisir un nombre et lui renvoie son double
    int choixNombreUtilisateur(0);
    
    cout<<"Choissisez un nombre." << endl;
    
    cin >> choixNombreUtilisateur;
    
    cout << choixNombreUtilisateur*2 << endl;
    
    return(0);
}