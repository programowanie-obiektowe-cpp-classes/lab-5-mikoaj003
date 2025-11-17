#pragma once

#include "Human.hpp"

#include <list>
#include <vector>

std::vector< char > foo(std::list< Human >& people)
{
    std::vector< char > vektor(people.size(), 0);
    char                y = 'y';
    char                n = 'n';
    int                 index = 0;


    for (auto it = people.begin(); it != people.end(); ++it, ++index) {
        
        // age++
        it->birthday();

        if (it->isMonster() == true) {
            vektor[people.size() - index - 1] = n;
        }
        if (it->isMonster() == false) {
            vektor[people.size() - index - 1] = y;
        }
    }

    return { vektor};
}
