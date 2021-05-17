#include<stdio.h>
#include<stdlib.h>
int main(){
	 char ch1,ch2;
	 while(1){
		 printf("문자 입력 : ");
			  scanf(" %c",&ch1);
		  ch2=ch1;
		   if(ch1 >= 'A' && ch1 <= 'Z'){
			     ch1 +=32;
			       printf("%c의 소문자는 %c 입니다\n",ch2,ch1);
		   }
		    else if(ch1 >= 'a' && ch1 <= 'z'){
			      ch1 -=32;
			        printf("%c의 대문자는 %c 입니다\n",ch2,ch1);
		    
		   }
		else if (ch1=='0'){
			exit(0);
	 }
}
}

