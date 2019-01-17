#ifndef _GENEPROG_BSTGENE_
#define _GENEPROG_BSTGENE_

#include "geneprog/gene.h"
#include "geneprog/bst-data.h"

class BSTGene
{
private:
	GP_Gene* gene;

public:
	BSTGene(int in, int depth, int out);
	~BSTGene();

	void evaluate(double *inputs, double *outputs);
};

#endif
