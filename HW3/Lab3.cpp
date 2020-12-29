#include <stdio.h>
#include <unistd.h>
#include <map>
#include <string>
#include <getopt.h>

using namespace std;

int main(int argc, char *argv[]){
    int a=0;
	map <string, bool> used;

	int option_index = -1;
	const char* short_options = "hlvgnpV::?";
	
	const struct option long_options[] = {
        {"help",0,NULL,'h'},
        {"list",0,NULL,'l'},
        {"version",0,NULL,'v'},
		{"gtav",0,NULL,'g'},
		{"notepad",0,NULL,'n'},
		{"pycharm",0,NULL,'p'},
		{"value",2,NULL,'V'},
        {NULL,0,NULL,0},
    };

	while ((a = getopt_long(argc,argv,short_options,long_options, &option_index)) != -1){
		switch (a){
		case 'h': {
			if (used["h"] == false) {
				printf("Arg: Help\n"); 
				used["h"] = true;
				break;
			} 
			break;
		}
		case 'l': {
			if (used["l"] == false) {
				printf("Arg: List\n"); 
				used["l"] = true;
				break;
			}
			break;
		}
		case 'v': {
			if (used["v"] == false) {
				printf("Arg: version\n"); 
				used["v"] = true;
				break;
			}
			break;
		}
		case 'g': {
			if (used["g"] == false) {
				printf("Arg: GTA V\n"); 
				used["g"] = true;
				break;
			}
			break;
		}
		case 'n': {
			if (used["n"] == false) {
				printf("Arg: Notepad++\n"); 
				used["n"] = true;
				break;
			}
			break;
		}
		case 'p': {
			if (used["p"] == false) {
				printf("Arg: PyCharm 2020\n"); 
				used["p"] = true;
				break;
			}
			break;
		}
		case 'V': {
			if (used["V"] == false) {
				if (optarg == NULL) {
					printf("Arg: value\n"); 
					used["V"] = true;
				} else {
					printf("Arg: %s value\n", optarg); 
					used["V"] = true;
				}
				
				break;
			}
			break;
		}
		case '?': default: {
			printf("Key %c is not found\n", a);
			break;
			}
        };
		option_index = -1;
	};
};