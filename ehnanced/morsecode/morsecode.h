/*
    basic time unit = duration of dot.
    duration of a dash = duration of dots x 3
    duration of dot = basic time unit
    duration of intraletter spacings = pause between two pulses within a letter = duration of dot
    spacings between letters in a word = duration of dots x 3
    spacings between words = generally duration of dots x 7, fast people speed up to 6 dots
    nomenclature of the pulses based on sounds =
      A ‘dot’ has to sound like “dit”.
      A ‘dash’ has to sound like “dah”.
      A ‘dot’, that is not the last dot in the sequence alloted to a letter, has to sound like “di”.
      e.g. The letter ‘S’ in Morse code should sound like di-di-dit and ‘Q’ sounds like dah-dah-di-dah.
*/
#define dotPeriod 100
#define dashPeriod (dotPeriod*3)
#define relaxTime (dotPeriod)
#define letterSpace (dotPeriod*2)
#define wordSpace (dotPeriod*4)

void dot() {
  digitalWrite(ledPin,HIGH);
  delay(dotPeriod);
  digitalWrite(ledPin,LOW);
  delay(relaxTime);
}

void dash() {
  digitalWrite(ledPin,HIGH);
  delay(dashPeriod);
  digitalWrite(ledPin,LOW);
  delay(relaxTime);
}

void a() {
  dot(); dash(); delay(letterSpace);
}

void b() {
  dash(); dot(); dot(); dot(); delay(letterSpace);
}

void c() {
  dash(); dot(); dash(); dot(); delay(letterSpace);
}

void d() {
  dash(); dot(); dot(); delay(letterSpace);
}

void e() {
  dot(); delay(letterSpace);
}

void f() {
  dot(); dot(); dash(); dot(); delay(letterSpace);
}

void g() {
  dash(); dash(); dot(); delay(letterSpace);
}

void h() {
  dot(); dot(); dot(); dot(); delay(letterSpace);
}

void i() {
  dot(); dot(); delay(letterSpace);
}

void j() {
  dot(); dash(); dash(); dash(); delay(letterSpace);
}

void k() {
  dash(); dot(); dash(); delay(letterSpace);
}

void l() {
  dot(); dot(); delay(letterSpace);
}

void m() {
  dash(); dash(); delay(letterSpace);
}

void n() {
  dash(); dot(); delay(letterSpace);
}

void o() {
  dash(); dash(); dash(); delay(letterSpace);
}

void p() {
  dot(); dash(); dash(); dot(); delay(letterSpace);
}

void q() {
  dash(); dash(); dot(); dash(); delay(letterSpace);
}

void r() {
  dot(); dash(); dot(); delay(letterSpace);
}

void s() {
  dot(); dot(); dot(); delay(letterSpace);
}

void t() {
  dash(); delay(letterSpace);
}

void u() {
  dot(); dot(); dash(); delay(letterSpace);
}

void v() {
  dot(); dot(); dot(); dash(); delay(letterSpace);
}

void w() {
  dot(); dash(); dash(); delay(letterSpace);
}

void x() {
  dash(); dot(); dot(); dash(); delay(letterSpace);
}

void y() {
  dash(); dot(); dash(); dash(); delay(letterSpace);
}

void z() {
  dash(); dash(); dot(); dot(); delay(letterSpace);
}

void one() {
  dot(); dash(); dash(); dash(); dash(); delay(letterSpace);
}

void two() {
  dot(); dot(); dash(); dash(); dash(); delay(letterSpace);
}

void three() {
  dot(); dot(); dot(); dash(); dash(); delay(letterSpace);
}

void four() {
  dot(); dot(); dot(); dot(); dash(); delay(letterSpace);
}

void five() {
  dot(); dot(); dot(); dot(); dot(); delay(letterSpace);
}

void six() {
 dash(); dot(); dot(); dot(); dot(); delay(letterSpace);
}

void seven() {
  dash(); dash(); dot(); dot(); dot(); delay(letterSpace);
}

void eight() {
  dash(); dash(); dash(); dot(); dot(); delay(letterSpace);
}

void nine() {
  dash(); dash(); dash(); dash(); dot(); delay(letterSpace);
}

void zero() {
  dash(); dash(); dash(); dash(); dash(); delay(letterSpace);
}