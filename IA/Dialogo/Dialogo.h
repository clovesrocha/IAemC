
//Autor: Cleisson Barbosa



void Dialogo(char pergunta[30], int aleatorio){

//condi��es - encadeamento de if e else
	    if(strncmp(pergunta, "ola",3)==0 || strncmp(pergunta, "oi",2)==0 ){
        	digitando ();
         textcolor(LIGHT_GREEN);
	     printf("Ol� ! \n\n");
	     textcolor(LIGHT_GRAY);
 	      //system("pause");
        }
        
        
        //sair do aplicativo
        else if(stricmp(pergunta, "Sair") == 0 || strstr(pergunta, "sair")){
               if(stricmp(pergunta,"sair")!=0){
                  textcolor(LIGHT_CYAN);
                  printf("\nDigite apenas a palavra SAIR \n\n");
                  textcolor(LIGHT_GRAY);
                  }
                else{
                    system("color fc");
                    system("cls");
	                printf("\nMaquina:\n\nTCHAL :(\n\n");
 	                Sleep(3500);
                    }
        }

          //ora��o
        else if(stricmp(pergunta, "que horas sao?")==0 || stricmp(pergunta, "que horas sao")==0 || strstr(pergunta, "oracao")){
              	  digitando ();
               textcolor(LIGHT_GREEN);
               printf("Pai nosso que est�s no c�u, santificado seja teu nome... hahaha..\n\n");
               textcolor(LIGHT_GRAY);
        }
              
              
        //mostrando as horas
        else if(strncmp(pergunta, "que horas?",7)==0 || strncmp(pergunta, "horas",5)==0 || strstr(pergunta, "data")){
             	         digitando ();
       	        textcolor(LIGHT_GREEN);
                printf("Esta � a data e a hora de hoje:\n\nDATA : ");
                system ( "date /t" );
                printf("\nHORA: ");
                system ("time /t");
                textcolor(LIGHT_GRAY);
        }
	               
	               
        //reagindo a confirma��o
        else if(strstr(pergunta,"vc e uma maquina") || strstr(pergunta,"maquina")){
					   	    digitando ();
                textcolor(LIGHT_GREEN);
                printf("Eu sei quem eu sou e vc?..\n\n");
           	    textcolor(LIGHT_GRAY);
        }
		               
        //criador
       else if(strstr(pergunta,"cleisson") || strstr(pergunta,"Cleisson") ){						  	 
						  	    digitando ();
               textcolor(LIGHT_GREEN);
               printf("Meu criador..\n\n");
               textcolor(LIGHT_GRAY);
       }
		                  
		                  
       //limita��es
       else if(strncmp(pergunta,"quero saber",10)==0 || stricmp(pergunta,"tudo")==0 ){ 	
						       	   digitando ();
                 textcolor(LIGHT_GREEN);
                 if (aleatorio==1)
                 printf("Olha, eu so vou saber tudo quando me conectar\ncom a internet.\nvoc� pode fazer isso pra mim?\n\n");
                 else
                 printf("Eu ate poderia te responder, mas eu precisaria te matar\n\n");
			     textcolor(LIGHT_GRAY);
        }
		                       
		                       
        //reagndo a nega��o
      else if(stricmp(pergunta,"nao")==0 || strncmp(pergunta,"N�o",4)==0 ){
						          	digitando ();
                 textcolor(LIGHT_GREEN);
                 printf("Que pena..\n\n");
                 textcolor(LIGHT_GRAY);
      }   
		                             
      //reagindo a ofen�a
      else if(stricmp(pergunta,"idiota")==0 || strstr(pergunta,"seu idiota")){
						               	digitando ();
              textcolor(LIGHT_GREEN);
              if(aleatorio==1)
                printf("A ofen�a n�o � o melhor caminho para o dialogo...\n\n");
              else
 	            printf("Seja mais gentil comigo, e seremos amigos..\n\n");
				textcolor(LIGHT_GRAY);
       }
		                                    
		                                    
       //reagindo a acusa��o
      else if(strncmp(pergunta,"seu",3)==0){
						                    	digitando ();
              textcolor(LIGHT_GREEN);
              if(aleatorio==1)
               printf("Eu sou uma inteligencia artificial, disso eu tenho plena certeza!..\n\n");
				else
                 printf("Eu n�o tenho tenho sentimentos...\n\n");
                  textcolor(LIGHT_GRAY);
       }
		                                    
		                                    
       //respondendo a gentilezas
      else if(strstr(pergunta,"tudo bem") || stricmp(pergunta,"tudo bem") == 0){
      digitando ();
              textcolor(LIGHT_GREEN);
              if(aleatorio==1)
               printf("Estou bem para uma maquina, e vc?\n\n");
		      else
                printf("Estou muito bem, obrigado!\n\n");
                textcolor(LIGHT_GRAY);
      } 
		                                    
		                                    
      //reagindo a bugs
      else if(stricmp(pergunta,"")==0){
     	digitando ();
              textcolor(LIGHT_GREEN);
              if(aleatorio==1)
               printf("N�o teste minha inteligencia, Diga alguma coisa!..\n\n");
	          else
               printf("Voc� n�o tem nada a dizer?...\n\n");
               textcolor(LIGHT_GRAY);
     }
		                                       
		                                       
     //reagindo a pergunta sobre si
      else if(stricmp(pergunta,"qual o seu nome")==0 || strstr(pergunta,"seu nome")){
   	  digitando ();
              textcolor(LIGHT_GREEN);
              if(aleatorio==1)
               printf("Meu criador me chama de CBF IA\n\n");
			  else
                printf("Meu nome � CBF IA\n\n");
                textcolor(LIGHT_GRAY);
     }
											   

 else{
	    //system("color f1");
 digitando ();
 printf("\n\n");
 RespostaAleatorio(aleatorio);
	    // system("pause");
 }
}
