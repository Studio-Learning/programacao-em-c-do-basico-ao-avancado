#include "game.h"
#include <ctime>       // Para time()
#include <cstdlib>     // Para srand() e rand()
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	srand(time(NULL));
	jogar();
	return 0;
}
