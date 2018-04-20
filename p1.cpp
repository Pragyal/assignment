#include<stdio.h>
#include<unistd.h>
struct resource
{	
	int pen;
	int paper;
	int q_paper;
	int id;
};
struct t_resource
{
	int count1 ;
	int count2 ;
	int count3 ;
}; 
struct t_resource t[3];
void allotment(struct resource a){
	switch(a.id)
	{
		case 0:a.pen=1;
		break;
		case 1:a.paper=1;
		break;
		case 2:a.q_paper=1;
		break;
		default:printf("\nwrong input");
	}
}
int main()
{
	struct resource s[3];	
	int i,j,count=0;
	for(i=0;i<3;i++)
	{
		s[i].id=i;
		allotment(s[i]);
	}
	printf("Student 0 already has pen and question paper\nStudent 1 already has pen and paper\nStudent 3 already has paper and question paper");
	printf("\nResources alloted are:");
	for(i=0;i<3;i++){
		if(s[i].pen == 1)
		printf("\nResources alloted to student %d is:pen",i+1);
		if(s[i].paper)
		printf("\nResources alloted to student %d is:paper",i);
		if(s[i].q_paper == 1)
		printf("\nResources alloted to student %d is:question paper",i+1);
	}
	while(count!=3){
		for(i=0;i<3;i++)
		{
			if(i=0)
			{
				t[i].count2=1;
				t[i].count1=1;
				for(j=0;j<3;j++){
					if(s[j].q_paper==1){
						printf("\nStudent %d has completed his job.",count);
						count++;
					}
				}
			}
		
			if(i=1){
				t[i].count3=1;
				t[i].count1=1;
				for(j=0;j<3;j++){
					if(s[j].paper==1){
						printf("\nStudent %d has completed his job.",count);
						count++;
					}
				}
			}
		
			if(i=2){
				t[i].count2=1;
				t[i].count3=1;
				for(j=0;j<3;j++){
					if(s[j].pen==1){
						printf("\nStudent %d has completed his job.",count);
						count++;
					}
				}
			}
		}
		
	}
	return 0;
}
