#ifndef _GENEPROG_CGPGENE_
#define _GENEPROG_CGPGENE_

#include "geneprog/gene.h"
#include "geneprog/cgp-data.h"

class CGPGene
{
private:
	GP_Gene* gene;

public:
	CGPGene(int in, int mid, int out);
	~CGPGene();

	void evaluate(double *inputs, double *outputs);
};

#endif
