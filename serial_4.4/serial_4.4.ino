float kgco2 = 43;

void setup()              // run once, when the sketch starts
{
  Serial.begin(9600);     // set up Serial library at 9600 bps

  if ( kgco2 >=43.2 )
  {
    Serial.println("Categoria G");
    Serial.println("Hauries de desferte d'aquest electrodomestic inmediatament!");
  }
  else if ( kgco2 >= 38.2 && kgco2 < 43.2)
  {
    Serial.println("Categoria F");
    Serial.println("Nanu! crec que t'han timat, ves a la botiga i que et tornin els diners"); 
  }
    
  else if ( kgco2 >= 17.7 && kgco2 < 38.2)
  {
    Serial.println("Categoria E");
    Serial.println("De on as tret aquest trasto? demana mes que l'estat!"); 
  }
    
  else if ( kgco2 >= 11.1 && kgco2 < 17.7)
  {
    Serial.println("Categoria D");
    Serial.println("Caram, que et penses que l'energia es gratuita?");  
    Serial.println("Jo de tu li tornava aquesta endromina a l'avia...");
  }
  else if ( kgco2 >= 6.5 && kgco2 < 11.1)
  {
    Serial.println("Categoria C");
    Serial.println("Ei! aixo esta millor! no pots millorar-ho?");  
  }  

  else if ( kgco2 >= 3.5 && kgco2 < 6.5)
  {
    Serial.println("Categoria B");
    Serial.println("Be! veig que mires per el medi ambient!");
    delay (200);
    Serial.print(".");
    delay (500);
    Serial.print(".");
    delay (500);  
    Serial.println(".");
    delay (500);
    Serial.println("crec que es una mica vell aquest aparell");
  }

  else if ( kgco2 < 3.5)
  {
    Serial.println("Categoria A");
    Serial.println("Per fi! alguna persona que es preocupa per la contaminacio!");  
    Serial.println(" Segueix aixi!");
  }

      else 
  {
    Serial.println(" Hahahaha! creus que em xupo el xip?"); 
    delay (500);
    Serial.println("aquesta dada no entra a la meba base de dades, llest!");
    delay (500);
    Serial.println(" ves a buscarte una altre Arduino, i deixem en pau!"); 
  };
}






void loop()   // we need this to be here even though its empty
{
}


