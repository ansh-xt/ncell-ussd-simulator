#include <stdio.h>
#include <conio.h>

int main()
{
    int i, choice, code, choice0, choice1, choice2, choice3, choice4, choice5, choice6, choice7, choice8,
        choice9, co1, co2, co3, co4, co5, co6, co7, co8, co9, co10, co11, co12, co13, co14, co15, co16, co17, co18, co19, co20, co21,
        co22, co23, co24, co25;

    printf("Enter the USSD\n:");
    scanf("%d", &i);
    if (i == 17123)
    {
        printf("Correct USSD\n", i);
        printf("\n--------------send instrction---------------\n");
        printf("Pack Kinnus Crorepati Bannus\n");
        printf("0] TO Participate\n");
        printf("1] Sadhain ON BEST\n");
        printf("2] Sadhain ON-UL\n");
        printf("3] Sadhain ON Basic\n");
        printf("4] Data\n");
        printf("5] Voice\n");
        printf("6] Entertainment Pack\n");
        printf("7] Roamina\n");
        printf("8] Saapati\n");
        printf("9] Renewal\n");
        printf("Choose any number to make operation\n:");
        scanf("%d", &choice);
        printf("--------------------------------------------\n");

        switch (choice)
        {
        case 0:
        Pop0:
            printf("Crorepati Packs\n");
            printf("Renew 2X TKT\n");
            printf("1] Rs 99-Ul Voice 7D\n");
            printf("2] Rs 200-UL Data 7D\n");
            printf("3] Rs 199-299 Mins 28D Onetime 1x Ticket\n");
            printf("4] Rs 99-UL Data 3D\n");
            printf("5] Rs 200-UL Data 3D\n");
            printf("6]    Menu\n");
            printf("choose any number to make operation\n:");
            scanf("%d", &choice0);
            printf("------------------------------\n");
            switch (choice0)
            {
            case 1:
                printf("You activited this packs\n");
                break;
            case 2:
                printf("You activited this packs\n");
                break;
            case 3:
                printf("You activited this packs\n");
                break;
            case 4:
                printf("You activited this packs\n");
                break;
            case 5:
                printf("You activited this packs\n");
                break;
            case 6:
                goto Pop0;
                break;

            default:
                printf("Invalid Option\n");
                break;
            }
            break;

        case 1:
        Pop1:
            printf("Crorepati Packs\n");
            printf("Renew  30D 2X TKT\n");
            printf("1] Rs 399-8GB+399Min\n");
            printf("2] Rs 499-12GB+499Min\n");
            printf("3] Rs 599-20GB+599Min  28D 1X TKT\n");
            printf("4] Rs 399-8GB+399Min\n");
            printf("5] Rs 499-12GB+499Min\n");
            printf("6] Rs 599-20GB+599Min\n");
            printf("7] Menu\n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice1);
            printf("------------------------------\n");
            switch (choice1)
            {
            case 1:
                printf("You activited this packs\n");
                break;
            case 2:
                printf("You activited this packs\n");
                break;
            case 3:
                printf("You activited this packs\n");
                break;
            case 4:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack at same price \n");
                printf("2] continue to activate one time 28 days same price \n ");
                scanf("%d", &co1);
                switch (co1)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 5:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack at same price \n");
                printf("2] continue to activate one time 28 days same price\n ");
                scanf("%d", &co2);
                switch (co2)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 6:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack 30 days \n");
                printf("2] continue to activate one time 28 days same price\n ");
                scanf("%d", &co3);
                switch (co3)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 7:
                goto Pop1;
                break;
            default:
                printf("invalid option\n");
                break;
            }
            break;

        case 2:
        Pop2:
            printf("Crorepati Packs\n");
            printf("UL Calls\n");
            printf("Renwal 30D\n");
            printf("1] Rs 799-30D \n");
            printf("2] Rs 999-50D\n");
            printf("3] Rs 1499-100GB 28D\n");
            printf("4] Rs 799-30GB\n");
            printf("5] Rs 999-50GB\n");
            printf("6] Rs 1499-100GB UL Call + Roaming\n");
            printf("7] Rs 1799-100GB\n");
            printf("8] Menu\n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice2);
            printf("------------------------------\n");
            switch (choice2)
            {
            case 1:
                printf("You activited this packs\n");
                break;
            case 2:
                printf("You activited this packs\n");
                break;
            case 3:
                printf("You activited this packs\n");
                break;
            case 4:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack at same price \n");
                printf("2] continue to activate one time 28 days same price\n ");
                scanf("%d", &co4);
                switch (co4)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 5:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack at same price \n");
                printf("2] continue to activate one time 28 days same price\n ");
                scanf("%d", &co5);
                switch (co5)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 6:
                printf("Want 2 days extra validity? take renewal pack at same price\n");
                printf("1] upgrade to renewal pack at same price \n");
                printf("2] continue to activate one time 28 days same price\n ");
                scanf("%d", &co6);
                switch (co6)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 7:
                printf("Your  pack cannot be activated due to insufficiend balance\n");
                break;
            case 8:
                goto Pop2;
                break;
            default:
                printf("invalid code");
                break;
            }
            break;

        case 3:
        Pop3:
            printf("Crorepati Packs\n");
            printf("7D\n");
            printf("1] Rs 200-UL Data-7D-Renewal \n");
            printf("2] Rs 150-10GB Renewal \n");
            printf("3] Rs 99-2GB+49Min-Renewal\n");
            printf("4] Rs 200 Unlimited Data-7D\n");
            printf("5] Rs 99-2GB+49Min\n");
            printf("6] Menu \n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice3);
            printf("------------------------------\n");
            switch (choice3)
            {
            case 1:
                printf("You activited this packs");
                break;
            case 2:
                printf("You activited this packs");
                break;
            case 3:
                printf("You activited this packs");
                break;
            case 4:
                printf("You activited this packs");
                break;
            case 5:
                printf("You activited this packs");
                break;
            case 6:
                goto Pop3;
                break;
            default:
                printf("invalid code\n");
                break;
            }
            break;

        case 4:
        Pop4:
            printf("Pack Kinnus Crorepati Bannus\n");
            printf("1] 1Days\n");
            printf("2] 3Days & 7Days\n");
            printf("3] 28Days\n");
            printf("4] Sadhain ON-Best\n");
            printf("5] Sadhain ON-UL\n");
            printf("6] Sadhain ON-Basic\n");
            printf("7] Beema Packs\n");
            printf("8] SMS Packs\n");
            printf("9] Menu\n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice4);
            printf("------------------------------\n");
            switch (choice4)
            {
            case 1:
            Pop01:
                printf("1] Rs 35-1.25GB-1D\n");
                printf("2] Rs 40-1.5GB-1D\n");
                printf("3] Rs 50 unlimited data-1D\n ");
                printf("4] Menu\n ");
                scanf("%d", &co7);
                switch (co7)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You activated this packs\n");
                    break;
                case 4:
                    goto Pop01;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 2:
            Pop02:
                printf("1] Rs 65-2GB-3D/n");
                printf("2] Rs 99-2GB+49Min-7D/n");
                printf("3] Rs 99-UL Data-3D/n");
                printf("4] Rs 150-7GB-7D/n");
                printf("5] Rs 200_UL Data-7D Renew/n");
                printf("6] Rs 99-2GB+49Min-7D/n");
                printf("7] Rs 150-10GB-7D/n");
                printf("8] Rs 200-UL Data 7D/n");
                printf("9] Menu/n");
                scanf("%d", &co8);
                switch (co8)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You activated this packs\n");
                    break;
                case 4:
                    printf("You activated this packs\n");
                    break;
                case 5:
                    printf("You activated this packs\n");
                    break;
                case 6:
                    printf("You activated this packs\n");
                    break;
                case 7:
                    printf("You activated this packs\n");
                    break;
                case 8:
                    printf("You activated this packs\n");
                    break;
                case 9:
                    goto Pop02;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 3:
            Pop03:
                printf("1] Rs 599-42GB\n");
                printf("2] Rs 799-65GB\n");
                printf("3] Rs 899-UL Data Onetime\n");
                printf("4] Rs 299-7GB-28D\n");
                printf("5] Rs 599-42GB-28D\n");
                printf("6] Rs 899-ulimited Data-28D\n");
                printf("7] Rs 390-10GB+lions gate-28D\n");
                printf("8] Menu \n");
                scanf("%d", &co9);
                switch (co9)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You activited this pack");
                    break;
                case 4:
                    printf("yoou activited this pack");
                    break;
                case 5:
                    printf("yoou activited this pack");
                    break;
                case 6:
                    printf("yoou activited this pack");
                    break;
                case 7:
                    printf("yoou activited this pack");
                    break;
                case 8:
                    goto Pop03;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 4:
            Pop04:
                printf("1] Rs 399-8GB+399mn\n");
                printf("2] Rs 499-12GB+499mn\n");
                printf("3] Rs 599-20GB+599mn-28D\n");
                printf("4] Rs 399-8GB+399mn\n");
                printf("5] Rs 499-12GB+499mn\n");
                printf("6] Rs 599-20GB+599mn\n");
                printf("7] Menu\n");
                scanf("%d", &co10);
                switch (co10)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You acTIVited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    printf("you activited this packs\n");
                    break;
                case 7:
                    goto Pop04;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 5:
            Pop05:
                printf("Renewal  30D-2x TKT");
                printf("1] Rs 799-30GB\n");
                printf("2] Rs 999-50GB\n");
                printf("3] Rs 1499-100GB 28D-1x TKT\n");
                printf("4] Rs 799-30GB\n");
                printf("5] Rs 999-50GB\n");
                printf("6] Rs 1499-100GB\n");
                printf("7] Rs 1799-100GB+Roaming\n");
                printf("8] Menu \n");
                scanf("%d", &co11);
                switch (co11)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You acTIVited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    printf("you activited this packs\n");
                    break;
                case 7:
                    printf("you activited this packs\n");
                    break;
                case 8:
                    goto Pop05;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 6:
            Pop06:
                printf("1] Rs 200-UL Data -7D-Renewal\n");
                printf("2] Rs 150-10GB Renewal\n");
                printf("3] Rs 99-2GB+49Min\n");
                printf("4] Rs 200 Unlimited Data -7D\n");
                printf("5] Rs 99-2GB+49Min\n");
                printf("6] Menu\n");
                scanf("%d", &co12);
                switch (co12)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You acTIVited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    goto Pop06;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 7:
            Pop07:
                printf("1] Rs 30-Upto 10,000 Aspatal bima+100MB\n");
                printf("2] Rs 90-Upto 30,000 Aspatal bima+500MS\n");
                printf("3] Rs 200-Upto 10,000 handset screen insure+200MB\n");
                printf("4] Menu\n");
                scanf("%d", &co13);
                switch (co13)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                case 3:
                    printf("You activited this packs\n");
                    break;
                case 4:
                    goto Pop07;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 8:
            Pop08:
                printf("1] Rs 15-100SMS-1Day\n");
                printf("2] Rs 45-300SMS-7Days\n");
                printf("3] Rs 98-300SMS-Days\n");
                printf("4] Rs 125-850SMS-28Days\n");
                printf("5] Menu\n");
                scanf("%d", &co14);
                switch (co14)
                {
                case 1:
                    printf("You activated this packs\n");
                    break;
                case 2:
                    printf("You activated this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                case 3:
                    printf("You activited this packs\n");
                    break;
                case 4:
                    printf("You activited this packs\n");
                    break;
                case 5:
                    goto Pop08;
                    break;
                }
                break;
            case 9:
                goto Pop4;
                break;
            default:
                printf(" invalid code");
                break;
            }
            break;

        case 5:
        Pop5:
            printf("Pack Kinnus Crorepati Bannus\n");
            printf("1] Unlimited Ncell-Ncell\n");
            printf("2] All Nepal\n");
            printf("3] Call to India\n");
            printf("4] Call Aayo Paisa Payo \n");
            printf("5] SMS Packs\n");
            printf("6] Main Menu \n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice5);
            printf("------------------------------\n");
            switch (choice5)
            {
            case 1:
            Pop09:
                printf("1] Rs 499-28D onetime\n");
                printf("2] Rs 30-1D\n");
                printf("3] Rs 50-3D (5am-5pm)\n");
                printf("4] Rs Rs 50-3D (5am-5pm)\n");
                printf("5] Rs 149-7D\n");
                printf("6] Rs 449-28D\n");
                printf("7] Menu\n");
                scanf("%d", &co15);
                switch (co15)
                {
                case 1:
                    printf("You activited this packs\n");
                    break;
                case 2:
                    printf("You activited this packs\n");
                    break;
                case 3:
                    printf("You acTIVited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    printf("you activited this packs\n");
                    break;
                case 7:
                    goto Pop09;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 2:
            Pop011:
                printf("1] Rs 39 UL-1D crorepati packs renewal \n");
                printf("2] Rs 99-UL-7D\n");
                printf("3] Rs 279-555Min-28D\n");
                printf("4] Rs 199-299Min-28D\n");
                printf("5] Rs 99 unlimited-7D-28D\n");
                printf("6] Rs 279-555Min\n");
                printf("7] Rs 299-555Min+55SMS\n");
                printf("8] Rs 199-299Min\n");
                printf("9] Menu\n");
                scanf("%d", &co16);
                switch (co16)
                {
                case 1:
                    printf("You activited this packs\n");
                    break;
                case 2:
                    printf("You activited this packs\n");
                    break;
                case 3:
                    printf("You acTIVited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    printf("you activited this packs\n");
                    break;
                case 7:
                    printf("You activited this packs\n");
                    break;
                case 8:
                    printf("yoou activited this packs\n");
                    break;
                case 9:
                    goto Pop011;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 3:
            Pop012:
                printf("1] Rs 49-call to india @2.99min ex tax-28D\n");
                printf("2] Menu\n");
                scanf("%d", &co16);
                switch (co16)
                {
                case 1:
                    printf("you activited this code\n");
                    break;
                case 2:
                    goto Pop012;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 4:
                printf("you activited this packs\n");
                break;
            case 5:
            Pop014:
                printf("1] Rs 15-100SMS-1D\n");
                printf("2] Rs 45-300SMS_7D\n");
                printf("3] Rs 98-300SMS-28D crorepati packs\n");
                printf("4] Rs 125-850SMS-28D\n");
                printf("5] Menu\n");
                scanf("%d", &co17);
                switch (co17)
                {
                case 1:
                    printf("you activited this packs\n");
                    break;
                case 2:
                    printf("you activited this packs\n");
                    break;
                case 3:
                    printf("you activited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    goto Pop014;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 6:
                goto Pop5;
                break;
            default:
                printf("invalid code/n");
                break;
            }
            break;

        case 6:
        Pop6:
        Pop19:
            printf("1] Movie + Data Packs\n");
            printf("2] Makai Bari Daryam Daryam @Rs 31/30D\n");
            printf("3] Babal @ Rs31/30D\n");
            printf("4] More PRBT Song\n");
            printf("5] SMS Packs\n");
            printf("6] Beema\n");
            printf("7] Main Menu\n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice6);
            printf("------------------------------\n");
            switch (choice6)
            {
            case 1:
            Pop016:
                printf("1] Rs 390-10GB+lionsGate-28D \n");
                printf("2] Menu\n");
                scanf("%d", &co18);
                switch (co18)
                {
                case 1:
                    printf("you activited this packs\n");
                    break;
                case 2:
                    goto Pop016;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 2:
                printf("you activited this packs\n");
                break;
            case 3:
                printf("you activited this packs\n");
                break;
            case 4:
            Pop17:
                // Pop22:
                printf("1] latest songs\n");
                printf("2] Top 20 songs\n");
                printf("3] Evergreen Songs\n");
                printf("4] Dhori Songs\n");
                printf("5] Pop hits\n");
                printf("6] Status PRBT\n");
                printf("7] NAMETUNE\n");
                printf("8] Rap Songs\n");
                printf("9] More\n");
                scanf("%d", &co19);
                switch (co19)
                {
                case 1:
                Pop12:
                    printf("1] makai bhari dharam dharam \n");
                    printf("2] badal 2\n");
                    printf("3] kholi salala jhaliko jhalala\n");
                    printf("4] dilko dhoka BMS\n");
                    printf("5] timrai pachi dhaunebanayau\n");
                    printf("6] more\n");
                    scanf("%d", &co20);
                    switch (co20)
                    {
                    case 1:
                        printf("sorry! due to some technical issue we are unable to process your request\n");
                        break;
                    case 2:
                        printf("sorry due to some technical issue we are unable to process your request\n");
                        break;
                    case 3:
                        printf("sorry due to some technical issue we are unable to process your request\n");
                        break;
                    case 4:
                        printf("sorry due to some technical issue we are unable to process your request\n");
                        break;
                    case 5:
                        printf("sorry due to some technial issue we are unable to process your request\n");
                        break;
                    case 6:
                    Pop18:
                        printf("7] sunki chari\n");
                        printf("8] umeraile naudada katigo\n");
                        printf("9] timro hasa sangalera_PVT\n");
                        printf("10] hakdaar\n");
                        printf("11] mutu bhitra rakhachhu\n");
                        printf("12] prev\n");
                        printf("13] main menu\n");
                        scanf("%d", &co21);
                        switch (co21)
                        {
                        case 7:
                            printf("sorry due to some technical issue we are unable to process your request\n");
                            break;
                        case 8:
                            printf("sorry due to some technical issue we are unable to process your request\n");
                            break;
                        case 9:
                            printf("sorry due to some technical issue we are unable to process your request\n");
                            break;
                        case 10:
                            printf("sorry due to some technical issue we are unable to process your request\n");
                            break;
                        case 11:
                            printf("sorry due to some technical issue we are unable to process your request\n");
                            break;
                        case 12:
                            goto Pop18;
                            break;
                        case 13:
                            goto Pop19;
                        default:
                            printf("invalid code\n");
                            break;
                        }
                        break;
                    default:
                        printf("invalid code\n");
                        break;
                    }
                    break;
                case 2:
                Pop20:
                Pop22:
                    printf("1] dusman hereko herai\n");
                    printf("2] bardali\n");
                    printf("3] timi basne mutu\n");
                    printf("5] ma ta dhale dhale\n");
                    printf("6] timi maidan\n");
                    printf("7] kasminre pachhyauri\n");
                    printf("8] timile nasamjhida\n");
                    printf("9] more\n");
                    printf("10] main menu\n");
                    scanf("%d", &co22);
                    switch (co22)
                    {
                    case 1:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 2:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 3:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 4:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 5:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 6:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 7:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 8:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 9:
                    Pop21:
                        printf("11] kutuma kutu\n");
                        printf("12]kanya rashi\n");
                        printf("13]damai maharaj\n");
                        printf("14]malashree dhun\n");
                        printf("15]bardali brgining\n");
                        printf("16]parelima\n");
                        printf("17]timi dekhi tada\n");
                        printf("18]sarangi\n");
                        printf("19]pre\n");
                        printf("20]main menu\n");
                        scanf("%d", &co23);
                        switch (co23)
                        {
                        case 11:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 12:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 13:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 14:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 15:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 16:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 17:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 18:
                            printf("sorry due to some technical issue we are not unable to process your request\n");
                            break;
                        case 19:
                            goto Pop21;
                            break;
                        case 20:
                            goto Pop22;
                            break;
                        default:
                            printf("invalid code\n");
                            break;
                        }
                        break;
                    case 10:
                        goto Pop20;
                        break;
                    default:
                        printf("invalid code\n");
                        break;
                    }

                    break;
                case 3:
                Pop23:
                    printf("1] aaha kati ramri \n");
                    printf("2] a hora maya\n");
                    printf("3] binjuri second 2\n");
                    printf("4] parkhaima\n");
                    printf("5] dhokebaj femal\n");
                    printf("6] maya ke hola\n");
                    printf("7] ea mero hjr \n");
                    printf("8] sadhai \n");
                    printf("9] hami sangai\n");
                    printf("10] main menu\n");
                    scanf("%d", &co24);
                    switch (co24)
                    {
                    case 1:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 2:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 3:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 4:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 5:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 6:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 7:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 8:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 9:
                        printf("sorry due to some technical issue we are not unable to process your request\n");
                        break;
                    case 10:
                        goto Pop23;
                        break;
                    default:
                        printf("invalid code\n");
                        break;
                    }
                    break;
                case 4:
                    printf("1] yo sansar ko rit live dohori 3\n");
                    printf("2] chautarima bar chha \n");
                    printf("3] himal pari bhot\n");
                    printf("4] ma phooja garchuu\n");
                    printf("5] kasam maile\n");
                    printf("6] chautarima bar chha\n");
                    printf("7] more\n");
                    printf("8] main menu\n");
                    scanf("%d", &co25);
                    switch (co25)
                    {
                    case 1:
                        printf("");
                        break;

                    default:
                        break;
                    }

                    break;
                case 5:
                    printf("you activited this packs\n");
                    break;
                case 6:
                    printf("you activited this packs\n");
                    break;
                case 7:
                    printf("you activited this packs\n");
                    break;
                case 8:
                    printf("you activited this packs\n");
                    break;
                case 9:
                    printf("you activited this packs\n");
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 5:
            Pop18:
                printf("1] Rs 15-100SMS-1D\n");
                printf("2] Rs 45-300SMS-7D\n");
                printf("3] Rs 98-300SMS-28D crorepati packs\n");
                printf("4] Rs 125-850SMS-28D\n");
                printf("5] Menu\n");
                scanf("%d", &co20);
                switch (co20)
                {
                case 1:
                    printf("you activited this packs\n");
                    break;
                case 2:
                    printf("you activited this packs\n");
                    break;
                case 3:
                    printf("you activited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    goto Pop18;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 6:
            Pop19:
                printf("1] Rs 30-Data sangai Beema\n");
                printf("2] Rs 90-Data sangai Beema Plus\n");
                printf("3] Rs 200-Data sangai phone Beema\n");
                printf("4] Rs 250-Roaming sangai Beema\n");
                printf("5] Menu\n");
                scanf("%d", &co21);
                switch (co21)
                {
                case 1:
                    printf("you activited this packs\n");
                    break;
                case 2:
                    printf("you activited this packs\n");
                    break;
                case 3:
                    printf("you activited this packs\n");
                    break;
                case 4:
                    printf("you activited this packs\n");
                    break;
                case 5:
                    goto Pop19;
                    break;
                default:
                    printf("invalid code\n");
                    break;
                }
                break;
            case 7:
                goto Pop6;
                break;
            default:
                printf("invalid code\n");
                break;
            }
            break;

        case 7:
        Pop7:
            printf("1] India\n");
            printf("2] Data Packs\n");
            printf("3] Voice & SMS Packs\n");
            printf("4] Roaming Sangai Beema\n");
            printf("5] Border Roaming Packs\n");
            printf("6] 1799-UL Call+100GB+Roaming(600MB+10Mins)\n");
            printf("7] Menu\n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice7);
            printf("------------------------------\n");
            switch (choice7)
            {
            case 1:
                printf("You activated this pack");
                break;
            case 2:
                printf("you activited this packs\n");
                break;
            case 3:
                printf("you activited this packs\n");
                break;
            case 4:
                printf("you activited this packs\n");
                break;
            case 5:
                printf("you activited this packs\n");
                break;
            case 6:
                printf("you activited this packs\n");
                break;
            case 7:
                goto Pop7;
                break;
            default:
                printf("invalid code\n");
                break;
            }
            break;

        case 8:
        Pop8:
            printf("Sapati Plus:\n");
            printf("1] Rs 50-UL Mins-3D (5am-5pm)\n");
            printf("2] Rs 50-UL Mins-1D\n");
            printf("3] Rs 40 saapati \n");
            printf("4] Rs 65-2GB-3D\n");
            printf("5] Rs 99 UL Data-3D\n");
            printf("6] Menu \n");
            printf("Choose any number to make operation\n:");
            scanf("%d", &choice8);
            printf("------------------------------\n");
            switch (choice8)
            {
            case 1:
                printf("you activited this packs \n");
                break;
            case 2:
                printf("you activited this packs\n");
                break;
            case 3:
                printf("you activited this packs\n");
                break;
            case 4:
                printf("you activited this packs\n");
                break;
            case 5:
                printf("you activited this packs\n");
                break;
            case 6:
                goto Pop8;
                break;
            default:
                printf("invalid code\n");
                break;
            }
            break;

        case 9:
        Pop9:
            printf("1] Sadhain ON\n");
            printf("2] Data & Voice\n");
            printf("3] Main Menu\n");
            printf("choose any number to make operation\n:");
            scanf("%d", &choice9);
            printf("------------------------------\n");
            switch (choice9)
            {
            case 1:
                printf("You activated this pack\n");
                break;
            case 2:
                printf("You activited this pack\n");
                break;
            case 3:
                goto Pop9;
                break;
            default:
                printf("invalid code\n");
                break;
            }
        }
    }
    else if (i != 17123)
    {
        printf("%d re-enter USSD\n", i);
    }
}