#include <stdio.h>
#include <conio.h>

int main()
{
    int che1, che2,cha1,cha2, arr[20],arri = 0,i,arra;

    printf("Enter number of elements (maxinum 20 elements): ");

    // รับค่า ASCII ของตัวอักษรแรก
    che1 = getch();

    // ตรวจสอบว่าค่าที่ป้อนเป็นตัวเลข 0-9 หรือไม่
    if (che1 >= '0' && che1 <= '9')
    {
        // แปลงค่า ASCII เป็น integer
        int digit1 = che1 - '0';

        // รับค่า ASCII ของตัวอักษรที่สอง (ถ้ามี)
        if (isdigit(che2 = getch()))
        {
            // แปลงค่า ASCII เป็น integer
            int digit2 = che2 - '0';

            // นำตัวเลขมาแสดงผล
            int number = digit1 * 10 + digit2;
            if (number <= 20)
            {
            printf("\nYou entered the number: %d\n", number);
            arri = arri + number;
            }
        }
        else
        {
            arri = arri + digit1;
        }
    }
    // Debug elements
    // printf("\nTest %d",arri);

    printf("\nEnter All %d array elements:",arri);

    for(i = 0; i < arri; i++)
    {
        cha1 = getch();
        if (cha1 >= '0' && cha1 <= '9')
        {
        // แปลงค่า ASCII เป็น integer
        int digit1 = cha1 - '0';

        // รับค่า ASCII ของตัวอักษรที่สอง (ถ้ามี)
        if (isdigit(cha2 = getch()))
        {
            // แปลงค่า ASCII เป็น integer
            int digit2 = cha2 - '0';

            // นำตัวเลขมาแสดงผล
            int number = digit1 * 10 + digit2;
            if (number <= 20)
            {
            printf("\nYou entered the number: %d\n", number);
            arr[i] = number;
            }
        }
        else
        {
            arr[i] = digit1;
        }
        }
    }
    
    for (int i = 0; i < arri; ++i) 
    {
        printf("%d", arr[i]);
    }

    

    return 0;
}
