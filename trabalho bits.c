#include<stdio.h>

void sime(int S)
{
	 FILE *arq;
	 
	 arq = fopen("trabalho-bits.txt","a");
	
	 if(S == 32)
	     fprintf(arq,"S");
}

int main()
{
	 int  Fs1, Fs2, Fs3 ,Fs4 ,i ,k ,Sa ,Sb ,Sc ,Sd ,Se ,Sf ,Ra ,Ta ,Tb ,Tc ,Td ,Te ,Tf ,Tg ,Th ,Ti ,Tj ,Tk ,Tl ,S;
	 int T ,Tm ,Tn ,To ,Tp ,Taa ,Tbb ,Tcc ,Tdd ,Tee ,Tff ,Tgg ,Thh ,Tii ,Tjj ,Tkk ,Tll ,Tmm ,Tnn ,Too ,Tpp ,F1 ,F2 ,F3 ,F4 ,F ,R;
	 FILE *arq;
	 
	 if((arq = fopen("trabalho-bits.txt","w")) != NULL)
	 { 
	     for(i = 0 ;i <= 65535 ;i++)
	     {
	     	 fprintf(arq,"\n{");
             F = 0;
             R = 0;
             S = 0;
	     	 F1 = 0;
	     	 F2 = 0;
	     	 F3 = 0;
	     	 F4 = 0;
	     	 Sa = 1;
	     	 Sb = 1;
	     	 Sc = 1;
	     	 Sd = 1;
	     	 Se = 1;
	     	 Sf = 1;
	     	 Ra = 0;
	     	 R = 1;
	     	 Ta = 0;
	     	 Tb = 0;
	     	 Tc = 0;
	     	 Td = 0;
	     	 Te = 0;
	     	 Tf = 0;
	     	 Tg = 0;
	     	 Th = 0;
	     	 Ti = 0;
	     	 Tj = 0;
	     	 Tk = 0;
	     	 Tl = 0;
	     	 Tm = 0;
	     	 Tn = 0;
	     	 Tp = 0;
	     	 To = 0;
	     	 T = 1;
	     	 Taa = 0;
	     	 Tbb = 0;
	     	 Tcc = 0;
	     	 Tdd = 0;
	     	 Tee = 0;
	     	 Tff = 0;
	     	 Tgg = 0;
	     	 Thh = 0;
	     	 Tii = 0;
	     	 Tjj = 0;
	     	 Tkk = 0;
	     	 Tll = 0;
	     	 Tmm = 0;
	     	 Tnn = 0;
	     	 Tpp = 0;
	     	 Too = 0;
	     	 Fs1 = 0;
	    	 Fs2 = 0;
	         Fs3 = 0;
	     	 Fs4 = 0;
             
             if((i & 1) == 1)
	     	 {
	     	 	 fprintf(arq ,"(1,1)");
	     	 	 Ra++;
	     	 	 Ta = 1;
	     	 	 Taa = 1;
	     	 	 F1++;
				 Fs1++;     
			 }
             if((i & 32) == 32)
	       	 {
	       	 	 fprintf(arq ,"(2,2)");
	     	 	 Ra++;
	     	 	 Tb = 2;
	     	 	 Tbb = 2;
	     	 	 F2++;
	     	 	 Fs2++;
			 }
             if((i & 1024) == 1024)
	      	 {
	      	 	 fprintf(arq ,"(3,3)");
	     	 	 Ra++;
	     	 	 Tc = 3;
	     	 	 Tcc = 3;
				 F3++; 
				 Fs3++;  
			 } 
              if((i & 32768) == 32768)
		   	 {
		   	 	 fprintf(arq ,"(4,4)");
	     	 	 Ra++;
	     	 	 Td = 4;
	     	 	 Tdd = 4;
	     	 	 F4++;
	     	 	 Fs4++;
			 }
	     	 if((i & 2) == 2)
	     	 {
	     	 	 fprintf(arq ,"(1,2)");
	     	 	 Sa = !Sa;
	     	 	 Te = 1;
	     	 	 Tee = 2;
	     	 	 F1++;
	     	 	 Fs2++;
			 }
	     	 if((i & 4) == 4)
	     	 {
	     	 	 fprintf(arq ,"(1,3)");
	     	 	 Sb = !Sb;
	     	 	 Tf = 1;
	     	 	 Tff = 3;
	     	 	 F1++;
	     	 	 Fs3++;
			 }
	     	 if((i & 8) == 8)
	     	 {
	     	 	 fprintf(arq ,"(1,4)");
	     	 	 Sc = !Sc;
	     	 	 Tg = 1;
	     	 	 Tgg = 4;
	     	 	 F1++;
	     	 	 Fs4++;
			 }
	     	 if((i & 16) == 16)
	       	 {
	       	 	 fprintf(arq ,"(2,1)");
	     	 	 Sa = !Sa;
	     	 	 Th = 2;
	     	 	 Thh = 1;
	     	 	 F2++;
	     	 	 Fs1++;
			 }
	     	 if((i & 64) == 64)
	      	 {
	      	 	 fprintf(arq ,"(2,3)");
	     	 	 Sd = !Sd;
	     	 	 Ti = 2;
	     	 	 Tii = 3;
	     	 	 F2++;
	     	 	 Fs3++;
			 }
	     	 if((i & 128) == 128)
	      	 {
	      	 	 fprintf(arq ,"(2,4)");
	     	 	 Se = !Se;
	     	 	 Tj = 2;
	     	 	 Tjj = 4;
	     	 	 F2++;
	     	 	 Fs4++;
			 }
	     	 if((i & 256) == 256)
	      	 { 
	      	     fprintf(arq ,"(3,1)");
	     	 	 Sb = !Sb;
	     	 	 Tk = 3;
	     	 	 Tkk = 1;
	     	 	 F3++;
	     	 	 Fs1++;
			 }
	     	 if((i & 512) == 512)
	      	 {
	      	 	 fprintf(arq ,"(3,2)");
	     	 	 Sd = !Sd;
	     	 	 Tl = 3;
	     	 	 Tll = 2;
	     	 	 F3++;
	     	 	 Fs2++;
			 }
	     	 if((i & 2048) == 2048)
	      	 {
	      	 	 fprintf(arq ,"(3,4)");
	     	 	 Sf = !Sf;
	     	 	 Tm = 3;
	     	 	 Tmm = 4;
	     	 	 F3++;
	     	 	 Fs4++;
			 }
			 if((i & 4096) == 4096)
	      	 {
	      	 	 fprintf(arq ,"(4,1)");
	     	 	 Sc = !Sc;
	     	 	 Tn = 4;
	     	 	 Tnn = 1;
	     	 	 F4++;
	     	 	 Fs1++;
			 }
	     	 if((i & 8192) == 8192)
	      	 { 
	      	     fprintf(arq ,"(4,2)");
	     	 	 Se = !Se;
	     	 	 To = 4;
	     	 	 Too = 2;
	     	 	 F4++;
	     	 	 Fs2++;
			 }
	     	 if((i & 16384) == 16384)
	      	 {
	      	 	 fprintf(arq ,"(4,3)");
	     	 	 Sf = !Sf;
	     	 	 Tp = 4;
	     	 	 Tpp = 3;
	     	 	 F4++;
	     	 	 Fs3++;
			 }
	     	 
		     fprintf(arq,"}");
		     
		     if(Ra == 4)
		     {
	     	 	 fprintf(arq,"R");
	     	 	 R = 2;
	         }	   	 
		     if(Sa == 1 && Sb == 1 && Sc == 1 && Sd == 1 && Se == 1 && Sf == 1)
		     {
			     fprintf(arq,"S");	 
			     S = 1;
		     }
			 if(Tee > 0) 	  
	     	 if((Tee == Ti && Tff == 0) || (Tee == Tj && Tgg == 0) || (Tee == Th && Taa == 0))
			     T = 0;
			
			 if(Tff > 0)
			 if((Tff == Tk && Ta == 0) || (Tff == Tl && Tee == 0) || (Tff == Tm && Tgg == 0))
			     T = 0;
		     
			 if(Tgg > 0)		 	 	     
	     	 if((Tgg == Tn && Ta == 0) || (Tgg == Tp && Tee == 0) || (Tgg == To && Tff == 0))
	     	     T = 0;
	     	  
			 if(Thh > 0)    
	     	 if((Thh == Te && Tb == 0) || (Thh == Tf && Tii == 0) || (Thh == Tg && Tjj == 0))
			     T = 0;
				
			 if(Tii > 0)	
			 if((Tii == Tk && Te == 0) || (Tii == Tl && Tb == 0) || (Tii == Tm  && Tjj == 0))
			     T = 0;
				
			 if(Tjj > 0)	
			 if((Tjj == Tn && Te == 0) || (Tjj == Tp && Tb == 0) || (Tjj == To && Tii == 0))
			     T = 0;
				
			 if(Tkk > 0)	
       	 	 if((Tkk == Te && Tll == 0) || (Tkk == Tf && Tc == 0) || (Tkk == Tg && Tmm == 0))
			     T = 0;
				
			 if(Tll > 0)	
			 if((Tll == Th && Tkk == 0) || (Tll == Ti && Tc == 0) || (Tll == Tj && Tmm == 0))
			     T = 0;
			
			 if(Tmm > 0)	
		     if((Tmm == Tn && Tkk == 0) || (Tmm == Tp && Tll == 0) || (Tmm == To && Tc == 0))
			     T = 0;
				
			 if(Tnn > 0)	
			 if((Tnn == Te && Tpp == 0) || (Tnn == Tf && Too  == 0) || (Tnn == Tg && Td == 0))
			     T = 0;
			     
			 if(Tpp > 0)    
			 if((Tpp == Th && Tnn == 0) || (Tpp == Ti && Too  == 0) || (Tpp == Tj && Td  == 0))
			     T = 0;
			
			 if(Too > 0)
			 if((Too == Tk && Tnn == 0) || (Too == Tl && Tpp  == 0) || (Too  == Tm && Td  == 0))
			     T = 0;	     
			     
			 if(T == 1)
			     fprintf(arq,"T");	
				
			 if(T == 1 && R == 2 && S == 1)
			     fprintf(arq,"E");
			   
			 if(Ra == 0)
			     fprintf(arq,"I");    
			  	     
			 if(F1 == 1 && F2 == 1 && F3 == 1 && F4 == 1)
			 {
			     fprintf(arq,"F");
			     F = 1;
		     }
			     
			 if(F == 1 && (Fs1 > 1 || Fs2 > 1 || Fs3 > 1 || Fs4 > 1))
			 {
			 	 fprintf(arq,"Fi");
			 	 fprintf(arq,"Fb");
			 	 fprintf(arq,"Fs");
			 }    
	     }
	     fclose(arq);
	 }
	 else
         printf("Erro-arquivo");
	     
	
	 	  
	 return 0;
}
