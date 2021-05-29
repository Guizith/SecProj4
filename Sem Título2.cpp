#include <iostream>
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <chrono>

using namespace std;
using namespace chrono;



char username[300000][100];
char password[300000][100];
char passwordhash[300000][400];

char usr[100];
char pwd[100];
char pwdHash[400];



//65 ate 90


//-- Inicio Funcoes de criptografia

void hashh(int tipo,char input, int senha, int indice){
	
	// 0 um, 1 pra todos
	
	if( tipo == 0){
		
		int idc = indice * 4;
		
				switch(input) {
		  	case 'A' : 	
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;
		
		  	case 'B' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;
				   	
		  	case 'C' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'L'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;	
		 	case 'D' :
			    pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'D';
				break;
		 	case 'E' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'E'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'T';
				break;
			case 'F' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'C';
				break;
		    case 'G' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'L';
				pwdHash[idc+3] = 'B';
				break;
		    case 'H' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'T';
				break;
		    case 'I' :
		       	pwdHash[idc] = 'F';
				pwdHash[idc+1] = 'I'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'E';
				break;
		    case 'J' :
		       	pwdHash[idc] = 'C';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'O';
				break;	
		  	case 'K' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'S';
				pwdHash[idc+3] = 'H';
				break;
		  	case 'L' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'G';
				break;
		  	case 'M' :
		       	pwdHash[idc] = 'T';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'M';
				break;
		 	case 'N' :
		       	pwdHash[idc] = 'K';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'M';
				pwdHash[idc+3] = 'A';
				break;	
		 	case 'O' :
		       	pwdHash[idc] = 'L';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'G';
				break;
			case 'P' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'J';
				pwdHash[idc+3] = 'U';
				break;	
		    case 'Q' :
		       	pwdHash[idc] = 'C';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'K';
				pwdHash[idc+3] = 'E';
				break;
		    case 'R' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'T';
				break;
		    case 'S' :
		       	pwdHash[idc] = 'B';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'I';
				break;
		    case 'T' :
		       	pwdHash[idc] = 'S';
				pwdHash[idc+1] = 'H'; 
				pwdHash[idc+2] = 'L';
				pwdHash[idc+3] = 'B';
				break;
		    case 'U' :
		       	pwdHash[idc] = 'E';
				pwdHash[idc+1] = 'V'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'R';
				break;	
		    case 'V' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'N';
				break;	
		    case 'W' :
		       	pwdHash[idc] = 'F';
				pwdHash[idc+1] = 'I'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'N';
				break;
		    case 'X' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'K';
				pwdHash[idc+3] = 'E';
				break;	
		    case 'Y' :
		       	pwdHash[idc] = 'B';
				pwdHash[idc+1] = 'M'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = '1';
				break;
		    case 'Z' :
		       	pwdHash[idc] = 'I';
				pwdHash[idc+1] = 'C'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'K';
				break;
		       	
		       	// Min -=-----==-=-=-=-=========-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=
			case 'a' : 	
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;
		
		  	case 'b' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;
				   	
		  	case 'c' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'L'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'B';
				break;	
		 	case 'd' :
			    pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'D';
				break;
		 	case 'e' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'E'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'T';
				break;
			case 'f' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'C';
				break;
		    case 'g' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'L';
				pwdHash[idc+3] = 'B';
				break;
		    case 'h' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'T';
				break;
		    case 'i' :
		       	pwdHash[idc] = 'F';
				pwdHash[idc+1] = 'I'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'E';
				break;
		    case 'j' :
		       	pwdHash[idc] = 'C';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'O';
				break;	
		  	case 'k' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'S';
				pwdHash[idc+3] = 'H';
				break;
		  	case 'l' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'G';
				break;
		  	case 'm' :
		       	pwdHash[idc] = 'T';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = 'M';
				break;
		 	case 'n' :
		       	pwdHash[idc] = 'K';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'M';
				pwdHash[idc+3] = 'A';
				break;	
		 	case 'o' :
		       	pwdHash[idc] = 'L';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'G';
				break;
			case 'p' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'U'; 
				pwdHash[idc+2] = 'J';
				pwdHash[idc+3] = 'U';
				break;	
		    case 'q' :
		       	pwdHash[idc] = 'C';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'K';
				pwdHash[idc+3] = 'E';
				break;
		    case 'r' :
		       	pwdHash[idc] = 'M';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'R';
				pwdHash[idc+3] = 'T';
				break;
		    case 's' :
		       	pwdHash[idc] = 'B';
				pwdHash[idc+1] = 'O'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'I';
				break;
		    case 't' :
		       	pwdHash[idc] = 'S';
				pwdHash[idc+1] = 'H'; 
				pwdHash[idc+2] = 'L';
				pwdHash[idc+3] = 'B';
				break;
		    case 'u' :
		       	pwdHash[idc] = 'E';
				pwdHash[idc+1] = 'V'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'R';
				break;	
		    case 'v' :
		       	pwdHash[idc] = 'G';
				pwdHash[idc+1] = 'R'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'N';
				break;	
		    case 'w' :
		       	pwdHash[idc] = 'F';
				pwdHash[idc+1] = 'I'; 
				pwdHash[idc+2] = 'N';
				pwdHash[idc+3] = 'N';
				break;
		    case 'x' :
		       	pwdHash[idc] = 'J';
				pwdHash[idc+1] = 'A'; 
				pwdHash[idc+2] = 'K';
				pwdHash[idc+3] = 'E';
				break;	
		    case 'y' :
		       	pwdHash[idc] = 'B';
				pwdHash[idc+1] = 'M'; 
				pwdHash[idc+2] = 'O';
				pwdHash[idc+3] = '1';
				break;
		    case 'z' :
		       	pwdHash[idc] = 'I';
				pwdHash[idc+1] = 'C'; 
				pwdHash[idc+2] = 'E';
				pwdHash[idc+3] = 'K';
				break;
		    case '.':
				pwdHash[idc] = 'S';
				pwdHash[idc+1] = 'I'; 
				pwdHash[idc+2] = 'M';
				pwdHash[idc+3] = '1';
				break;
				
		}
			
		
	}
	else if(tipo == 1){
			
		int idc = indice *4;
		
		switch(input) {
		  	case 'A' : 	
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;
		
		  	case 'B' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;
				   	
		  	case 'C' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'L'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;	
		 	case 'D' :
			    passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'D';
				break;
		 	case 'E' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'E'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'T';
				break;
			case 'F' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'C';
				break;
		    case 'G' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'L';
				passwordhash[senha][idc+3] = 'B';
				break;
		    case 'H' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'T';
				break;
		    case 'I' :
		       	passwordhash[senha][idc] = 'F';
				passwordhash[senha][idc+1] = 'I'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'E';
				break;
		    case 'J' :
		       	passwordhash[senha][idc] = 'C';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'O';
				break;	
		  	case 'K' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'S';
				passwordhash[senha][idc+3] = 'H';
				break;
		  	case 'L' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'G';
				break;
		  	case 'M' :
		       	passwordhash[senha][idc] = 'T';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'M';
				break;
		 	case 'N' :
		       	passwordhash[senha][idc] = 'K';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'M';
				passwordhash[senha][idc+3] = 'A';
				break;	
		 	case 'O' :
		       	passwordhash[senha][idc] = 'L';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'G';
				break;
			case 'P' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'J';
				passwordhash[senha][idc+3] = 'U';
				break;	
		    case 'Q' :
		       	passwordhash[senha][idc] = 'C';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'K';
				passwordhash[senha][idc+3] = 'E';
				break;
		    case 'R' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'T';
				break;
		    case 'S' :
		       	passwordhash[senha][idc] = 'B';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'I';
				break;
		    case 'T' :
		       	passwordhash[senha][idc] = 'S';
				passwordhash[senha][idc+1] = 'H'; 
				passwordhash[senha][idc+2] = 'L';
				passwordhash[senha][idc+3] = 'B';
				break;
		    case 'U' :
		       	passwordhash[senha][idc] = 'E';
				passwordhash[senha][idc+1] = 'V'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'R';
				break;	
		    case 'V' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'N';
				break;	
		    case 'W' :
		       	passwordhash[senha][idc] = 'F';
				passwordhash[senha][idc+1] = 'I'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'N';
				break;
		    case 'X' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'K';
				passwordhash[senha][idc+3] = 'E';
				break;	
		    case 'Y' :
		       	passwordhash[senha][idc] = 'B';
				passwordhash[senha][idc+1] = 'M'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = '1';
				break;
		    case 'Z' :
		       	passwordhash[senha][idc] = 'I';
				passwordhash[senha][idc+1] = 'C'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'K';
				break;
		       	
		       	// Min -=-----==-=-=-=-=========-=-=-=-=-=-=-=-=-=-=--=-=-=-=-=
			case 'a' : 	
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;
		
		  	case 'b' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;
				   	
		  	case 'c' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'L'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'B';
				break;	
		 	case 'd' :
			    passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'D';
				break;
		 	case 'e' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'E'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'T';
				break;
			case 'f' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'C';
				break;
		    case 'g' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'L';
				passwordhash[senha][idc+3] = 'B';
				break;
		    case 'h' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'T';
				break;
		    case 'i' :
		       	passwordhash[senha][idc] = 'F';
				passwordhash[senha][idc+1] = 'I'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'E';
				break;
		    case 'j' :
		       	passwordhash[senha][idc] = 'C';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'O';
				break;	
		  	case 'k' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'S';
				passwordhash[senha][idc+3] = 'H';
				break;
		  	case 'l' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'G';
				break;
		  	case 'm' :
		       	passwordhash[senha][idc] = 'T';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = 'M';
				break;
		 	case 'n' :
		       	passwordhash[senha][idc] = 'K';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'M';
				passwordhash[senha][idc+3] = 'A';
				break;	
		 	case 'o' :
		       	passwordhash[senha][idc] = 'L';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'G';
				break;
			case 'p' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'U'; 
				passwordhash[senha][idc+2] = 'J';
				passwordhash[senha][idc+3] = 'U';
				break;	
		    case 'q' :
		       	passwordhash[senha][idc] = 'C';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'K';
				passwordhash[senha][idc+3] = 'E';
				break;
		    case 'r' :
		       	passwordhash[senha][idc] = 'M';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'R';
				passwordhash[senha][idc+3] = 'T';
				break;
		    case 's' :
		       	passwordhash[senha][idc] = 'B';
				passwordhash[senha][idc+1] = 'O'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'I';
				break;
		    case 't' :
		       	passwordhash[senha][idc] = 'S';
				passwordhash[senha][idc+1] = 'H'; 
				passwordhash[senha][idc+2] = 'L';
				passwordhash[senha][idc+3] = 'B';
				break;
		    case 'u' :
		       	passwordhash[senha][idc] = 'E';
				passwordhash[senha][idc+1] = 'V'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'R';
				break;	
		    case 'v' :
		       	passwordhash[senha][idc] = 'G';
				passwordhash[senha][idc+1] = 'R'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'N';
				break;	
		    case 'w' :
		       	passwordhash[senha][idc] = 'F';
				passwordhash[senha][idc+1] = 'I'; 
				passwordhash[senha][idc+2] = 'N';
				passwordhash[senha][idc+3] = 'N';
				break;
		    case 'x' :
		       	passwordhash[senha][idc] = 'J';
				passwordhash[senha][idc+1] = 'A'; 
				passwordhash[senha][idc+2] = 'K';
				passwordhash[senha][idc+3] = 'E';
				break;	
		    case 'y' :
		       	passwordhash[senha][idc] = 'B';
				passwordhash[senha][idc+1] = 'M'; 
				passwordhash[senha][idc+2] = 'O';
				passwordhash[senha][idc+3] = '1';
				break;
		    case 'z' :
		       	passwordhash[senha][idc] = 'I';
				passwordhash[senha][idc+1] = 'C'; 
				passwordhash[senha][idc+2] = 'E';
				passwordhash[senha][idc+3] = 'K';
				break;
		    case '.':
				passwordhash[senha][idc] = 'S';
				passwordhash[senha][idc+1] = 'I'; 
				passwordhash[senha][idc+2] = 'M';
				passwordhash[senha][idc+3] = '1';
				break;
				
		}

	}
}

void funcuserpass(){
	
	
	for(int i = 0; i<300000;i++){
		
		
		int idcpass = 0;
		int idcuser = 0;
		while(password[i][idcpass] != 0){	
			idcpass++;
		}
		while(username[i][idcuser] != 0){	
			idcuser++;
		}
		for(int j = 0; j < idcuser ; j++){
			password[i][idcpass+j] = username[i][j];
			
		}
	
	
	
	}
	
	
}

void funcsulfixo(){
	
		for(int i = 0; i<300000;i++){
			
			bool ksk;
			//printf("\n%d",password[i][0]);
			if((int)password[i][0] >= 71){
				ksk = true;
				
			}else{
				ksk = false;
			}
			
			if (ksk == true){	
			int j = 0;
				while(password[i][j] != 0){
					j++;
				}
				password[i][j] = 'G';
				password[i][j+1] = 'U';
				password[i][j+2] = 'I';
				password[i][j+3] = 'Z';
				password[i][j+4] = 'I';
				password[i][j+5] = 'T';
				password[i][j+6] = 'H';
				ksk = false;
			}	
			else if (ksk == false){
			int j = 0;
				while(password[i][j] != 0){
					j++;
				}
				password[i][j] = 'B';
				password[i][j+1] = 'A';
				password[i][j+2] = 'N';
				password[i][j+3] = 'G';
				password[i][j+4] = 'L';
				password[i][j+5] = 'A';
				password[i][j+6] = 'D';
				ksk = true;
				
			}

		}
		
}

void funchashpass(){
		funcsulfixo();
		funcuserpass();
		
		for(int i = 0; i<300000;i++){
			for(int j = 0; j<100;j++){

				hashh(1,password[i][j],i,j);
				
			}	

		}
		
}

void funchashpassONE(){
	
	
			bool ksk;
			if((int)pwd[0] >= 71){
				ksk = true;
				
			}else{
				ksk = false;
			}
			
			if (ksk == true){	
			
			
			int j = 0;
				while(pwd[j] != 0){
					j++;
				}
				pwd[j] = 'G';
				pwd[j+1] = 'U';
				pwd[j+2] = 'I';
				pwd[j+3] = 'Z';
				pwd[j+4] = 'I';
				pwd[j+5] = 'T';
				pwd[j+6] = 'H';
				ksk = false;
			}	
			else if (ksk == false){
			int j = 0;
				while(pwd[j] != 0){
					j++;
				}
				pwd[j] = 'B';
				pwd[j+1] = 'A';
				pwd[j+2] = 'N';
				pwd[j+3] = 'G';
				pwd[j+4] = 'L';
				pwd[j+5] = 'A';
				pwd[j+6] = 'D';
				ksk = true;
				
			}
	

		int idcpass = 0;
		int idcuser = 0;
		while(pwd[idcpass] != 0){	
			idcpass++;
		}
		while(usr[idcuser] != 0){	
			idcuser++;
		}
		for(int j = 0; j < idcuser ; j++){
			pwd[idcpass+j] = usr[j];
			
		}
	
	
		for(int j = 0; j<100;j++){
			
			hashh(0,pwd[j],0,j);
			
		}	
		/*
			printf("\n ---- ");
		for(int j = 0; j<400;j++){
			printf("%c",pwdHash[j]);
		}
					printf(" \n ----sada ");
		for(int j = 0; j<400;j++){
			printf("%c",pwd[j]);
		}*/

		
		
}



void writeHashs(){
	FILE* sc = fopen("BaseCriptografada.txt","w");
	
	
		for(int i = 0; i<300000;i++){
			
			fprintf(sc,"|");
			
			for(int j = 0; j<100;j++){
				
				if(username[i][j] == 0){
					
				}
				else{
				
				fprintf(sc,"%c",username[i][j]);
				}
				
					
			}
			
			
			
			fprintf(sc,"|");
			
			
			for(int j = 0; j<400;j++){	
			
				if(passwordhash[i][j] == 0){
					
				}
				else{
				
					fprintf(sc,"%c",passwordhash[i][j]);
				}					
			}
				
			fprintf(sc,"|\n");
		}

	
	
	fclose(sc);
	
	
	
	
	
}

//-- Fim Funcoes de criptografia
//-------------------------------------------------------------------------------------------
//-- Inicio Funcoes de descriptografia

char dehash(char input1, char input2, char input3, char input4){
	
	if(input1 == 'G' && input2 == 'R' && input3 == 'O' && input4 == 'B'){
		return 'A';
		
	}else if(input1 == 'G' && input2 == 'O' && input3 == 'O' && input4 == 'B'){
		return 'B';
		
	}else if(input1 == 'G' && input2 == 'L' && input3 == 'O' && input4 == 'B'){
		return 'C';
		
	}else if(input1 == 'G' && input2 == 'R' && input3 == 'O' && input4 == 'D'){
		return 'D';
		
	}else if(input1 == 'M' && input2 == 'E' && input3 == 'N' && input4 == 'T'){
		return 'E';
		
	}else if(input1 == 'M' && input2 == 'A' && input3 == 'R' && input4 == 'C'){
		return 'F';
		
	}else if(input1 == 'G' && input2 == 'O' && input3 == 'L' && input4 == 'B'){
		return 'G';
		
	}else if(input1 == 'G' && input2 == 'U' && input3 == 'N' && input4 == 'T'){
		return 'H';
		
	}else if(input1 == 'F' && input2 == 'I' && input3 == 'R' && input4 == 'E'){
		return 'I';
		
	}else if(input1 == 'C' && input2 == 'A' && input3 == 'R' && input4 == 'O'){
		return 'J';
		
	}else if(input1 == 'J' && input2 == 'O' && input3 == 'S' && input4 == 'H'){
		return 'K';
		
	}else if(input1 == 'M' && input2 == 'A' && input3 == 'R' && input4 == 'G'){
		return 'L';
		
	}else if(input1 == 'T' && input2 == 'R' && input3 == 'O' && input4 == 'M'){
		return 'M';
		
	}else if(input1 == 'K' && input2 == 'U' && input3 == 'M' && input4 == 'A'){
		return 'N';
		
	}else if(input1 == 'L' && input2 == 'O' && input3 == 'N' && input4 == 'G'){
		return 'O';
		
	}else if(input1 == 'J' && input2 == 'U' && input3 == 'J' && input4 == 'U'){
		return 'P';
		
	}else if(input1 == 'C' && input2 == 'A' && input3 == 'K' && input4 == 'E'){
		return 'Q';
		
	}else if(input1 == 'M' && input2 == 'A' && input3 == 'R' && input4 == 'T'){
		return 'R';
		
	}else if(input1 == 'B' && input2 == 'O' && input3 == 'N' && input4 == 'I'){
		return 'S';
		
	}else if(input1 == 'S' && input2 == 'H' && input3 == 'L' && input4 == 'B'){
		return 'T';
		
	}else if(input1 == 'E' && input2 == 'V' && input3 == 'E' && input4 == 'R'){
		return 'U';
		
	}else if(input1 == 'G' && input2 == 'R' && input3 == 'E' && input4 == 'N'){
		return 'V';
		
	}else if(input1 == 'F' && input2 == 'I' && input3 == 'N' && input4 == 'N'){
		return 'W';
		
	}else if(input1 == 'J' && input2 == 'A' && input3 == 'K' && input4 == 'E'){
		return 'X';
		
	}else if(input1 == 'B' && input2 == 'M' && input3 == 'O' && input4 == '1'){
		return 'Y';
		
	}else if(input1 == 'I' && input2 == 'C' && input3 == 'E' && input4 == 'K'){
		return 'Z';
		
	}else if(input1 == 'S' && input2 == 'I' && input3 == 'M' && input4 == '1'){
		return '.';
		
	}
}

void funcdeuserpass(){
	
	
	for(int i = 0; i<300000;i++){
		
		
		int idcpass = 0;
		int idcuser = 0;
		while(password[i][idcpass] != 0){	
			idcpass++;
		}
		while(username[i][idcuser] != 0){	
			idcuser++;
		}
		for(int j = 0; j <= idcuser ; j++){
			password[i][idcpass-j] = 0;
			
		}
	
	
	
	}
	
	
}

void funcdesulfixo(){
	
	
	
	
	
		for(int i = 0; i<300000;i++){
			
			bool ksk;
			//printf("\n%d",password[i][0]);
			if((int)password[i][0] >= 71){
				ksk = true;
				
			}else{
				ksk = false;
			}
			
			if (ksk == true){	
			int j = 0;
				while(password[i][j] != 0){
					j++;
				}
				password[i][j-1] = 0;
				password[i][j-2] = 0;
				password[i][j-3] = 0;
				password[i][j-4] = 0;
				password[i][j-5] = 0;
				password[i][j-6] = 0;
				password[i][j-7] = 0;
				ksk = false;
			}	
			else if (ksk == false){
			int j = 0;
				while(password[i][j] != 0){
					j++;
				}
				password[i][j-1] = 0;
				password[i][j-2] = 0;
				password[i][j-3] = 0;
				password[i][j-4] = 0;
				password[i][j-5] = 0;
				password[i][j-6] = 0;
				password[i][j-7] = 0;
				ksk = true;
				
			}

		}
		
}

void funcdehashpass(){

		for(int i = 0; i<300000;i++){
			int cccc=0;
			
			for(int j = 0; j<100;j++){	
				password[i][j] = dehash(passwordhash[i][cccc],passwordhash[i][cccc+1],passwordhash[i][cccc+2],passwordhash[i][cccc+3]);
				cccc = cccc +4;
			}	

		}
		funcdeuserpass();
		funcdesulfixo();
		
		
}



//-- Fim Funcoes de descriptografia



void learq(){
	
	FILE * sc = fopen("base.txt","r");
	
	for(int i = 0; i<300000;i++){
				
		int ini = 0;
		int mid = 0;
		int end = 0;
		
		int idcuser = 0;
		int idcpass = 0;
		
		for(int j = 0; j<50;j++){
			
			char aux; 
			aux = fgetc(sc);
		//	printf("\n atual: %c",aux);
			
			if(aux == '\n'){
			j = 50;
			}else{
				if(aux == '|'){
					if(ini == 0){
						ini++;
						end = 0;	
					}else if(mid == 0){
						mid++;	
						ini = 2 ;
					}else if(end == 0){
						end++;
						ini = 0;
						mid = 0;
					}
				}else if(ini == 1){
					
				//	printf("\n li user: %c",aux);
					username[i][idcuser] = aux;
					idcuser++;
					
				}else if(mid == 1){
				//	printf("\n li senha: %c",aux);
					password[i][idcpass] = aux;
					idcpass++;
					
				}			
			
	
				}
				
		}
						
	}
		
	fclose(sc);
}

void printup(){
		printf("\n ---------------");
		for(int i = 299999; i<300000;i++){
			
			printf("\n user:");
			for(int j = 0; j<50;j++){
				
				printf("%c", username[i][j]);
				
			}	
			printf("\n senha:");
			for(int j = 0; j<100;j++){	
				printf("%c", password[i][j]);
							
			}
			printf("\n senha cripto:");
			for(int j = 0; j<400;j++){	
				printf("%c", passwordhash[i][j]);
							
			}
				
		}
	
}


void funcApaga(){
	
		for(int i = 0; i<300000;i++){
			for(int j = 0; j<50;j++){
				password[i][j] = 0;
				
				}
		}
	
	
}


int valida(){
	
	int bateu =0;
	int erro = 0;
	int uservalido = -1;
	for(int i = 0 ; i<=300000;i++){
		
		for(int j = 0 ; j<100;j++){
			if(usr[j] == username[i][j]){
				//printf("\n usr %c  == username %c",usr[j],username[i][j]);
		
			}else{
				erro++;
				j = 100;
			}
		}
		
				
		if(erro == 0){
			uservalido = i;
			bateu = bateu +1;
			i = 5000000;
			//printf("\n usuario ok");
		}
		erro = 0;
		
	}
	if(bateu == 0){
		printf("\n Usuario incorreto");
		return 0;
	}
	
	funchashpassONE();
	

	int erropass = 0;	
	
		for(int j = 0 ; j<400;j++){
			if(pwdHash[j] == passwordhash[uservalido][j]){	
			//printf("\n usr %c  == username %c",pwdHash[j],passwordhash[uservalido][j]);
			}else{
				//printf("\n erro usr %c  == username %c",pwdHash[j],passwordhash[uservalido][j]);
				erropass++;
				j = 1000;
			}
		}
		
		if(erropass == 0){
			bateu = bateu +1;
			
		}else{
			
			printf("\n senha incorreta \n");
		}
		
	
	
	return bateu;
	
	
}


void printatual(int i){

	printf("\n user: ");
	for(int j = 0; j<100;j++){
		
		printf("%d",username[i][j]);
	}
	
		printf("\n senha: ");
	for(int j = 0; j<100;j++){
		
		printf("%d",passwordhash[i][j]);
	}
}

int main(){



	printf("Carregando...");
	//Le o Arquivo Base
	auto start1 = chrono::steady_clock::now();
	learq();
	auto end1 = chrono::steady_clock::now();

	//Le criptografa as senhas
	auto start2 = chrono::steady_clock::now();
	funchashpass();
	auto end2 = chrono::steady_clock::now();
	
	//Deleta senhas descriptografadas 
	funcApaga();
	//printup();
	
	auto start4 = chrono::steady_clock::now();
	writeHashs();
	auto end4 = chrono::steady_clock::now();
	
	printf("\b\b\b\b\b\b\b\b\b\b\b\b\b");
	
	//__________________________________Menu___________________________________


	
	printf("[ - ][ - ][ - ]  Welcome  [ - ][ - ][ - ]\n");
	printf("Digite seu usuario:\n");
	gets(usr);
	
	printf("Digite sua senha\n");
	gets(pwd);
	
//	printf("Digitou:%s \n",usr);
	//printf("Digitou:%s",pwd);
	
	auto start = chrono::steady_clock::now();
	int teste = valida();
	auto end = chrono::steady_clock::now();

	
	if(teste == 2){
		printf("\n Login aceito \n");
		
	}else{
		printf("\n Login nao aceito \n");
	}


	milliseconds tempoverif = duration_cast<milliseconds>(end - start);
	milliseconds tempoLeArq = duration_cast<milliseconds>(end1 - start1);
	milliseconds tempoPassHash = duration_cast<milliseconds>(end2 - start2);
	milliseconds tempoWrite = duration_cast<milliseconds>(end4 - start4);
	
	cout << "-----------------------------------"<< endl;
	cout << "Tempo de leitura da base "<< tempoLeArq.count()<< " ms" <<endl;
	cout << "Tempo criptografando a base "<< tempoPassHash.count()<< " ms" <<endl;
	cout << "Tempo de verificacao "<< tempoverif.count()<< " ms" <<endl;
	cout << "Tempo escrevendo a base criptografada "<< tempoWrite.count()<< " ms" <<endl;
	cout << "Tempo gasto no total: " << (tempoLeArq.count()+tempoPassHash.count()+tempoverif.count()+tempoWrite.count()) << "ms" << endl;
	
	/*

	//Descriptografa toda a base
	funcdehashpass();
*/

}
