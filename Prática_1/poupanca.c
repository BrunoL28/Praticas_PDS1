#include <stdio.h>
void main() {
     float a;
	 a = 789.54;
	 a = a + (a * 0.0056);
	 //segundo mes
	 a = a + 303.20;
	 a = a + (a * 0.0056);
	 //terceiro mes
	 a = a - 58.25;
	 a = a + (a * 0.0056);
	 // quarto mes
	 printf("o valor da poupana eh: %f", a);
}