#ifdef NAMES_H_
	#define NAMES_H_

#define SIZE 32
struct name_at{
	char first[SIZE];
	char last[SIZE];
}

typedef struct name_at names;

void get_names(names*);
void show_names(names*);
char* s_gets(char* str,int n);
#endif
