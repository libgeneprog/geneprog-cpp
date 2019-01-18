#ifndef _GENEPROG_BSTGENE_
#define _GENEPROG_BSTGENE_

#include "geneprog/gene.h"
#include "geneprog/bst-data.h"

/**
 * A gene that represents a number of
 * [binary syntax trees](https://en.wikipedia.org/wiki/Binary_expression_tree).
 * The gene will have one tree per output.
 */
class BSTGene
{
private:
	GP_Gene* gene;

public:

	/**
	 * @param in The number of inputs the gene will receive during evaluation
	 * @param depth The max depth for the tree
	 * @param out The number of outputs the gene will make during evaluation
	 */
	BSTGene(int in, int depth, int out);
	~BSTGene();

	/**
	 * Evaluates the binary syntax tree against the inputs,
	 * and assigns the result to outputs.
	 * *NOTE:* It is assumed that outputs was already declared, initialized,
	 * and matches the number of outputs when the gene was built.
	 * @param inputs The inputs to use for the syntax tree.
	 * @param outputs A pointer to an array of where to store the results.
	 */
	void evaluate(double *inputs, double *outputs);
};

#endif
