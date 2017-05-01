#include "include/screen.h"
#include "include/kb.h"
#include "include/string.h"
#include "include/types.h"
#include "include/isr.h"
#include "include/idt.h"
#include "include/shell.h"

  
kmain()
{
	isr_install();
	clearScreen();
	print("Welcome to JARVIS OS\nPlease enter a command\n");
    launch_shell();    
}

        

