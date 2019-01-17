#include "bstgene.hpp"

BSTGene::BSTGene(int in, int depth, int out)
{
	// TODO: Take in/mid/out as constructor inputs:
	this->gene = GP_BST_alloc(in, depth, out);
	GP_BST_randomize(this->gene);
}

BSTGene::~BSTGene()
{
	GP_BST_free(this->gene);
}

void BSTGene::evaluate(double *inputs, double *outputs)
{
	this->gene->evaluate(inputs, outputs, gene->data);
}
