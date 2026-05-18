#define TRIG_PIN 5
#define ECHO_PIN 18
#define BUZZER_PIN 23

long duration;
int distance;

void setup() {

  pinMode(TRIG_PIN, OUTPUT);
  pinMode(ECHO_PIN, INPUT);

  pinMode(BUZZER_PIN, OUTPUT);

  Serial.begin(115200);
}

void loop() {

  // تنظيف TRIG
  digitalWrite(TRIG_PIN, LOW);
  delayMicroseconds(2);

  // إرسال الموجة
  digitalWrite(TRIG_PIN, HIGH);
  delayMicroseconds(10);

  digitalWrite(TRIG_PIN, LOW);

  // قراءة الإشارة
  duration = pulseIn(ECHO_PIN, HIGH);

  // حساب المسافة
  distance = duration * 0.034 / 2;

  Serial.print("Distance: ");
  Serial.println(distance);

  // إذا كان الجسم قريب
  if (distance > 0 && distance <= 100) {

    digitalWrite(BUZZER_PIN, HIGH);

    delay(distance * 3);

    digitalWrite(BUZZER_PIN, LOW);

    delay(distance * 3);
  }

  else {

    digitalWrite(BUZZER_PIN, LOW);
  }
}