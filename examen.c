#include <stdio.h>

int main() {
    float monto,tinteres;
    printf("Ingrese el monto del préstamo: ");
    scanf("%f", &monto);

    int años;
    printf("Ingrese el tiempo para pagar el préstamo (en años): ");
    scanf("%d", &años);
    float ianual = 0.15;
    float imensual = ianual / 12 / 100;
    float total_interest_paid = 0;
    float tmonto = monto;

    for (int i = 0; i < años; i++) {
        float interesa = tmonto * ianual;
        float interesm = interesa/12;

        printf("Año %d:\n", i + 1);
        printf("Interés anual: %.2f\n", interesa);
        printf("Interés mensual: %.2f\n", interesm);
        printf("Monto del préstamo restante: %.2f\n", tmonto);
        printf("Total de intereses pagados: %.2f\n", tinteres);
        printf("\n");
        tmonto += interesa;
        total_interest_paid += interesa;
    }

    return 0;
}