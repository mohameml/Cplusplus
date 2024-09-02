#include "Dvector.h"
#include <iostream>
#include <random>
#include <fstream>

Dvector::Dvector()
{
}

Dvector::Dvector(int length, double value)
{
    this->vect = new double[length];
    this->length = length;
    for (int i = 0; i < length; i++)
    {
        this->vect[i] = value;
    }
}

Dvector::~Dvector()
{
    delete[] this->vect;
}

Dvector::Dvector(std::string chemin)
{
    std::ifstream file(chemin);

    if (!file.is_open())
    { // Vérifie si le fichier a été ouvert correctement
        std::cerr << "Impossible d'ouvrir le fichier !" << std::endl;
        this->length = 0;
        this->vect = NULL;
    }
    else
    {
        // length :
        int len;
        double d;
        while (!file.eof())
        {
            file >> d;
            len++;
        }

        this->length = len;
        this->vect = new double[len];

        file.clear();
        file.seekg(0, std::ios::beg);

        for (int i = 0; i < len; i++)
        {
            file >> this->vect[i];
        }

        file.close();
    }
}

void Dvector::display(std::ostream &str)
{
    for (int i = 0; i < this->length; i++)
    {
        str << this->vect[i] << "\n";
    }
}

int Dvector::size()
{
    return this->length;
}

void Dvector::fillRandomly()
{
    // Création d'un générateur de nombres aléatoires basé sur l'horloge
    std::random_device rd;  // Obtenir une valeur aléatoire non déterministe
    std::mt19937 gen(rd()); // Initialiser le générateur de nombres pseudo-aléatoires avec rd()

    // Définir une distribution uniforme entre 0 et 1
    std::uniform_real_distribution<> dis(0.0, 1.0);

    for (int i = 0; i < this->length; i++)
    {

        // Générer un nombre aléatoire
        double random_number = dis(gen);

        this->vect[i] = random_number;
    }
}

Dvector::Dvector(const Dvector &auther)
{
    this->length = auther.length;
    this->vect = new double[this->length];

    for (int i = 0; i < this->length; i++)
    {
        this->vect[i] = auther.vect[i];
    }
}