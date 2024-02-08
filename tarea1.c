// Materia: Diseño Digital Moderno
// Equipo 4

/* Alumnos:
    CARBALLO RAMÍREZ HANNY
    GONZALEZ INIESTRA EMILIO
    NIETO RODRIGUEZ TOMAS ANDRES
    SOSA CORTEZ MISAEL IVAN
*/


#include <stdio.h>
#include <math.h>
#include <string.h>
#include <conio.h>

long int Bin_a_Dec(long int);
long int Bin_a_Oct(long int);
long int Bin_a_Hex(long int);
long int Dec_a_Bin(long int);
long int Dec_a_Oct(long int);
long int Dec_a_Hex(long int);
long int Oct_a_Bin(long int);
long int Oct_a_Dec(long int);
void Hex_a_Bin(char []);
void Hex_a_Dec(char []);

int main()
{
    int op,num=1,comp;
    long int bin,oct,dec;
    char hex[100];
    int i,j;

    printf("\t\tTAREA 1: CONVERSOR DE NUMEROS\n\n");
    printf("\t\tMATERIA: DISENO DIGITAL MODERNO\n\n");
    printf("\t\tEQUIPO 4. INTEGRANTES: CARBALLO RAMIREZ HANNY,\n\n");
    printf("\t\t\tGONZALEZ INIESTRA EMILIO,\n\n");
    printf("\t\t\tNIETO RODRIGUEZ TOMAS ANDRES,\n\n");
    printf("\t\t\tSOSA CORTEZ MISAEL IVAN\n\n");

    while(num!=0)
    {
        printf("\t\t||||ELIGE LA CONVERSION||||\n\n");

        printf(">> BINARIO <<\n");
        printf("1: Binario a Decimal.\n2: Binario a Octal.\n3: Binario a Hexadecimal.\n");

        printf("\n>> DECIMAL <<\n");
        printf("4: Decimal a Binario.\n5: Decimal a Octal.\n6: Decimal a Hexadecimal.\n");

        printf("\n>> OCTAL <<\n");
        printf("7: Octal a Binario.\n8: Octal a Decimal.\n");

        printf("\n>> HEXADECIMAL <<\n");
        printf("9: Hexadecimal a Binario.\n10: Hexadecimal a Decimal.\n");

        printf("\nPOR FAVOR, INGRESE SU ELECCION: ");
        scanf("%d",&op);

        switch(op)
        {
            case 1:
                printf("\n>>> BINARIO A DECIMAL <<<\n");
                D:
                printf("\nIngrese el numero en forma binaria (0 y 1): ");
                scanf("%ld",&bin);

                comp=bin;

                while(comp!=0)
                {
                    num=comp%10;
                    if(num>1)
                    {
                        printf("\n%d NO ES NUMERO BINARIO\n",bin);
                        printf("INTENTE NUEVAMENTE\n");
                        goto D;
                    }
                    else
                    comp=comp/10;
                }

                Bin_a_Dec(bin); break;

            case 2:
                printf("\n>>> BINARIO A OCTAL <<<\n");
                E:
                printf("\nIngrese el numero en forma binaria (0 y 1): ");
                scanf("%ld",&bin);

                comp=bin;

                while(comp!=0)
                {
                    num=comp%10;
                    if(num>1)
                    {
                        printf("\n%d NO ES NUMERO BINARIO\n",bin);
                        printf("INTENTE NUEVAMENTE\n");
                        goto E;
                    }
                    else
                    comp=comp/10;
                }

                Bin_a_Oct(bin); break;

            case 3:
                printf("\n>>> BINARIO A HEXADECIMAL <<<\n");
                F:
                printf("\nIngrese el numero en forma binaria (0 y 1): ");
                scanf("%ld",&bin);

                comp=bin;

                while(comp!=0)
                {
                    num=comp%10;
                    if(num>1)
                    {
                        printf("\n%d NO ES NUMERO BINARIO\n",bin);
                        printf("INTENTE NUEVAMENTE\n");
                        goto F;
                    }
                    else
                    comp=comp/10;
                }

                Bin_a_Hex(bin); break;

            case 4:
                printf("\n>>> DECIMAL A BINARIO <<<\n");
                printf("\nIngrese el numero en forma decimal (0 a 9): ");
                scanf("%ld",&dec);
                Dec_a_Bin(dec); break;

            case 5:
                printf("\n>>> DECIMAL A OCTAL <<<\n");
                printf("\nIngrese el numero en forma decimal (0 a 9): ");
                scanf("%ld",&dec);
                Dec_a_Oct(dec); break;

            case 6:
                printf("\n>>> DECIMAL A HEXADECIMAL <<<\n");
                printf("\nIngrese el numero en forma decimal (0 a 9): ");
                scanf("%ld",&dec);
                Dec_a_Hex(dec); break;

            case 7:
                printf("\n>>> OCTAL A BINARIO <<<\n");
                A:
                printf("\nIngrese el numero en forma octal (0 a 7): ");
                scanf("%ld",&oct);

                comp=oct;

                while(comp!=0)
                {
                    num=comp%10;
                    if(num>7)
                    {
                        printf("\n%d NO ES NUMERO DE OCTAL\n",num);
                        goto A;
                    }
                    else
                    {
                    comp=comp/10;
                    i++;
                    }
                }
                Oct_a_Bin(oct); break;

            case 8:
                printf("\n>>> OCTAL A DECIMAL <<<\n");
                B:
                printf("\nIngrese el numero en forma octal (0 a 7): ");
                scanf("%ld",&oct);

                comp=oct;

                while(comp!=0)
                {
                    num=comp%10;
                    if(num>7)
                    {
                        printf("\n%d NO ES NUMERO DE OCTAL\n",num);
                        goto B;
                    }
                    else
                    {
                    comp=comp/10;
                    i++;
                    }
                }
                Oct_a_Dec(oct); break;

            case 9:
                printf("\n>>> HEXADECIMAL A BINARIO <<<\n");
                X:
                printf("\nIngrese el numero en forma hexadecimal: ");
                scanf("%s",&hex);

                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nDebe ingresar un numero hexadecimal\n");
                        printf("'%c' NO ES un numero hexadecimal\n",hex[i]);
                        goto X;
                    }
                }
                Hex_a_Bin(hex); break;

            case 10:
                printf("\n>>> HEXADECIMAL A DECIMAL <<<\n");
                Y:
                printf("\nIngrese el numero en forma hexadecimal: ");
                scanf("%s",&hex);
                for(i=strlen(hex)-1;i>=0;i--)
                {
                    if(hex[i]>'f' && hex[i]<='z' || hex[i]>'F'&& hex[i]<='Z')
                    {
                        printf("\nDebe ingresar un numero hexadecimal\n");
                        printf("'%c' NO ES un numero hexadecimal\n",hex[i]);
                        goto Y;
                    }
                }
                Hex_a_Dec(hex); break;

            default:
                printf("\n NUMERO INVALIDO\n");
                break;
        }
        printf("\n\nDESEA CONTINUAR? = (1/0) :\n");
        scanf("%d",&num);
    }
}

long int Bin_a_Dec(long int bin)
{
    int rec,sum=0,i=0;
    while(bin!=0)
    {
        rec=bin%10;
        bin=bin/10;
        sum=sum+rec*pow(2,i);
        i++;
    }

    printf("\nNumero decimal equivalente : %d",sum);
}

long int Bin_a_Oct(long int bin)
{
    int i=0,rec,sum=0,recordatorio[100],lon=0;

    while(bin!=0)
    {
        rec=bin%10;
        bin=bin/10;
        sum=sum+rec*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        recordatorio[i]=sum%8;
        sum=sum/8;
        i++;
        lon++;
    }
    printf("\nNumero Octal equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        printf("%d",recordatorio[i]);
    }
}

long int Bin_a_Hex(long int bin)
{
    int rec,i=0,sum=0,recordatorio[100],lon=0;

    while(bin!=0)
    {
        rec=bin%10;
        bin=bin/10;
        sum=sum+rec*pow(2,i);
        i++;
    }
    i=0;
    while(sum!=0)
    {
        recordatorio[i]=sum%16;
        sum=sum/16;
        i++;
        lon++;
    }
    printf("\nNumero hexadecimal equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        switch(recordatorio[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",recordatorio[i]);
        }
    }
}

long int Dec_a_Bin(long int dec)
{
    int rec[50],i,lon=0;
    do
    {
        rec[i]=dec%2;
        dec=dec/2;
        i++;
        lon++;
    }
    while(dec!=0);

    printf("\nNumero binario equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        printf("%d",rec[i]);
    }
}

long int Dec_a_Oct(long int dec)
{
    int rec[50],i,lon=0;
    do
    {
        rec[i]=dec%8;
        dec=dec/8;
        i++;
        lon++;
    }
    while(dec!=0);

    printf("\nNumero Octal equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        printf("%d",rec[i]);
    }
}

long int Dec_a_Hex(long int dec)
{
    int rec[50],i,lon=0;
    do
    {
        rec[i]=dec%16;
        dec=dec/16;
        i++;
        lon++;
    }
    while(dec!=0);

    printf("\nNumero hexadecimal equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        switch(rec[i])
        {
            case 10:
                printf("A"); break;

            case 11:
                printf("B"); break;

            case 12:
                printf("C"); break;

            case 13:
                printf("D"); break;

            case 14:
                printf("E"); break;

            case 15:
                printf("F"); break;

            default:
                printf("%d",rec[i]);
        }
    }
}

long int Oct_a_Bin(long int oct)
{
    int rec[50],lon=0,decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }

    i=0;
    do
    {
        rec[i]=decimal%2;
        decimal=decimal/2;
        i++;
        lon++;
    }
    while(decimal!=0);

    printf("\nNumero binario equivalente : ");
    for(i=lon-1;i>=0;i--)
    {
        printf("%d",rec[i]);
    }
}

long int Oct_a_Dec(long int oct)
{
    int decimal=0,i=0,num,ans;

    while(oct!=0)
    {
        ans=oct % 10;
        decimal = decimal + ans * pow(8,i);
        i++;
        oct = oct/10;
    }
    printf("\nNumero decimal equivalente : %d",decimal);
}

void Hex_a_Bin(char hex[])
{
    int i=0;
    printf("\nNumero binario equivalente : ");
    for(i=0;i<strlen(hex);i++)
    {
        switch (hex[i])
        {
        case '0':
            printf("0000"); break;
        case '1':
            printf("0001"); break;
        case '2':
            printf("0010"); break;
        case '3':
            printf("0011"); break;
        case '4':
            printf("0100"); break;
        case '5':
            printf("0101"); break;
        case '6':
            printf("0110"); break;
        case '7':
            printf("0111"); break;
        case '8':
            printf("1000"); break;
        case '9':
            printf("1001"); break;
        case 'A':
        case 'a':
            printf("1010"); break;
        case 'B':
        case 'b':
            printf("1011"); break;
        case 'C':
        case 'c':
            printf("1100"); break;
        case 'D':
        case 'd':
            printf("1101"); break;
        case 'E':
        case 'e':
            printf("1110"); break;
        case 'F':
        case 'f':
            printf("1111"); break;

        default:
            printf("\n Digito hexadecimal no valido %c ", hex[i]);
        }
    }

}

void Hex_a_Dec(char hex[])
{
    int i,num=0,power=0,decimal=0;

    for(i=strlen(hex)-1;i>=0;i--)
    {
        if(hex[i]=='A'||hex[i]=='a')
        {
            num=10;
        }
        else if(hex[i]=='B'||hex[i]=='b')
        {
            num=11;
        }
        else if(hex[i]=='C'||hex[i]=='c')
        {
            num=12;
        }
        else if(hex[i]=='D'||hex[i]=='d')
        {
            num=13;
        }
        else if(hex[i]=='E'||hex[i]=='e')
        {
            num=14;
        }
        else if(hex[i]=='F'||hex[i]=='f')
        {
            num=15;
        }
        else

        {
            num=hex[i]-48;
        }

        decimal=decimal+num*pow(16,power);
        power++;
    }
    printf("\nNumero decimal equivalente : %d",decimal);
}