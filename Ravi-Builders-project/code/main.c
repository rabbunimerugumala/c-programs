#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "models.h"
#include "utils.h"
#include "project.h"
#include "workers.h"
#include "attendance.h"

void main()
{

    int option, choice;
    // PROJECT FILEPATH..
    char proj_filepath[200] = "C:\\Users\\rabbu\\OneDrive\\Desktop\\CODING\\C-LANGUAGE\\Ravi-Builders-project\\data\\project_data.dat";
    char projtrsn_filepath[200] = "C:\\Users\\rabbu\\OneDrive\\Desktop\\CODING\\C-LANGUAGE\\Ravi-Builders-project\\data\\project_transaction_data.dat";
    // WORKERS FILEPATH..
    char wkr_filepath[200] = "C:\\Users\\rabbu\\OneDrive\\Desktop\\CODING\\C-LANGUAGE\\Ravi-Builders-project\\data\\worker_data.dat";
    char wkrtrsn_filepath[200] = "C:\\Users\\rabbu\\OneDrive\\Desktop\\CODING\\C-LANGUAGE\\Ravi-Builders-project\\data\\workers_transaction_data.dat";
    // ATTENDANCE FILEPATH..
    char atd_filepath[200] = "C:\\Users\\rabbu\\OneDrive\\Desktop\\CODING\\C-LANGUAGE\\Ravi-Builders-project\\data\\attendance_data.datt";

    //! TITLE..
    printf("\n=========================================================================================================\n");
    printf("||                                            RAVI BUILDERS                                            ||\n");
    printf("=========================================================================================================\n");

    // LOOP STARTING..
    while (1)
    {
        void projectMemu(){
        printf("\n\tMENU:- \n");
        printf("\t1. PROJECT MODULE.\n \t2. WORKERS MODULE.\n \t3. ATTENDANCE MODULE.\n \t4. EXIT..\n");
        printf("\nEnter option: ");
        fflush(stdin);
        scanf("%d", &option);
        }

        projectMemu();

        void projectModuleMemu()
        {
            printf("\n*** Project Module Memu ***\n");
            printf("\n1. Create a new project.\n2. Update a project details.\n3. Display project details.\n4. Create a new transaction.\n5. Update transaction.\n6. Display all transactions.\n7. Display project details.\n8. GO TO MENU..\n");
            printf("\nEnter the choice: ");
            fflush(stdin);
            scanf("%d", &choice);
        }


        // SWITCH STATMENT..
        switch (option)
        {
            // SWITCH CASE 1.. FOR PROJECT &PROJECT TRANSACTIONS...
        case 1:
            projectModuleMemu();

            // printf("\n*** Project Module Memu ***\n");
            // printf("\n1. Create a new project.\n2. Update a project details.\n3. Display project details.\n4. Create a new transaction.\n5. Update transaction.\n6. Display all transactions.\n7. Display project details.\n8. GO TO MENU..\n");
            // printf("\nEnter the choice: ");
            // fflush(stdin);
            // scanf("%d", &choice);

            if (choice == 1)
            {
                create_project(proj_filepath);
            }
            else if (choice == 2)
            {

                update_project(proj_filepath);
            }
            else if (choice == 3)
            {

                display_project_details(proj_filepath);
            }
            else if (choice == 4)
            {

                create_transaction(projtrsn_filepath);
            }
            else if (choice == 5)
            {

                update_transaction(projtrsn_filepath);
            }
            else if (choice == 6)
            {

                display_transaction_details(projtrsn_filepath);
            }
            else if (choice == 7)
            {

                get_project_transactions(projtrsn_filepath);
            }
            else if(choice == 8)
            {
                projectMemu();
            }
            else
            {
                printf("*** ERROR:Invaild Option ***\n");
            }
            break;
        // SWITCH CASE 2..FOR WORKERS &WORKERS TRANSACTIONS...
//         case 2:
//             printf("\n*** Workers Module Memu ***\n");
//             printf("\n1.Register a new worker.\n2.Update a workers details.\n3.Display workers details.\n4.Create a new worker transaction.\n5.Update worker transaction.\n6.Display all workers transactions.\n7.Display transaction details.\n8.GO TO MENU..\n");
//             printf("\nEnter the choice: ");
//             fflush(stdin);
//             scanf("%d", &choice);

//             if (choice == 1)
//             {
//                 register_worker(wkr_filepath);
//             }
//             else if (choice == 2)
//             {
//                 update_worker_details(wkr_filepath);
//             }
//             else if (choice == 3)
//             {
//                 display_worker_details(wkr_filepath);
//             }
//             else if (choice == 4)
//             {
//                 create_worker_transaction(wkrtrsn_filepath);
//             }
//             else if (choice == 5)
//             {
//                 update_worker_transaction(wkrtrsn_filepath);
//             }
//             else if (choice == 6)
//             {
//                 display_workers_transaction_details(wkrtrsn_filepath);
//             }
//             else if (choice == 7)
//             {
//                 get_workers_transactions(wkrtrsn_filepath);
//             }
//             else
//             {
//                 printf("*** ERROR:Invaild Option ***\n");
//             }
//             break;
//             // SWITCH CASE 3..FOR ATTENDANCE...
//         case 3:
//             printf("\n*** Attendance Module Memu ***\n");
//             printf("\n1.Create attendance.\n2.Update a attendance details.\n3.Display attendance details.\n4.GO TO MENU..\n");
//             printf("\nEnter the choice: ");
//             fflush(stdin);
//             scanf("%d", &choice);

//             if (choice == 1)
//             {
//                 create_attendance(atd_filepath);
//             }
//             else if (choice == 2)
//             {
//                 update_attendance(atd_filepath);
//             }
//             else if (choice == 3)
//             {
//                 display_attendance_details(atd_filepath);
//             }
//             else
//             {
//                 printf("*** ERROR:Invaild Option ***\n");
//             }
//             break;
//         // SWITCH CASE 4..
        case 4:
            exit(0);
        default:
        {
            printf("*** ERROR:invaild option ***");
            break;
        }
        }
    }
}


