#include <stdio.h>
#include <stdlib.h>
int main()
{
	// Q60 Matchstick game
	printf("Hello friends!! Lets play a game- The Matchstick game\n");
	printf("There are 21 matchsticks\n");
    printf("The computer asks the player to pick 1, 2, 3, or 4 matchsticks\n");
    printf("After the person picks, the computer does its picking\n");
    printf("Whoever is forced to pick up the last matchstick loses the game\n");
    int user,m_left,comp;
	printf("Enter the number of matchsticks you want to pick : 1/2/3/4 = ");
	scanf("%d",&user);  
	if (user<1 || user>4)
	{
		printf("Invalid choice..Sorry you lost the game for breaking the rules\n");
		return 0;
	}
	
	m_left = 21-user;
	printf("The number of matchsticks left = %d\n",m_left);
	comp=3;
	m_left = m_left - comp;
	printf("The computer has chosen = %d\n",comp);
	printf("The number of matchsticks left = %d\n",m_left);
	while (1)
    {
    	printf("Enter the number of matchsticks you want to pick : 1/2/3/4 = ");
	    scanf("%d",&user);
	    if (user<1 || user>4)
	    {
	 	    printf("Invalid choice..Sorry you lost the game for breaking the rules\n");
		    return 0;
	    }
	    m_left = m_left-user;
	    if (m_left<=10)
	    {
	    	printf("The number of matchsticks left = %d\n",m_left);
			break;	    	
		} 
           
	    printf("The number of matchsticks left = %d\n",m_left);
		//Now computer chooses a mathstick  
	    /* random int between 1 to 4 */
	    int r = rand() % 5;	    
	    while (r==0)
	       int r = rand() % 5;	    
	    comp  = r;
	    m_left = m_left - comp;
	    if (m_left<=10)
	    {
	    	printf("The number of matchsticks left = %d\n",m_left);
			break;	    	
		} 
	    printf("The computer has chosen = %d\n",comp);
	    printf("The number of matchsticks left = %d\n",m_left);
	    
	}
	
    if (m_left==10)
       comp=4; 
	else if (m_left==9)
       comp=3; 
    else if (m_left==8)
       comp=2;
	else if (m_left==7)
       comp=1; 
    m_left=m_left-comp;
    printf("The computer has chosen = %d\n",comp);
	printf("The number of matchsticks left = %d\n",m_left);
	  
	
	while (1)
	{
	   printf("Enter the number of matchsticks you want to pick : 1/2/3/4 =  ");
	   scanf("%d",&user);
	   if (user<1 || user>4)
	    {
		  printf("Invalid choice..Sorry you lost the game for breaking the rules\n");
		  return 0;
	    }
	   m_left= m_left-user;
	   if (user==4)
         comp=1; 
	   else if (user==3)
         comp=2; 
       else if (user==2)
         comp=3;
	   else if (user==1)
         comp=4; 
       m_left= m_left-comp;	   
	   printf("The computer has chosen = %d\n",comp);
	   printf("The number of matchsticks left = %d\n",m_left);
	   if (m_left<1)
	   {
	   	printf("Sorry!A problem occured! ending...");
	   }
	   if (m_left==1)
	   {
	   	printf("You have to pick the last matchstick! Sorry you have lost the game!\n");
	    return 0;
	   }   
	      
	}	  	  
	
}
