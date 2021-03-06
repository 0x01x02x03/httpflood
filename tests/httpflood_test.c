
#include "httpflood.h"

int main(int argc, const char **argv){
	printf("%s %d.%d.%d (%s %s)\n", PROJECT_NAME,
		PROJECT_VERSION_MAJOR, PROJECT_VERSION_MINOR, PROJECT_VERSION_PATCH,
		__DATE__, __TIME__);
	printf("%s\n", PROJECT_COPYRIGHT);
	puts("");
	
#ifdef DEBUG
	puts("is DEBUG");
#else
	puts("NOT DEBUG");
#endif
#ifdef SEND
	puts("is SEND");
#else
	puts("not SEND");
#endif
	puts("");
	
	printf("getuid: %p\n", getuid);
	printf("user: %d\n", getuid());
	printf("atoi(): %p\n", atoi);
	
#ifdef htons
	printf("htons(1024): %s\n", htons(1024) == 4 ? "ok" : "N/A");
#else
	printf("htons(): N/A\n");
#endif
	
	printf("setsockopt(): %p\n", setsockopt);
	printf("inet_addr(): %p\n", inet_addr);
	printf("connect(): %p\n", connect);
	printf("send(): %p\n", send);
	
	return EXIT_SUCCESS;
}
