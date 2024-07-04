#include<stdio.h>
#include<string.h>

//Function Declaration
void restaurant(int n);
float Bill_KFC();
float Bill_Chillox();
float Bill_Pizza_Hut();
float Bill_Crimson_Cup();
float Bill_Sultans_Dine();

void restaurant(int n)      //Function to show a restaurant's Food menu
{
    if (n==1)     //If user choose restaurant no. 1
    {
        printf("\nYou choose KFC\n\nFood Menu of KFC");
        printf("\n Snack box                 Price 312 BDT");
        printf("\n Zinger meal               Price 733 BDT");
        printf("\n Hot wings                 Price 460 BDT");
        printf("\n Fried chicken             Price 200 BDT");
        printf("\n\n");
    }
    else if (n==2)      //If user choose restaurant no. 2
    {
        printf("\nYou choose Chillox\n\nFood Menu of Chillox");
        printf("\n Mushroom chicken burger                 Price 180 BDT");
        printf("\n Beef cheese                             Price 200 BDT");
        printf("\n Naga drums                              Price 90 BDT");
        printf("\n Oreo shake                              Price 150 BDT");
        printf("\n\n");

    }
    else if (n==3)      //If user choose restaurant no. 3
    {
        printf("\nYou choose pizza hut\n\nFood Menu of pizza hut");
        printf("\n Classic beef pizza                         Price 859 BDT");
        printf("\n Beef pepperoni                             Price 549 BDT");
        printf("\n Mushroom pasta                             Price 329 BDT");
        printf("\n Garlic bread slice                         Price 119 BDT");
        printf("\n\n");
    }
    else if (n==4)      //If user choose restaurant no. 4
    {
        printf("\nYou choose crimson cup \n\nFood Menu of crimson cup BD");
        printf("\n French toast                 Price 200 BDT");
        printf("\n Flavored Latte               Price 200 BDT");
        printf("\n Cappuccino                   Price 180 BDT");
        printf("\n Espresso                     Price 130 BDT");
        printf("\n\n");
    }
    else if (n==5)      //If user choose restaurant no. 5
    {
       printf("\nYou choose Sultan's dine\n\nFood Menu of Sultan's dine");
        printf("\n Kacchi Biriani            Price 250 BDT");
        printf("\n Jali Kabab                Price 50  BDT");
        printf("\n Mutton Korma              Price 460 BDT");
        printf("\n Leg Roast                 Price 150 BDT");
        printf("\n\n");
    }
    else
    {
        printf("Restaurant not in this list \nInput correctly\n");      //If no restaurant found
    }
}

//User Defined Function for Calculation of Ordered item in 1st Restaurant (KFC)
float Bill_KFC()
{
    int quantity;
    float total,vat;
    char item[100];
    printf("Enter item name (Input as same as in menu): ");
    scanf(" %[^\n]c",&item);
     //Take item input from user as String
    vat=(15.0/100);
        if (strcmp(item, "Snack box") == 0)      //String comparison to check the input and the given item is equal
            {
                printf("Quantity: ");
                scanf("%d",&quantity);
                total=(312*quantity)+((312*quantity)*vat);
                printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
            }
        else if (strcmp(item, "Zinger meal") == 0)
            {
                printf("quantity: ");
                scanf("%d",&quantity);
                total=(733*quantity)+((733*quantity)*vat);
                printf("\n");
                printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
            }
        else if (strcmp(item, "Hot wings") == 0)
            {
                printf("quantity: ");
                scanf("%d",&quantity);
                total=(460*quantity)+((460*quantity)*vat);
                printf("\n");
                printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
            }
        else if (strcmp(item, "Fried chicken") == 0)
            {
                printf("quantity: ");
                scanf("%d",&quantity);
                total=(200*quantity)+((200*quantity)*vat);
                printf("\n");
                printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
            }
        else
            {
                printf("\nItem is not in this list \nInput correctly\n");
            }

            return total;
}


//User Defined Function for Calculation of Ordered item in 2nd Restaurant (Chillox)
float Bill_Chillox()
{
    int quantity;
    float total,vat;
    char item[100];
    printf("Enter item name (Input as same as in menu): ");
    scanf(" %[^\n]c", &item);
    vat=(15.0/100);
        if (strcmp(item, "Mushroom chicken burger") == 0)       //String comparison to check the input and the given item is equal
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(180*quantity)+((180*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Beef cheese") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(200*quantity)+((200*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Naga drums") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(90*quantity)+((90*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Oreo shake") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(150*quantity)+((150*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else
        {
            printf("\nItem is not in this list \nInput correctly\n");
        }
        return total;
}

//User Defined Function for Calculation of Ordered item in 3rd Restaurant (Pizza Hut)
float Bill_Pizza_Hut()
{
    int quantity;
    float total,vat;
    char item[100];
    printf("Enter item name (Input as same as in menu): ");
    scanf(" %[^\n]c", &item);
    vat=(15.0/100);
        if (strcmp(item, "Classic beef pizza") == 0)          //String comparison to check the input and the given item is equal
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(859*quantity)+((859*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Beef pepperoni") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(549*quantity)+((549*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Mushroom pasta") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(329*quantity)+((329*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Garlic bread slice") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(119*quantity)+((119*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else
        {
            printf("\nItem is not in this list \nInput correctly\n");
        }
        return total;
}

//User Defined Function for Calculation of Ordered item in 4th Restaurant (Crimson Cup)
float Bill_Crimson_Cup()
{
    int quantity;
    float total,vat;
    char item[100];
    printf("Enter item name (Input as same as in menu): ");
    scanf(" %[^\n]c", &item);
    vat=(15.0/100);
        if (strcmp(item, "French toast") == 0)          //String comparison to check the input and the given item is equal
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(200*quantity)+((200*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Flavored Latte") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(200*quantity)+((200*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Cappuccino") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(180*quantity)+((180*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Espresso") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(130*quantity)+((130*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else
        {
            printf("\nItem is not in this list \nInput correctly\n");
        }
        return total;
}

//User Defined Function for Calculation of Ordered item in 5th Restaurant (Sultan's Dine)
float Bill_Sultans_Dine()
{
    int quantity;
    float total,vat;
    char item[100];
    printf("Enter item name (Input as same as in menu): ");
    scanf(" %[^\n]c", &item);
    vat=(15.0/100);
        if (strcmp(item, "Kacchi Biriani") == 0)             //String comparison to check the input and the given item is equal
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(250*quantity)+((250*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Jali Kabab") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(50*quantity)+((50*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Mutton Korma") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(460*quantity)+((460*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else if (strcmp(item, "Leg Roast") == 0)
        {
            printf("quantity: ");
            scanf("%d",&quantity);
            total=(150*quantity)+((150*quantity)*vat);
            printf("\n");
            printf("Total Amount= %.2f Taka \t including 15 percentage vat ",total);
        }
        else
        {
            printf("\nItem is not in this list \nInput correctly\n");
        }
        return total;
}


///main Function for food ordering system
int main()
{
    int choice;
    printf("\t_________________________________________________________\n");
    printf("\t\tWelcome to our online food ordering system \n");             //Welcome message
    printf ("\t\t    Are you hungry? Want some food?\n");

    printf("\nChoose a restaurant\n\n");
    printf ("1. KFC \n2. Chillox \n3. Pizza hut \n4. Crimson cup \n5. Sultan's dine\n");     //Show Restaurant List

    printf("\nEnter your choice by serial number: ");
    scanf("%d",&choice);           //Take Restaurant number from user
    restaurant(choice);         //Call restaurant's Food menu function


    if (choice==1)          //If user choose 1st restaurant
    {
        if (Bill_KFC() == 0)        //If no item found close the programme
            return 0;
    }
    else if (choice==2)         //If user choose 2nd restaurant
    {
        if (Bill_Chillox() == 0)
            return 0;
    }
    else if (choice==3)         //If user choose 3rd restaurant
    {
        if (Bill_Pizza_Hut() == 0)
            return 0;
    }
    else if (choice==4)         //If user choose 4th restaurant
    {
        if (Bill_Crimson_Cup() == 0)
            return 0;
    }
    else if (choice==5)         //If user choose 5th restaurant
    {
        if (Bill_Sultans_Dine() == 0)
            return 0;
    }
    else                    //If no restaurant found close this programme
    {
        return 0;
    }

    int method,i;
    printf("\n\nSelect payment method (You can try maximum 3 times)\n");
    printf("1. Bkash \n2. Cash \n3. Credit card \n4. Rocket \n5. Nagad");

    for (i=1; i<=3; i++)        //Loop for payment method selection 3 times
    {
         printf("\n\nEnter method number: ");
         scanf("%d",&method);
    if (method>=1 && method<=5)
    {
        if(method==1)
        {
            printf("\n");
            printf("Your order successfully received.Thank you.\n(Transaction partner Bkash)");
            printf("\n");
            return 0;
        }
        else if(method==2)
        {
            printf("\n");
            printf("Your order successfully received.Thank you.\n(Transaction partner Cash)");
            printf("\n");
            return 0;
        }
        else if(method==3)
        {
            printf("\n");
            printf("Your order successfully received.Thank you.\n(Transaction partner Credit Card)");
            printf("\n");
            return 0;
        }
        else if(method==4)
        {
            printf("\n");
            printf("Your order successfully received.Thank you.\n(Transaction partner Rocket)");
            printf("\n");
            return 0;
        }
        else if(method==5)
        {
            printf("\n");
            printf("Your order successfully received.Thank you.\n(Transaction partner Nagad)");
            printf("\n");
            return 0;
        }
    }
    else
       printf("\nWrong method selected. \n");
    }
    return 0;
}
