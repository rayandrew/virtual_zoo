#include "Amphibi.h"

Amphibi::Amphibi(int x_, int y_, string name_, bool tamed_, float weight_, string foodype_, string habitat) : 
			Animal(x_, y_, name_, tamed_, weight_,foodype_,habitat){

}

Amphibi::Amphibi(const Amphibi&) {

}

Amphibi::~Amphibi() {

}

Amphibi& Amphibi::operator=(const Amphibi&) {

}

void Amphibi::interact(){
	
}