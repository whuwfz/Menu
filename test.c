#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include "menu.h"
int Quit(int argc, char * argv[])
{
    int ch;
	while((ch = getopt(argc, argv, "iw")) != -1)
	{
		switch(ch)
		{
			case 'i':
				exit(0);
			case 'w':
				sleep(10);
				exit(0);
			default:
				break;
		}
	}
    printf("You should choose the quit model.\n");
	return 0;
}
int main(int argc, char * argv[])
{
    AddCmd("version", "xxx v1.0", NULL);
    AddCmd("quit", "Exit xxx(i:immediately w:wait for ten minutes)", Quit);
    ExecuteMenu();
    return 0;
}
