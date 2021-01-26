#include<stdio.h>

int main() {
    char o;
    
    
    printf("\n Enter Your Choice ranging from 1 to 5");
    scanf("%c",&o);
    switch(o)
    { case '1':
    	 printf("\nFood item - French Fries \nPrice - Rs 99");
	       break;
    	 
      case '2':
	  	  printf("\nFood item - Pasta \nPrice - Rs 179");
	  	  break;
	  case '3':
	  	  printf("\nFood item-Sandwich \nPrice - Rs 149");
	      break;
	  case '4':
	       printf("\nFood item - Pizza \nPrice - Rs 239");
    	   break;
	  case '5':
	        printf("\nFood item - Burger \n Price - Rs 129");
	  	    break;
   default:
            printf("Error! operator is not correct"); }
return 0;
}
