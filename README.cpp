# josephus_problem
int i, person,step=2,start=1;
for(i=1;i<=person;i++)
{
start=(start+step-1)%i+1;
}
return start;
