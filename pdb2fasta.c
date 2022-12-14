#include<stdio.h>
#define N_AMINO_ACIDS 21

typedef union {
  int value;
  char aa3[4];
} aa_string_value;

aa_string_value amino_acid_table[N_AMINO_ACIDS];

                             /*012345678901234567890 */
char single_letter_string[] = "AVFPMILDEKRSTYHCNQWGM";

static inline void init_string_table() {

  /* A */
  
  amino_acid_table[0].aa3[0] = 'A';
  amino_acid_table[0].aa3[1] = 'L';
  amino_acid_table[0].aa3[2] = 'A';
  amino_acid_table[0].aa3[3] = 0;
  
  /* V */
  
  amino_acid_table[1].aa3[0] = 'V';
  amino_acid_table[1].aa3[1] = 'A';
  amino_acid_table[1].aa3[2] = 'L';
  amino_acid_table[1].aa3[3] = 0;
  
  /* F */
  
  amino_acid_table[2].aa3[0] = 'P';
  amino_acid_table[2].aa3[1] = 'H';
  amino_acid_table[2].aa3[2] = 'E';
  amino_acid_table[2].aa3[3] = 0;

  /* P */
  
  amino_acid_table[3].aa3[0] = 'P';
  amino_acid_table[3].aa3[1] = 'R';
  amino_acid_table[3].aa3[2] = 'O';
  amino_acid_table[3].aa3[3] = 0;

  /* M */
  
  amino_acid_table[4].aa3[0] = 'M';
  amino_acid_table[4].aa3[1] = 'E';
  amino_acid_table[4].aa3[2] = 'T';
  amino_acid_table[4].aa3[3] = 0;

  /* I */
  
  amino_acid_table[5].aa3[0] = 'I';
  amino_acid_table[5].aa3[1] = 'L';
  amino_acid_table[5].aa3[2] = 'E';
  amino_acid_table[5].aa3[3] = 0;

  /* L */
  
  amino_acid_table[6].aa3[0] = 'L';
  amino_acid_table[6].aa3[1] = 'E';
  amino_acid_table[6].aa3[2] = 'U';
  amino_acid_table[6].aa3[3] = 0;

  /* D */
  
  amino_acid_table[7].aa3[0] = 'A';
  amino_acid_table[7].aa3[1] = 'S';
  amino_acid_table[7].aa3[2] = 'P';
  amino_acid_table[7].aa3[3] = 0;

  /* E */
  
  amino_acid_table[8].aa3[0] = 'G';
  amino_acid_table[8].aa3[1] = 'L';
  amino_acid_table[8].aa3[2] = 'U';
  amino_acid_table[8].aa3[3] = 0;

  /* K */
  
  amino_acid_table[9].aa3[0] = 'L';
  amino_acid_table[9].aa3[1] = 'Y';
  amino_acid_table[9].aa3[2] = 'S';
  amino_acid_table[9].aa3[3] = 0;

  /* R */
  
  amino_acid_table[10].aa3[0] = 'A';
  amino_acid_table[10].aa3[1] = 'R';
  amino_acid_table[10].aa3[2] = 'G';
  amino_acid_table[10].aa3[3] = 0;

  /* S */
  
  amino_acid_table[11].aa3[0] = 'S';
  amino_acid_table[11].aa3[1] = 'E';
  amino_acid_table[11].aa3[2] = 'R';
  amino_acid_table[11].aa3[3] = 0;

  /* T */
  
  amino_acid_table[12].aa3[0] = 'T';
  amino_acid_table[12].aa3[1] = 'H';
  amino_acid_table[12].aa3[2] = 'R';
  amino_acid_table[12].aa3[3] = 0;

  /* Y */
  
  amino_acid_table[13].aa3[0] = 'T';
  amino_acid_table[13].aa3[1] = 'Y';
  amino_acid_table[13].aa3[2] = 'R';
  amino_acid_table[13].aa3[3] = 0;

  /* H */
  
  amino_acid_table[14].aa3[0] = 'H';
  amino_acid_table[14].aa3[1] = 'I';
  amino_acid_table[14].aa3[2] = 'S';
  amino_acid_table[14].aa3[3] = 0;

  /* C */
  
  amino_acid_table[15].aa3[0] = 'C';
  amino_acid_table[15].aa3[1] = 'Y';
  amino_acid_table[15].aa3[2] = 'S';
  amino_acid_table[15].aa3[3] = 0;

  /* N */
  
  amino_acid_table[16].aa3[0] = 'A';
  amino_acid_table[16].aa3[1] = 'S';
  amino_acid_table[16].aa3[2] = 'N';
  amino_acid_table[16].aa3[3] = 0;

  /* Q */

  amino_acid_table[17].aa3[0] = 'G';
  amino_acid_table[17].aa3[1] = 'L';
  amino_acid_table[17].aa3[2] = 'N';
  amino_acid_table[17].aa3[3] = 0;

  /* W */

  amino_acid_table[18].aa3[0] = 'T';
  amino_acid_table[18].aa3[1] = 'R';
  amino_acid_table[18].aa3[2] = 'P';
  amino_acid_table[18].aa3[3] = 0;

  /* G */

  amino_acid_table[19].aa3[0] = 'G';
  amino_acid_table[19].aa3[1] = 'L';
  amino_acid_table[19].aa3[2] = 'Y';
  amino_acid_table[19].aa3[3] = 0;

  /* M */

  amino_acid_table[20].aa3[0] = 'M';
  amino_acid_table[20].aa3[1] = 'S';
  amino_acid_table[20].aa3[2] = 'E';
  amino_acid_table[20].aa3[3] = 0;

}

char get_single_letter_from_three_letter(aa_string_value three_letter_code) {

  int i = 0;

  while(amino_acid_table[i].value != three_letter_code.value &&
	i < N_AMINO_ACIDS ) i++;

  if(i==N_AMINO_ACIDS) {
    return 'X';
  }
  return single_letter_string[i];
}   
    
int main(int argc, char** argv) {
  
  FILE* f; 

  char* line = NULL;
  size_t linesize = 0;

  aa_string_value current_amino_acid;

  int current_res_code;
  int previous_res_code = -1;
  
  char chain;
  char current_chain = 0;

  int linecounter = 0;

  if(argc < 2) {
    printf("Usage: \n"
	   "  $ %s yourpdbfile.pdb\n", argv[0]);
    return(1);
  }
  
  init_string_table();

  f = fopen(argv[1],"r");
  
  while(getline(&line, &linesize, f) != -1) {

    if (linesize > 4) {
      
      if ( line[0] == 'A' &&
	   line[1] == 'T' &&
	   line[2] == 'O' &&
	   line[3] == 'M' ) {

	sscanf(line+17,"%3s %c%4i",
	       current_amino_acid.aa3,
	       &chain,&current_res_code);
	
	if (current_chain != chain) {
	  if(linecounter != 0) printf("\n");
	  printf("> %s chain %c\n",argv[1],chain);
	  current_chain = chain;
	  linecounter = 0;
	}

	if(current_res_code != previous_res_code) {
	  putchar(get_single_letter_from_three_letter(current_amino_acid));
	  previous_res_code = current_res_code;
	  linecounter++;
	}
	
	if(linecounter == 50) {
	  printf("\n");
	  linecounter = 0;
	}
      }
    }
  }
  printf("\n");
  fclose(f);
  return(0);
}
