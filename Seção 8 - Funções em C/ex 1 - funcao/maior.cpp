//maior.cpp

//maior valor
int maior (int vet[]){
	int maior=0;
	for (int i=0; i<10; i++){
		if (vet[i]> maior){
			maior = vet[i];
		}
	}
	return maior;
}

