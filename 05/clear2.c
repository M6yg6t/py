void clear2(point *p, int n)
{
  int i,j;
  for(i=0; i<n; i++){
   
     for(j=0; j<3; j++){
 	
	p[i].vel[j] = 0;
	p[i].acc[j] = 0;
	}
     
     }
}
