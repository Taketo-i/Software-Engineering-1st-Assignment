#include<stdio.h>
#include<string>
using namespace std;

int main() {
	int i = 0;
	int iswitch = 0;
	int jcase = 0;
	
	switch(iswitch){		//ooo switch case ooo
        case 0:
            break;
        case 1:
            break;
        case 2:
            printf("oh case oh");
        default:
            break;
    }
    switch(jcase){       //ooo case case ooo
        case 0:
            break;
        case 1:
            break;
        default:
            printf("oh switch oh");
    }


	
	if(i<0) {
		if(i<-1) {}
		else printf("oh if else oh");
	} else if(i>0) {
		if (i>2) {}
		else if (i==2) {}
		else if (i>1) {}
		else { 
			if(i==0) {}
			else {}
		};
	}
	iswitch = jcase;  /*
	ohh switch case */
	if(i > 8){
		if (i <7){
			i=9;
		}
		else if(i <4) {	string a = "oh if else oh", b = "oh if else oh";}
		else i=10;
	}
	/*
	oh if else oh
	oh if else oh
	*/
	else{	//oh if else oh
		;
	}
	return 0;
}
