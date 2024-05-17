#include <LiquidCrystal.h>

// Inicializa la biblioteca con los números de los pines a los que está conectado el LCD
LiquidCrystal lcd(7, 8, 9, 10, 11, 12);

void setup() {
  // Establece el número de columnas y filas del LCD
  lcd.begin(16, 2);

  // Imprime el nombre en la primera fila
  lcd.setCursor(0, 0); // Columna 0, fila 0
  lcd.print("Manfredo Vasquez");

  // Imprime el número de carné en la segunda fila
  lcd.setCursor(4, 1); // Columna 0, fila 1
  lcd.print("2023168");
}

void loop() {
  // No necesita hacer nada en loop
}
