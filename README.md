# pdb2fasta in C

Extracts the fasta sequence from protein stored in a PDB file.

This is a tool inspired by Pierre Poulain's pdb2fasta in bash
article c.f.: [https://cupnet.net/pdb2fasta/](https://cupnet.net/pdb2fasta/)
The tool outlined there however has several quriks and fails on 
PDB files such as [7VWC](https://www.rcsb.org/structure/7VWC), and might be 
better called pdb2fasta in bash,awk,sed,etc. than pdb2fasta in bash.

In order to overcome this problem here a hopefully better, more standard
conformant tool in C.

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
