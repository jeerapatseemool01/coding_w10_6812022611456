#include <stdio.h> 

int main() {
    int n, i; // ตัวแปรn=จำนวนนักเรียน,i=ตัวนับลูป
    float score, sum = 0, avg; // score=คะแนน,sum=ผลรวม,avg=ค่าเฉลี่ย

    printf("Enter number of students: "); // จำนวนนักเรียน
    scanf("%d", &n); // รับค่าn

    printf("Enter %d student scores (one per line):\n", n); // กรอกคะแนน
    for(i = 1; i <= n; i++) { // วนลูปi=1ถึงn
        printf("Score %d: ", i); // กรอกคะแนนของคนที่เท่าไร
        scanf("%f", &score); // รับค่าคะแนนมาเก็บในscore
        sum += score; // บวกคะแนนเข้าsum
    }

    avg = sum / n; // คำนวณค่าเฉลี่ย

    printf("\nNumber of students = %d\n", n); // แสดงจำนวนนักศึกษา
    printf("Average score = %.2f\n", avg); // แสดงค่าเฉลี่ยทศนิยม2ตำแหน่ง

    return 0;
}