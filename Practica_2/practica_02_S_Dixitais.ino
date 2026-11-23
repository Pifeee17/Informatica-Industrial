/*

	Autor: Diego Piferrer Sampedro
    
    Data: 23/11/2026
    
    Descripción da Práctica: Encender diferentes luces LED, através
    de dous métodos, o primeiro cambiando valor da variable manualmente
    (dende o código) e o segundo indicando a cor dende a terminal, en 
    ambos casos a cor está definida por unha variable.
*/
/*
--------------------------------------------------------
DEFININDO A COR DA LED DESDE A VARIABLE
--------------------------------------------------------
String cor = "branca";

void setup()
{
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
}

void loop()
{
  
  if(cor == "vermella"){
    
  digitalWrite(12, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "verde"){
    
  digitalWrite(11, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(11, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "amarela"){
    
  digitalWrite(10, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "laranxa"){
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "azul"){
    
  digitalWrite(8, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "branca"){
  digitalWrite(7, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 500 millisecond(s)
  }
}*/
/*
-------------------------------------------------
DEFININDO A COR DESDE A TERMINAL
-------------------------------------------------
*/

String cor; // Definimos a variable

void setup()
{
  pinMode(7,OUTPUT);// Pins que imos utilizar
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  
  Serial.begin(9600); //Porto de comunicación con Arduino
  
  Serial.println("Que cor queres encender? (vermella, verde, amarela, laranxa, azul ou branca)");
  
    while(Serial.available() == 0){
   //Espera a que escriba el usuario
  }
  
  cor = Serial.readString(); //Recolle o valor introducido na terminal
}

void loop()
{
  
  if(cor == "vermella"){
    
  digitalWrite(12, HIGH); //Encendemos o LED
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(12, LOW); //Apagamos o LED
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "verde"){
    
  digitalWrite(11, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(11, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "amarela"){
    
  digitalWrite(10, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(10, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "laranxa"){
  digitalWrite(9, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(9, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "azul"){
    
  digitalWrite(8, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(8, LOW);
  delay(500); // Wait for 500 millisecond(s)
    
  }else if(cor == "branca"){
  digitalWrite(7, HIGH);
  delay(500); // Wait for 500 millisecond(s)
  digitalWrite(7, LOW);
  delay(500); // Wait for 500 millisecond(s)
  }
}