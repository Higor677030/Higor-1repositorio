void setup (){
    pinMode(2,OUTPUT);
    
    Serial.begin(9600);
}

void loop (){

    digitalWrite(2,HIGH);
    delay(1000);
    digitalWrite(2,LOW);
    delay(1000);
    
    Serial.println("Exibir na tela")
}
