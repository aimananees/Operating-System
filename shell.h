#ifndef SHELL_H
#define SHELL_H

#include "system.h"
#include "string.h"
#include "kb.h"
#include "screen.h"
#include "types.h"
#include "util.h"

void launch_shell()
{
	
	while(1)
	{
		    print("\nJARVIS: ");
		    string ch = readStr();
		    if(strEql(ch,"clear"))
		    {
		            clearScreen();
		    }
		    else if(strEql(ch,"exit"))
		    {
		    	print("\nGood Bye!\n");
			break;
		    }
		    else if(strEql(ch,"echo"))
		    {
			echo();
		    }
		    
		    else if(strEql(ch,"help"))
		    {
		    	help();
		    }

		    else if(strEql(ch,"multiply"))
		    {
			product();
		    }
		    
		    else if(strEql(ch,"reverse-print"))
		    {
		    	reverse_print();
		    }
		    else if(strEql(ch,"factorial"))
		    {
			factorial();
		    }
		   
                    else if(strEql(ch,"square"))
		    {
			square();
		    }

		    else if(strEql(ch,"cube"))
		    {
			cube();
		    }
		    else if(strEql(ch,"division"))
		    {
			division();
		    }
		    
		    
		    else
		    {
		            print("\nBad command!\n");
		    } 
	} 
}

void help()
{
	print("\nclear              : Clears the screen");
	print("\nreverse-print      : Reprint a given text in reverse order");
	print("\necho               : Reprint a given text");
	print("\nexit               : Quits the current shell");
	print("\nmultiply           : Returns multiplication of n numbers");
	print("\nfactorial          : Returns factorial of a number");
	print("\nsquare             : Returns square of a number");
	print("\ncube               : Returns cube of a number");
	print("\ndivision           : Returns quotient");



	
	
	print("\n\n");
}



void echo()
{
	print("\nEnter a sentence: ");
	string statement = readStr();
	print("\n\n");
	print(statement);
	print("\n");
}

void reverse_print()
{
	print("\nEnter a sentence: ");
	string statement = readStr();
	int i=strlength(statement)-1;
	print("\n\n");
	for(i;i>=0;i--){
		printch(statement[i]);
	}
	print("\n");
}

void product()
{
	print("\nHow many numbers: ");
	int n = str_to_int(readStr());
	int i =0;
	print("\n");
	int arr[n];
	fill_array(arr,n);
	int s = product_array(arr,n);
	print("Result: ");
	print(int_to_string(s));
	print("\n");
}



int product_array(int arr[],int n)
{
	int i = 0;
	int s = 1;
	for (i = 0;i<n;i++)
	{
		s *= arr[i];
	}
	return s;
}

int factorial_array(int arr,int n)
{
	int i = 1;
	int s = 1;
	for (i = 1;i<=arr;i++)
	{
		s *= i;
	}
	return s;
}


void fill_array(int arr[],int n)
{
	int i = 0;
	for (i = 0;i<n;i++)
	{
		print(" ");
		arr[i] = str_to_int(readStr());
		print("\n");
	}
}

int square_array(int arr,int n)
{
	int i=1;
	int s=1;
	for(i=1;i<=2;i++)
	{
		s=s*arr;
	}
	return s;
}

int cube_array(int arr,int n)
{
	int i=1;
	int s=1;
	for(i=1;i<=3;i++)
	{
		s=s*arr;
	}
	return s;
}

int division_array(int arr[],int n)
{
	int s=arr[0]/arr[1];
	return s;
}



void factorial()
{
	int n=1;
	int arr[n];
	print("\n");
	fill_array(arr,n);
	int result=factorial_array(arr[0],n);
	print("Result: ");
	print(int_to_string(result));
	print("\n");
		
}

void square()
{
	int n=1;
	int arr[n];
	print("\n");
	fill_array(arr,n);
	int result=square_array(arr[0],n);
	print("Result: ");
	print(int_to_string(result));
	print("\n");
	
}

void cube()
{
	int n=1;
	int arr[n];
	print("\n");
	fill_array(arr,n);
	int result = cube_array(arr[0],n);
	print("Result: ");
	print(int_to_string(result));
	print("\n");
}

void division()
{
	int n=2;
	int arr[n];
	print("\n");
	fill_array(arr,n);
	int result=division_array(arr,n);
	print("Result: ");
	print(int_to_string(result));
	print("\n");
}
	


#endif

