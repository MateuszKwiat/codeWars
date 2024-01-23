#include <string>

std::string DNAtoRNA(std::string dna){
  int pos;
  
  while ((pos = dna.find('T')) != std::string::npos)
    dna[pos] = 'U';
  
  return dna;
}