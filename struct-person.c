#include <stdio.h>
#include <string.h>

// 구조체 정의
// Person은 struct 태그(식별하기 위한 이름)
struct Person {         // Person 구조체 선언
    char name[100];     // 구조체 멤버-이름
    int age;            // 구조체 멤버-나이
    int height;         // 구조체 멤버-키
    float weight;       // 구조체 멤버-몸무게
};

struct animal {
    char name[100];
    int age;
    float weight;
    
};
int main()
{
    struct Person personA, personB;
    
    personA.age = 24;
    strcpy(personA.name,"Hong GilDong");
    personA.height = 179;
    
    personB.age = 23;
    strcpy(personB.name,"Hong GilSun");
    personB.height = 170;
    
    struct Person personC = {"Park", 40, 174, 66};
    struct Person personD = {"Kang", 39, 174, 75.1};
    struct animal dog = {"happy", 5, 10.2};
    printf("personC의 이름 %s, 나이 = %d\n", personC.name, personC.age);
    printf("personD의 이름 %s, 몸무게 = %.1f\n", personD.name, personD.weight);
    printf("dog의 이름 %s, 몸무게 = %.1f Kg\n", dog.name, dog.weight);

    return 0;
}