#include <stdio.h>
void main() {
	float mb, hb, brutus;
	mb = 122;
	hb = 1.84;
	brutus = mb / (hb * hb);
	float mo, ho, olivia;
	mo = 45;
	ho = 1.76;
	olivia = mo / (ho * ho);
	float brutusok, mbok;
	mbok = 25 * (1.84 * 1.84);
	brutusok = mb - mbok;
	float oliviaok, mook;
	mook = 18.5 * (1.76 * 1.76);
	oliviaok = mook - mo;
	printf("o imc do brutus eh: %f\n", brutus);
	printf("o imc de olivia eh: %f\n", olivia);
	printf("brutus deve perder em quilos: %f\n", brutusok);
	printf("olivia deve ganhar em quilos: %f", oliviaok);
}

