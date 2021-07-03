# include<stdio.h>
 main()
 { 
  //1. Display the menu
  printf("pick the gadget : \n1. lap\n2. desktop\n3. mobile\n4. tablet");
  //2. Read their choice
  int choice=0;
  scanf("%d",&choice);
  //3. Display based on their choice
  
  switch(choice)
  {
  	case 1:
  		printf("you picked lap.");
  		break;
  	case 2:
  		printf("you picked desktop.");
  		break;
  	case 3:
  		printf("you picked mobile.");
  		break;
	case 4:
	    printf("you picked tablet.");
		 break;  
	default: printf("Invalid choice");
  }
 }
