#include "cgpgene.hpp"

CGPGene::CGPGene(int in, int mid, int out)
{
	// TODO: Take in/mid/out as constructor inputs:
	this->gene = GP_CGP_alloc(in, mid, out);
	GP_CGP_randomize(this->gene);
}

CGPGene::~CGPGene()
{
	GP_CGP_free(this->gene);
}

void CGPGene::evaluate(double *inputs, double *outputs)
{
	this->gene->evaluate(inputs, outputs, gene->data);
}
