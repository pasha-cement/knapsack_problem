//
//  knapsack_problem
//
//  Created by Павел
//
#include <iostream>
#include <fstream>
#include "mdckp.hpp"


int main(int argc, char* argv[]){
{
    mdckp::MDCKProblem p = mdckp::MDCKProblem::readFromIstream(std::cin);
    mdckp::solve(p);
    std::cout << p.solutionToString() << std::endl;
    return 0;
}
