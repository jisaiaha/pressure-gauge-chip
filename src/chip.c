#include "wokwi-api.h"
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct {
  bool isOn;
  float pressurePSI;
  float outputVoltage;
} chip_state_t;

chip_state_t *chip;

void chip_init() {
  chip = malloc(sizeof(chip_state_t));
  chip->isOn = false;
  chip->pressurePSI = 0.0f;
  chip->outputVoltage = 0.0f;
  printf("My pressure gauge works!\n ");
}

// Function to calculate output voltage based on pressure
float calculate_voltage_from_psi(float pressure) {
  return pressure * 5.0f; // Baseline calculation (modify as needed)
}

// Function to simulate voltage output based on pressure
void update_output_voltage() {
  if (chip->isOn) {
    // Use the calculate_voltage_from_psi function
    chip->outputVoltage = calculate_voltage_from_psi(chip->pressurePSI);
  } else {
    chip->outputVoltage = 0.0f;
  }
}

void toggle_power() {
  chip->isOn = !chip->isOn;
  update_output_voltage();
}

void set_pressure(float pressure) {
  chip->pressurePSI = pressure;
  update_output_voltage();
}

void chip_free() {
  free(chip);
}
