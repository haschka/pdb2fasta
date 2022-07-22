# pdb2fasta in C

Extracts the fasta sequence from protein stored in a PDB file.

This is a tool inspired by Pierre Poulain's pdb2fasta in bash
article c.f.: [https://cupnet.net/pdb2fasta/](https://cupnet.net/pdb2fasta/)
The tool outlined in this article however has several quriks and fails on 
PDB files such as [7VWC](https://www.rcsb.org/structure/7VWC). 
Actually it is also pdb2fasta in bash,awk,sed,etc. than pdb2fasta simply in bash. 

I thought it is time to join the pdb2fasta game and write my own. 

As such, here, a hopefully better, more standard conformant tool in C.
( and nothing but C ) 

### Compilation:
compile with the c compilier of your choice, here gcc
```
gcc pdb2fasta.c -o pdb2fasta
```
you may add compilier flags, for a ultra high performant
converter tool. 

### Usage:
```
./pdb2fasta yourpdbfile.pdb
```
should print a fasta formatted file to stdout
with one sequence specification per chain. 

### Special Features:
The tool omits strcmp() or other string comparisons functions
by usage of 4 bytes integers that can store just enough data 
to hold a 3 character long C-string.
