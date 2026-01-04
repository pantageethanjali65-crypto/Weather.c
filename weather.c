include <stdio.h>

int main() {

int temp;

printf("Enter today's temperature (°C): ");

scanf("%d", &temp);

printf("\n--- WEATHER FORECAST ---\n");

if (temp < 10)

printf("Condition: Very Cold\nForecast: Wear warm clothes.\n");

else if (temp >= 10 && temp < 20)

printf("Condition: Cool\nForecast: Light jacket recommended.\n");

else if (temp >= 20 && temp < 30)

printf("Condition: Pleasant\nForecast: Perfect weather.\n");

else if (temp >= 30 && temp < 40)

printf("Condition: Hot\nForecast: Stay hydrated.\n");

else

printf("Condition: Very Hot\nForecast: Avoid going out in

afternoon.\n");

return 0;

  }
