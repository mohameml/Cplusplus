#ifndef _DVECTOR_H_
#define _DVECTOR_H_

#include <iostream>

/**
 * \file Dvector.h
 * \brief Vector of double
 * \author Nebil
 * \version 1.0
 * \date 28/08/2024
 * \details the user could use vector of double in his project
 */

/**
 * \class Dvector
 * \brief class of Dvcetor
 *
 */
class Dvector
{
private:
    int length;
    int static precision;
    double *vect;

public:
    Dvector();

    Dvector(int length, double value = 0.);

    Dvector(const Dvector &autre);

    Dvector(std::string chemin);

    ~Dvector();

    void display(std::ostream &str);

    int size();

    void fillRandomly();
};

#endif