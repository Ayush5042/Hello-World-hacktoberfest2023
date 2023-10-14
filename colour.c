// C Implementation for getbkcolor function 
#include <graphics.h> 
#include <stdio.h> 

// driver code 
int main() 
{ 
	// gm is Graphics mode which is 
	// a computer display mode that 
	// generates image using pixels. 
	// DETECT is a macro defined in 
	// "graphics.h" header file 
	int gd = DETECT, gm; 
	char arr[100]; 

	// initgraph initializes the 
	// graphics system by loading a 
	// graphics driver from disk 
	initgraph(&gd, &gm, ""); 

	// set background color as RED 
	setbkcolor(RED); 

	// sprintf stands for “String print”. 
	// Instead of printing on console, it 
	// store output on char buffer which 
	// are specified in sprintf 
	sprintf(arr, "Current background color = %d", 
								getbkcolor()); 

	// outtext function displays text 
	// at current position. 
	outtextxy(10, 10, arr); 

	getch(); 

	// closegraph function closes the 
	// graphics mode and deallocates 
	// all memory allocated by 
	// graphics system . 
	closegraph(); 

	return 0; 
} 
