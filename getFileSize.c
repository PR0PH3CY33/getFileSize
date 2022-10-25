
#include <stdio.h>

#include <stdlib.h>

#include <sys/types.h>

#include <sys/stat.h>

#include <fcntl.h>

#include <unistd.h>



int main(int argc, char *argv[]) {

	if(argv[1] == "") {

		exit(0);

	}

	else {

		int fileFD = open(argv[1], O_RDONLY);

		if(fileFD > 0) {

			off_t fileSize = lseek(fileFD, 0, SEEK_END);

			printf("%d\n", fileSize);
		}

		else {

			exit(0);

		}

	}

}
