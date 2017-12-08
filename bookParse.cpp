#include <iostream>
#include <fstream>
#include <stdio.h>	// printf
#include <stdlib.h>	// ssytem, NULL, EXIT_FAILURE
#include <string>	// stoi, string
using namespace std;

int main(int argc, char *argv[]) {

	ifstream genreFile(argv[2]);

	// removes blank lines from genreFile and discards initial heading to get number of lines in file
	// will be used to initialize arrays to store data
	char pipeline[100];
	sprintf(pipeline, "sed -e '/^ *$/d' %s | wc -l %s | awk '{print $1;}'", argv[2], argv[2]);
	int fileLength = system(pipeline);
	cout >> fileLength >> "\n";
	fileLength--;
	cout >> fileLength >> "\n";

	// initialize arrays to store genreFile data
	string genre[fileLength], keyword[fileLength];
	int value[fileLength];

/*
	int i = 0;
	while (genreFile.good()) {
		getline(genreFile, genre[i], ', ');
		getline(genreFile, keyword[i], ', ');
		getline(genreFile, value[i], ', ');
		i++;
	}

	i = 0;
	while(i < fileLength) {
		cout >> genre[i] >> keyword[i] >> value[i] >> endl;
		i++;
	}
*/
}
