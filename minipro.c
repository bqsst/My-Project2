#include <stdio.h>

int main()
{
    int unit, unit_use, type,pay1,pay2,pay3,pay4,pay5,pay6,pay7,pay8,pay9,pay10,pay11, pay=0;
    char y;
    float i[11]={10.20,16.00,19.00,21.20,21.60,21.65,21.70,21.75,21.80,21.85,21.90};
    float l[11]={16.00,19.00,20.00,21.50,21.60,21.65,21.70,21.75,21.80,21.85,21.90};
    float u[11]={18.00,21.00,24.00,27.00,29.00,29.25,29.50,29.75,29.50,29.25,29.00};

    printf("เริ่มต้นโปรแกรมการคำนวณน้ำประปา>>>");

    printf("\nประเภทผู้ใช้:");
    scanf("%d", &type);
    

    switch (type)
    {
    case 1:
        do
        {
            
            printf(">>ที่อยู่อาศัย");

            printf("\nจำนวนหน่วย:");
            scanf("%d", &unit);
            printf("ราคาต่อหน่วย(บาท)  คูณ   หน่วยนํ้าที่ใช้(ลบ.ม)   เป็นเงินทั้งสิ้น(บาท)");
            if (unit > 3000)
            {
                pay1=0;
                unit_use = unit - 3000;
                pay1 = pay1 + unit_use * i[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",i[10],unit_use,pay1);
                
            }
            if (unit > 2000 && unit <= 3000)
            {
                pay2=0;
                unit_use = unit - 2000;
                pay2 = pay2 + unit_use * i[9];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",i[9],unit_use,pay2);
                
            }
            if (unit > 1000 && unit <= 2000)
            {
                pay3=0;
                unit_use = unit - 1000;
                pay3 = pay3 + unit_use * i[8];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",i[8],unit_use,pay3);
                
            }
            if (unit > 300 && unit <= 1000)
            {
                pay4=0;
                unit_use = unit - 300;
                pay4 = pay4 + unit_use * i[7];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",i[7],unit_use,pay4);
                
            }
            if (unit > 100 && unit <= 300)
            {
                pay5=0;
                unit_use = unit - 100;
                pay5 = pay5 + unit_use * i[6];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",i[6],unit_use,pay5);
               
            }
            if (unit > 80 && unit <= 100)
            {
                pay6=0;
                unit_use = unit - 80;
                pay6 = pay6 + unit_use * i[5];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[5],unit_use,pay6);
               
            }
            if (unit > 50 && unit <= 80)
            {
                pay7=0;
                unit_use = unit - 50;
                pay7 = pay7 + unit_use * i[4];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[4],unit_use,pay7);
                
            }
            if (unit > 30 && unit <= 50)
            {
                pay8=0;
                unit_use = unit - 30;
                pay8 = pay8 + unit_use * i[3];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[3],unit_use,pay8);
               
            }
            if (unit > 20 && unit <= 30)
            {
                pay9=0;
                unit_use = unit - 20;
                pay9 = pay9 + unit_use * i[2];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[2],unit_use,pay9);
                
            }
            if (unit > 10 && unit <= 20)
            {
                pay10=0;
                unit_use = unit - 10;
                pay10 = pay10 + unit_use * i[1];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[1],unit_use,pay10);
                
            }
            if (unit > 0 && unit <= 10)
            {
                pay11=0;
                unit_use = unit;
                pay11 = pay11 + unit_use * i[0];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",i[0],unit_use,pay11);
               
            }
            pay = pay1+pay2+pay3+pay4+pay5+pay6+pay7+pay8+pay9+pay10+pay11;
            printf("\nรวมค่านํ้า                                   %d บาท",pay);

            printf("\nต้องการคำนวณอีกครั้งหรือไม่:");
            scanf(" %c", &y);

        } while (y == 'Y');
        printf("เสร็จสิ้นการทำงาน");
        break;

    case 2:
        do
        {
            pay =0 ;
            printf(">>ราชการและธุรกิจขนาดเล็ก");

            printf("\nจำนวนหน่วย:");
            scanf("%d", &unit);
            printf("ราคาต่อหน่วย(บาท)  คูณ   หน่วยนํ้าที่ใช้(ลบ.ม)   เป็นเงินทั้งสิ้น(บาท)");

            if (unit > 3000)
            {
                pay1=0;
                unit_use = unit - 3000;
                pay1 = pay1 + unit_use * l[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",l[10],unit_use,pay1);
            }
            if (unit > 2000 && unit <= 3000)
            {
                pay2=0;
                unit_use = unit - 2000;
                pay2 = pay2 + unit_use * l[9];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",l[9],unit_use,pay2);
            }
            if (unit > 1000 && unit <= 2000)
            {
                pay3=0;
                unit_use = unit - 1000;
                pay3 = pay3 + unit_use * l[8];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",l[8],unit_use,pay3);
            }
            if (unit > 300 && unit <= 1000)
            {
                pay4=0;
                unit_use = unit - 300;
                pay4 = pay4 + unit_use * l[7];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",l[7],unit_use,pay4);
            }
            if (unit > 100 && unit <= 300)
            {
                pay5=0;
                unit_use = unit - 100;
                pay5 = pay5 + unit_use * l[6];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",l[6],unit_use,pay5);
            }
            if (unit > 80 && unit <= 100)
            {
                pay6=0;
                unit_use = unit - 80;
                pay6 = pay6 + unit_use * l[5];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[5],unit_use,pay6);
            }
            if (unit > 50 && unit <= 80)
            {
                pay7=0;
                unit_use = unit - 50;
                pay7 = pay7 + unit_use * l[4];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[4],unit_use,pay7);
            }
            if (unit > 30 && unit <= 50)
            {
                pay8=0;
                unit_use = unit - 30;
                pay8 = pay8 + unit_use * l[3];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[3],unit_use,pay8);
            }
            if (unit > 20 && unit <= 30)
            {
                pay9=0;
                unit_use = unit - 20;
                pay9 = pay9 + unit_use * l[2];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[2],unit_use,pay9);
            }
            if (unit > 10 && unit <= 20)
            {
                pay10=0;
                unit_use = unit - 10;
                pay10 = pay10 + unit_use * l[1];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[1],unit_use,pay10);
            }
            if (unit > 0 && unit <= 10)
            {
                pay11=0;
                unit_use = unit;
                pay11 = pay11 + unit_use * l[0];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",l[0],unit_use,pay11);
            }
            pay = pay1+pay2+pay3+pay4+pay5+pay6+pay7+pay8+pay9+pay10+pay11;
            printf("\nรวมค่านํ้า                                   %d บาท",pay);

            printf("\nต้องการคำนวณอีกครั้งหรือไม่:");
            scanf(" %c", &y);

        } while (y == 'Y');
        printf("เสร็จสิ้นการทำงาน");
        break;

    case 3:
        do
        {
            pay =0 ;
            printf(">>รัฐวิสาหกิจ / อุตฯ / ธุรกิจขนาดใหญ่");

            printf("\nจำนวนหน่วย:");
            scanf("%d", &unit);
            printf("ราคาต่อหน่วย(บาท)  คูณ   หน่วยนํ้าที่ใช้(ลบ.ม)   เป็นเงินทั้งสิ้น(บาท)");

            if (unit > 3000)
            {
                pay1=0;
                unit_use = unit - 3000;
                pay1 = pay1 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",u[10],unit_use,pay1);
            }
            if (unit > 2000 && unit <= 3000)
            {
                pay2=0;
                unit_use = unit - 2000;
                pay2 = pay2 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",u[9],unit_use,pay2);
            }
            if (unit > 1000 && unit <= 2000)
            {
                pay3=0;
                unit_use = unit - 1000;
                pay3 = pay3 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d             %d บาท",u[8],unit_use,pay3);
            }
            if (unit > 300 && unit <= 1000)
            {
                pay4=0;
                unit_use = unit - 300;
                pay4 = pay4 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",u[7],unit_use,pay4);
            }
            if (unit > 100 && unit <= 300)
            {
                pay5=0;
                unit_use = unit - 100;
                pay5 = pay5 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d              %d บาท",u[6],unit_use,pay5);
            }
            if (unit > 80 && unit <= 100)
            {
                pay6=0;
                unit_use = unit - 80;
                pay6 = pay6 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[5],unit_use,pay6);
            }
            if (unit > 50 && unit <= 80)
            {
                pay7=0;
                unit_use = unit - 50;
                pay7 = pay7 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[4],unit_use,pay7);
            }
            if (unit > 30 && unit <= 50)
            {
                pay8=0;
                unit_use = unit - 30;
                pay8 = pay8 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[3],unit_use,pay8);
            }
            if (unit > 20 && unit <= 30)
            {
                pay9=0;
                unit_use = unit - 20;
                pay9 = pay9 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[2],unit_use,pay9);
            }
            if (unit > 10 && unit <= 20)
            {
                pay10=0;
                unit_use = unit - 10;
                pay10 = pay10 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[1],unit_use,pay10);
            }
            if (unit > 0 && unit <= 10)
            {
                pay11=0;
                unit_use = unit;
                pay11 = pay11 + unit_use * u[10];
                unit = unit - unit_use;
                printf("\n%.2f            X      %d               %d บาท",u[0],unit_use,pay11);
            }
            pay = pay1+pay2+pay3+pay4+pay5+pay6+pay7+pay8+pay9+pay10+pay11;
            printf("\nรวมค่านํ้า                                   %d บาท",pay);

            printf("\nต้องการคำนวณอีกครั้งหรือไม่:");
            scanf(" %c", &y);

        } while (y =='Y');
        printf(">>เสร็จสิ้นการทำงาน");
        break;
    }
}

    

    
    



 
    
  
    