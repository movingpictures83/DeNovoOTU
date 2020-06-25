# DeNovoOTU
# Language: C++
# Input: FNA
# Output: DIR
# Tested with: PluMA 1.0, GCC 4.8.4

Group a set of sequences into OTUs using de novo clustering (Caporaso et al, 2010).

The input set of sequences should be a single, demultiplexed FNA file.

In the output directory, the plugin will produce several files which will in turn
be copied to the parent folder; including a phylogenetic tree, the final OTU results,
a basic summary of the run, a parameter file for clustering, taxonomic assignments
in a BIOM table, and forward and reverse aligned sequences.


