/*
Afficher toutes les manières possibles d’obtenir un euro avec des pièces de 2 cents, 5 cents et 10 cents. Dire combien de possibilités ont été ainsi trouvées.
Rappelons que l’insertion dans le flot cout d’une expression de la forme setw(n, où n est une expression entière, demande de réaliser l’affichage suivant (et uniquement ce dernier) sur n caractères au minimum. L’emploi de setw nécessite l’inclusion du fichier iomanip.
*/

#include <iostream>
using namespace std ;
int main()
{
    int u1, u2, u3 ; /* pour "parcourir" la suite */
    int n ; /* rang du terme demandé */
    int i ; /* compteur */
    do
        { cout << "rang du terme demandé (au moins 3) ? " ;
        cin >> n ;
        }
    while (n<3) ;
    u2 = u1 = 1 ; /* les deux premiers termes */
    i = 2 ;
    while (i++ <= n) /* attention, l'algorithme ne fonctionne */
        { u3 = u1 + u2 ; /* que pour n > 2 */
        u1 = u2 ;
        u2 = u3 ;
        }
// autre formulation possible :
// for (i=3 ; i<=n ; i++, u1=u2, u2=u3) u3 = u1 + u2 ;
    cout << "Valeur du terme de rang " << n << " : " << u3 ;
}

/*Résultat :
rang du terme demandé (au moins 3) ? 21
Valeur du terme de rang 21 : 17711

=== Code Execution Successful ===
*/
