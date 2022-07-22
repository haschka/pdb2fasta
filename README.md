# pdb2fasta in C

Extracts the fasta sequence from protein stored in a PDB file.

This is a tool inspired by Pierre Poulain's pdb2fasta in bash
article c.f.: [https://cupnet.net/pdb2fasta/](https://cupnet.net/pdb2fasta/)
The tool outlined in this article however has several quriks and fails on 
PDB files such as [7VWC](https://www.rcsb.org/structure/7VWC). Further might be 
better called pdb2fasta in bash,awk,sed,etc. than pdb2fasta in bash. 
I thought it is time to join the pdb2fasta game and write my own. 

As such, here, a hopefully better, more standard conformant tool in C.

### compilation
compile with the c compilier of your choice, here gcc
```
gcc pdb2fasta.c -o pdb2fasta
```
you may add compilier flags of your choice

### usage
```
./pdb2fasta yourpdbfile.pdb
```
should print a fasta formatted file to stdout
with one sequence specification per chain. 

### special features
The tool omits strcmp() or other string comparisons functions
by usage of 4 bytes integers that can store just enough data 
to hold a 3 character long C-string.
