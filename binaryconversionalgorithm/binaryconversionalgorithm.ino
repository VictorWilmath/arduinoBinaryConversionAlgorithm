//any integer can be put into userInput

int userInput =0;
//code takes user input and divides by 2
//if remainder, digit is 1
//if no remainder, digit is 0 
void setup() {
Serial.begin(9600);
int seq1 = userInput/2;
int rem1 = userInput%2;
if (rem1 > 0) {
  int digitOne=1;
}
else if(rem1 = 0){
  int digitOne = 0;
}
int seq2 = seq1/2;
int rem2 = seq1%2;
if(rem2 > 0){
  int digitTwo = 1;
}
else if (rem1 = 0) {
  int digitTwo = 0;
}
int seq3 = seq2/2;
int rem3 = seq2%2;
if (rem3 > 0) {
  int digitThree = 1;
}
else if (rem3 = 0) {
  int digitThree = 0;
}
int seq4 = seq3/2;
int rem4 = seq3%2;
if(rem4>0){
  int digitFour = 1;
}
else if(rem4 = 0); {
  int digitFour = 0;
}
int seq5 = seq4/2;
int rem5 = seq4%2;
if (rem5 > 0){
  int digitFive = 1;
}
else if(rem5 = 0){
  int digitFive = 0;
}
int seq6 = seq5/2;
int rem6 = seq5%2;
if(rem6 > 0){
  int digitSix = 1;
}
else if(rem6 = 0);{
 int  digitSix = 0;
}
int seq7 = seq6/2;
int rem7 = seq6%2;
if (rem7 > 0){
 int digitSeven = 1;
}
else if(rem7 = 0);{
  int digitSeven = 0;
}
}

void loop() {
}
