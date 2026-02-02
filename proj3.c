#include <stdio.h>
#include <string.h>


typedef struct CelestialBody {
    char name[50];
    double mass_in_kg;
    int satellites;

    void (*display_func)(struct CelestialBody*);
} CelestialBody;

void display_body(struct CelestialBody* body_ptr) {
    printf("\n--- Celestial Body Details ---\n");

    printf("Name: %s\n", body_ptr->name);
    printf("Mass: %.2e kg\n", body_ptr->mass_in_kg);
    printf("Number of Satellites: %d\n", body_ptr->satellites);
    printf("------------------------------\n");
}


void get_user_input(struct CelestialBody* body_ptr) {
    printf("Enter the name of the celestial body: ");

    fgets(body_ptr->name, 50, stdin);

    body_ptr->name[strcspn(body_ptr->name, "\n")] = 0;

    printf("Enter its mass in kg (e.g., 5.97e24 for Earth): ");
    scanf("%lf", &body_ptr->mass_in_kg);

    printf("Enter the number of natural satellites: ");
    scanf("%d", &body_ptr->satellites);

    body_ptr->display_func = &display_body;
}

int main() {

    CelestialBody earth;

    CelestialBody *ptr_earth = &earth;

    get_user_input(ptr_earth);

    ptr_earth->display_func(ptr_earth);

    return 0;
}




