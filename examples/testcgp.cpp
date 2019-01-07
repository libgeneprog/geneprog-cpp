//g++ -Wall -o testcgp.out testcgp.cpp -lgeneprog-cpp
#include "geneprog-cpp/cgpgene.hpp"

#include <iostream>

int main()
{
	std::cout<<"Making CGP Gene"<<std::endl;
	CGPGene gene(3,3,3);

	double in[3] = {1,2,3};
	double out[3];

	std::cout<<"Evaluating"<<std::endl;
	gene.evaluate(in, out);

	std::cout<<"Output:"<<std::endl;
	for(int i=0; i<3; i++){
		std::cout<<"\t"<<out[i]<<std::endl;
	}

	return 0;
}
