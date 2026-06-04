/*
=================================================
GREEN-TRUST STATION
Sistema de Monitoramento Ambiental Inteligente

Global Solution 2026 - Edge Computing
FIAP - Engenharia de Software

Objetivo:
Monitorar condições ambientais locais e
identificar riscos que possam comprometer
áreas utilizadas para geração de créditos
de carbono.

Conceitos aplicados:
- Edge Computing
- IoT
- Sensoriamento Ambiental
- Monitoramento Climático
=================================================
*/

#include <DHT.h>
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

#define DHTPIN 7
#define DHTTYPE DHT22

DHT dht(DHTPIN, DHTTYPE);
LiquidCrystal_I2C lcd(0x27, 16, 2);

// LEDs
const int LED_VERDE = 13;
const int LED_AMARELO = 12;
const int LED_VERMELHO = 11;

// Buzzer
const int BUZZER = 5;

// Variáveis globais
float temperatura = 0;
float umidade = 0;
int risco = 0;

// Dados orbitais simulados
float ndvi = 0.82;
int biomassa = 124;

void setup()
{
  Serial.begin(9600);

  dht.begin();

  lcd.init();
  lcd.backlight();

  pinMode(LED_VERDE, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERMELHO, OUTPUT);

  pinMode(BUZZER, OUTPUT);

  telaInicial();
}

void loop()
{
  lerSensores();

  risco = calcularRisco();

  atualizarAlertas(risco);

  exibirDashboard();

  enviarTelemetria();

  delay(3000);
}

/*
=================================================
TELA INICIAL
=================================================
*/

void telaInicial()
{
  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("GREEN-TRUST");

  lcd.setCursor(0, 1);
  lcd.print("Station v1.0");

  delay(2500);
}

/*
=================================================
LEITURA DOS SENSORES
=================================================
*/

void lerSensores()
{
  temperatura = dht.readTemperature();
  umidade = dht.readHumidity();

  if (isnan(temperatura) || isnan(umidade))
  {
    Serial.println("ERRO: Falha na leitura do DHT22");
    return;
  }
}

/*
=================================================
CÁLCULO DE RISCO (%)
0 - 100 
=================================================
*/

int calcularRisco()
{
  int score = 0;

  // Temperatura

  if (temperatura >= 45)
    score += 50;

  else if (temperatura >= 40)
    score += 40;

  else if (temperatura >= 35)
    score += 25;

  else if (temperatura >= 30)
    score += 10;

  // Umidade

  if (umidade <= 20)
    score += 50;

  else if (umidade <= 30)
    score += 40;

  else if (umidade <= 40)
    score += 20;

  else if (umidade <= 50)
    score += 10;

  if (score > 100)
    score = 100;

  return score;
}

/*
=================================================
ALERTAS VISUAIS E SONOROS
=================================================
*/

void atualizarAlertas(int score)
{
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);

  noTone(BUZZER);

  if (score < 40)
  {
    digitalWrite(LED_VERDE, HIGH);
  }
  else if (score < 70)
  {
    digitalWrite(LED_AMARELO, HIGH);
  }
  else
  {
    digitalWrite(LED_VERMELHO, HIGH);

    tone(BUZZER, 1000);
  }
}

/*
=================================================
LCD
=================================================
*/

void exibirDashboard()
{
  // Tela 1

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("T:");
  lcd.print(temperatura, 1);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("U:");
  lcd.print(umidade, 0);
  lcd.print("%");

  delay(2000);

  // Tela 2

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("RISCO:");
  lcd.print(risco);
  lcd.print("%");

  lcd.setCursor(0, 1);

  if (risco < 40)
    lcd.print("BAIXO");

  else if (risco < 70)
    lcd.print("MODERADO");

  else
    lcd.print("CRITICO");

  delay(2000);

  // Tela 3

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("NDVI:");
  lcd.print(ndvi);

  lcd.setCursor(0, 1);
  lcd.print("tCO2:");
  lcd.print(biomassa);

  delay(2000);
}

/*
=================================================
TELEMETRIA
=================================================
*/

void enviarTelemetria()
{
  Serial.println("================================");
  Serial.println("GREEN-TRUST STATION");

  Serial.print("Temperatura: ");
  Serial.print(temperatura);
  Serial.println(" C");

  Serial.print("Umidade: ");
  Serial.print(umidade);
  Serial.println(" %");

  Serial.print("Indice de Risco: ");
  Serial.println(risco);

  Serial.print("NDVI: ");
  Serial.println(ndvi);

  Serial.print("Biomassa Estimada: ");
  Serial.print(biomassa);
  Serial.println(" tCO2");

  Serial.println("Dados enviados ao Dashboard");
  Serial.println("================================");
}
