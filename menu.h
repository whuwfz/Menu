/*Add cmd to menu*/
int AddCmd(char * cmd, char * desc, int(*handler)(int argc, char * argv[]));
/*Execute the menu*/
int ExecuteMenu();
