case 2:
			
			printf("Enter the first character: \n");
			scanf("%c", &c1);
			
			
			switch(c1)
			{
			
				case 'M':
					num1 = 1000;
					break;
				
				case 'D':
					num1 = 500;
					break;
				
				case 'C':
					num1 = 100;
					break;
			    
			    case 'L':
			    	num1 = 50;
			    	break;
			    
			    case 'X':
			    	num1 = 10;
			    	break;
			    	
			    case 'V':
			    	num1 = 5;
			    	break;
			    	
			    case 'I':
			    	num1 = 1;
			    	break;
			    
			    default:
			    	printf("Invalid \n");
			}
			
			printf("Enter the second character: \n");
			scanf("%c", &c2);
			
			switch(c2)
			{
			
				case 'M':
					num2 = 1000;
					break;
				
				case 'D':
					num2 = 500;
					break;
				
				case 'C':
					num2 = 100;
					break;
			    
			    case 'L':
			    	num2 = 50;
			    	break;
			    
			    case 'X':
			    	num2 = 10;
			    	break;
			    	
			    case 'V':
			    	num2 = 5;
			    	break;
			    	
			    case 'I':
			    	num2 = 1;
			    	break;
			    
			    default:
			    	printf("Invalid \n");
			}
		break;
