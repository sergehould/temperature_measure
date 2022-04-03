/*******************************************************************************
*
*  	FileName:     main.c
*	
*	Name: 
*
*	Description: 
*		
*      
* * REVISION HISTORY:
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Author        	Date      		Comments on this revision
*~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
* Serge Hould      April 3, 2022	Template code
*
* 		
*******************************************************************************/

#include <xc.h>
#include "Tick_core.h"
#include "adc.h"
#include "console.h"
#include "initBoard.h"
#include "util.h"
#include <stdio.h>

//#define TC1047A
//#define TMP61


int main( void){
    heartbeat_init();

    while(1){
        heartbeat();
    }

}// main

