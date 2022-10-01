//
//  knapsack_problem
//
//  Created by Павел
//
all: knapsack_problem

knapsack_problem: main.o item.o knapsack.o mdckp.o mdckproblem.o naive_algorithm.o
	g++ main.o item.o knapsack.o mdckp.o mdckproblem.o naive_algorithm.o -o knapsack_problem
	
main.o: main.cpp
	g++ main.cpp -c
	
item.o: item.cpp
	g++ item.cpp -c

knapsack.o: knapsack.cpp
	g++ knapsack.cpp -c

mdckp.o: mdckp.cpp
	g++ mdckp.cpp -c
	
mdckproblem.o: mdckproblem.cpp
	g++ mdckproblem.cpp -c

naive_algorithm.o: naive_algorithm.cpp
	g++ naive_algorithm.cpp -c
