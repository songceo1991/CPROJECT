#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student{
    char name[20];
    int score;
}Student;

int compare(const void *a, const void * b){
    Student first = *(Student *)a;
    Student second = *(Student *)b;
    if(@@@)
        return -1;
    else if(@@@)
        return 1;
    else
        return 0;
}

char* solution(char* names[], int names_len, int scores[], int scores_len, int K) {
    int len = names_len;
    Student* students = (Student*)malloc(sizeof(Student)*len);
    for(int i = 0; i < len; i++){
        strcpy(@@@, @@@);
        @@@ = @@@;
    }
    qsort(students, len, sizeof(Student), compare);
    return @@@;
}

// 아래는 테스트케이스 출력을 해보기 위한 main 함수입니다.
int main() {
    char* names[5] = {"lukas", "james", "levi", "eli", "max"};
    int names_len = 5;
    int scores[5] = {30, 20, 50, 40, 10};//동점자 없음
    int scores_len = 5;
    int K = 2;
    char* ret = solution(names, names_len, scores, scores_len, K);
    
    // [실행] 버튼을 누르면 출력 값을 볼 수 있습니다.
    printf("solution 함수의 반환 값은 %s 입니다.\n", ret);
}