float mesure;

void setup(){
    Serial.begin(9600);
        
    //Initialisation de la liaison série à la vitesse de 9600 bauds   
}

void loop(){
    mesure = analogRead(0); //Lecture de l'information sur l'entrée analogique A0
    Serial.print(millis()); //Envoie de la valeur temps vers la liaison série (ou USB)
    Serial.print("ms \t");     //Envoie d'une tabulation : \t comme séparateur
    Serial.print(mesure); //Envoie de la mesure puis retour à la ligne
    Serial.println(" sans unité"); 
    delay(500);
}
