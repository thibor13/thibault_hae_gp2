// 1stStepGP2.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <string>
#include"Vec2.hpp"

using namespace std;

class Vec3 {
    float x = 0.0f;
    float y = 0.0f;
    float z = 0.0f;
};

int main()
{
    //std::cout << "Hello World!\n";
    //printf("Hello World\n");
    //std::cout << "Hello World!" << std::endL;
    printf("0\n");
    printf("0.5\n");
    printf("toto\n");
    
    int toto = 666;
    printf("vade retro satanas%d\n", toto);
    int nope = 0;

    std::cout << std::to_string(toto) << endl;
    int sapin = 0;

    Vec2 f;
    f.x = 5;
    f.y = 6;
    cout << to_string(f.x) << " to " << to_string(f.y);
   // printf("x=%f y=%f\n", f.x, f.y);

    Vec2 f1(66, 67);
    printf("x=%f y=%f\n", f1.x, f1.y);
    Vec2 f12 = f.mul(f1);
    printf("x=%f y=%f\n", f12.x, f12.y);
    auto endl = 0;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
