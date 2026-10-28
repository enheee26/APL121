#include <stdio.h>

int main() {
    int guests, buuz_per_person;
    float total_buuz;
    float meat_kg, flour_kg;
    float prep_hours;
    
    printf("--- 1. ЦАГААН САРЫН БУУЗ ТООЦОЛГУУР ---\n");
    printf("Зочдын нийт тоог оруулна уу: ");
    scanf("%d", &guests);
    printf("Нэг хүнд ногдох буузны тоо: ");
    scanf("%d", &buuz_per_person);
    
    // Тооцоолол: 1 ширхэг буузанд дунджаар 30г мах, 35г гурил ордог гэж үзэхэд
    total_buuz = guests * buuz_per_person;
    meat_kg = (total_buuz * 30) / 1000.0;
    flour_kg = (total_buuz * 35) / 1000.0;
    prep_hours = total_buuz / 100.0; // Цагт дунджаар 100 бууз чихдэг гэж үзвэл
    
    printf("\n--- ХЭРЭГЦЭЭТ МАТЕРИАЛ БА ЦАГ ---\n");
    printf("Нийт хийх буузны тоо: %.0f ширхэг\n", total_buuz);
    printf("Шаардлагатай мах: %.2f кг\n", meat_kg);
    printf("Шаардлагатай гурил: %.2f кг\n", flour_kg);
    printf("Бэлтгэх нийт хугацаа: %.1f цаг\n", prep_hours);
    
    printf("\n--- 2. ШИНИЙН 1-5 ӨДРИЙН ТӨЛӨВЛӨГӨӨ ---\n");
    printf("Өдөр\tХүлээн авах зочны тоо\tБэлтгэх бууз\n");
    for(int day = 1; day <= 5; day++) {
        int daily_guests = guests / 5 + (day * 2); // Өдөр бүрийн хуваарилалт
        printf("Шинийн %d\t%d хүн\t\t%.0f ширхэг\n", day, daily_guests, (float)(daily_guests * buuz_per_person));
    }
    
    printf("\n--- 3. 3 АЙЛЫН БУУЗНЫ ТООГ ЭРЭМБЭЛЭХ ---\n");
    int a, b, c, temp;
    printf("Өөр бусад 3 айлын захиалсан/идэх буузны тоог зайгаар тусгаарлан оруулна уу (Жишээ: 450 600 300): ");
    scanf("%d %d %d", &a, &b, &c);
    
    // Ихээс бага руу эрэмбэлэх энгийн логик (Bubble sort төстэй)
    if (a < b) { temp = a; a = b; b = temp; }
    if (a < c) { temp = a; a = c; c = temp; }
    if (b < c) { temp = b; b = c; c = temp; }
    
    printf("Ихээс бага рүү эрэмбэлсэн байдал: %d, %d, %d\n", a, b, c);
    
    return 0;
}