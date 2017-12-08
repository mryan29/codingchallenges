#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void usage(const char *program_name, int status) {

	fprintf(stderr, "Usage: %s BOOKFILE GENREFILE\n", program_name);
	exit(status);

}

int main(int argc, char *argv[]) {

	char * bookFile = argv[1];
	char * genreFile = argv[2];

	return EXIT_SUCCESS;

	

}
