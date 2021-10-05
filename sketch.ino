// Pin Configration
const int pb1 = 6;     // the number of the pushbutton pin-01
const int pb2 = 7;     // the number of the pushbutton pin-02
const int ledpin = 8;      // the number of the LED pin

// variables will change:
int cond1 = 0;         // variable for reading the pushbutton status
int cond2 = 0;         // variable for reading the pushbutton status

void setup(void)
{
    // initialize the LED pin as an output:
    pinMode(ledpin, OUTPUT);
    // initialize the pushbutton pin as an input:
    pinMode(pb1, INPUT);
    pinMode(pb2, INPUT);
}

void loop(void)
{
    // read the state of the pushbutton value:
    cond1 = digitalRead(pb1);
    cond2 = digitalRead(pb2);

    // check if the pushbutton is pressed. 
    //If it is, the buttonState is HIGH:
    if (cond1 == LOW && cond2 == LOW){
        // turn LED on:
        digitalWrite(ledpin, HIGH);
    }
    else{
        // turn LED off:
        digitalWrite(ledpin, LOW);
    }
}