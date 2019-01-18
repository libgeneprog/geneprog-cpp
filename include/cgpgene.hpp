#ifndef _GENEPROG_CGPGENE_
#define _GENEPROG_CGPGENE_

#include "geneprog/gene.h"
#include "geneprog/cgp-data.h"

/**
 * A gene that represents a [cartesian gene](https://www.cartesiangp.com/)
 */
class CGPGene
{
private:
	GP_Gene* gene;

public:
	/**
	 * @param in The number of inputs the gene will receive during evaluation
	 * @param mid The number of middle nodes for the CGP gene
	 * @param out The number of outputs the gene will make during evaluation
	 */
	CGPGene(int in, int mid, int out);
	~CGPGene();

	/**
	 * Evaluates the cgp gene against the inputs,
	 * and assigns the result to outputs.
	 * *NOTE:* It is assumed that outputs was already declared, initialized,
	 * and matches the number of outputs when the gene was built.
	 * @param inputs The inputs to use for the syntax tree.
	 * @param outputs A pointer to an array of where to store the results.
	 */

	void evaluate(double *inputs, double *outputs);
};

#endif
