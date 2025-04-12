#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    char name[20];
    int id;
    int age;
} EMPLOYEE;

typedef struct{
    EMPLOYEE mainINFO;
    int subordinate;
    char level[10];
} MANAGER;
typedef struct{
    EMPLOYEE mainINFO;
    char specialization[20];
    int amountProject;
} ENGINEER;
typedef struct{
    EMPLOYEE mainINFO;
    int amountSale;
    int percentPlan;
} MARKETER;

typedef union{
    MANAGER manager;
    ENGINEER engineer;
    MARKETER marketer;
} ROLEDATA;

void changing_job(int numId, ROLEDATA *deleteJob, ROLEDATA *addJob)
{
    for(int i = numId; i<(sizeof(deleteJob)/sizeof(ROLEDATA)); ++i){
        deleteJob[i] = deleteJob[i+1];
    }
    addJob = realloc(addJob, (sizeof(addJob)+1) * sizeof(ROLEDATA));
}


int main()
{
    printf("Enter a number of manager: ");
    int numManager;
    scanf("%d", &numManager);
    ROLEDATA *dataManagers = (ROLEDATA*) malloc(numManager * sizeof(ROLEDATA));

    for(int i=0; i<numManager; ++i){
        printf("Enter information about %d manager:\n", i+1);
        printf("Enter name: ");
        scanf("%s", &dataManagers[i].manager.mainINFO.name);
        printf("Enter id: ");
        scanf("%d", &dataManagers[i].manager.mainINFO.id);
        printf("Enter age: ");
        scanf("%d", &dataManagers[i].manager.mainINFO.age);
        printf("Enter subordinate's amount of %d manager: ", i+1);
        scanf("%d", &dataManagers[i].manager.subordinate);
        printf("Enter manager's level: ");
        scanf("%s", &dataManagers[i].manager.level);
        printf("\n");
    }


    printf("Enter a number of engineer: ");
    int numEngineer;
    scanf("%d", &numEngineer);
    ROLEDATA *dataEngineers = (ROLEDATA*) malloc(numEngineer * sizeof(ROLEDATA)); 

    for(int i=0; i<numEngineer; ++i){
        printf("Enter information about %d engineer:\n", i+1);
        printf("Enter name: ");
        scanf("%s", &dataEngineers[i].engineer.mainINFO.name);
        printf("Enter id: ");
        scanf("%d", &dataEngineers[i].engineer.mainINFO.id);
        printf("Enter age: ");
        scanf("%d", &dataEngineers[i].engineer.mainINFO.age);
        printf("Enter engineer's specialization: ");
        scanf("%s", &dataEngineers[i].engineer.specialization);
        printf("Enter amount of projects: ");
        scanf("%d", &dataEngineers[i].engineer.amountProject);
        printf("\n");
    }


    printf("Enter a number of marketer: ");
    int numMarketer;
    scanf("%d", &numMarketer);
    ROLEDATA *dataMarketers = (ROLEDATA*) malloc(numMarketer * sizeof(ROLEDATA)); 

    for(int i=0; i<numMarketer; ++i){
        printf("Enter information about %d marketer:\n", i+1);
        printf("Enter name: ");
        scanf("%s", &dataMarketers[i].marketer.mainINFO.name);
        printf("Enter id: ");
        scanf("%d", &dataMarketers[i].marketer.mainINFO.id);
        printf("Enter age: ");
        scanf("%d", &dataMarketers[i].marketer.mainINFO.age);
        printf("Enter sales volume: ");
        scanf("%d", &dataMarketers[i].marketer.amountSale);
        printf("Enter percent of plan: ");
        scanf("%d", &dataMarketers[i].marketer.percentPlan);
        printf("\n");
    }
    printf("\n");


    printf("List of employees:\n");
    for(int i=0; i<numManager; ++i){
        printf("Job: %d manager\n", i+1);
        printf("Name: %s\n", dataManagers[i].manager.mainINFO.name);
        printf("Age: %d\n", dataManagers[i].manager.mainINFO.age);
        printf("Id: %d\n", dataManagers[i].manager.mainINFO.id);
        printf("Subordinate's amount: %d\n", dataManagers[i].manager.subordinate);
        printf("Level: %s\n", dataManagers[i].manager.level);
        printf("\n");
    }
    for(int i=0; i<numEngineer; ++i){
        printf("Job: %d engineer\n", i+1);
        printf("Name: %s\n", dataEngineers[i].engineer.mainINFO.name);
        printf("Age: %d\n", dataEngineers[i].engineer.mainINFO.age);
        printf("Id: %d\n", dataEngineers[i].engineer.mainINFO.id);
        printf("Specialization: %s\n", dataEngineers[i].engineer.specialization);
        printf("Amount of projects: %d\n", dataEngineers[i].engineer.amountProject);
        printf("\n");
    }
    for(int i=0; i<numMarketer; ++i){
        printf("Job: %d marketer\n", i+1);
        printf("Name: %s\n", dataMarketers[i].marketer.mainINFO.name);
        printf("Age: %d\n", dataMarketers[i].marketer.mainINFO.age);
        printf("Id: %d\n", dataMarketers[i].marketer.mainINFO.id);
        printf("Sales amount: %d\n", dataMarketers[i].marketer.amountSale);
        printf("Percent of plan: %d\n", dataMarketers[i].marketer.percentPlan);
        printf("\n");
    }
    

    printf("Search for an emloyee:\n");
    int searchId;
    printf("Enter employee's id for search: ");
    scanf("%d", &searchId);
    printf("\n");
    if(searchId >= 0){
        int check = 0;
        for(int i=0; i<numManager; ++i){
            if(dataManagers[i].manager.mainINFO.id == searchId){
                printf("Job: %d manager\n", i+1);
                printf("Name: %s\n", dataManagers[i].manager.mainINFO.name);
                printf("Age: %d\n", dataManagers[i].manager.mainINFO.age);
                printf("Id: %d\n", dataManagers[i].manager.mainINFO.id);
                printf("Subordinate's amount: %d\n", dataManagers[i].manager.subordinate);
                printf("Level: %s\n", dataManagers[i].manager.level);
                printf("\n");
                check++;
            }
        }
        for(int i=0; i<numEngineer; ++i){
            if(dataEngineers[i].engineer.mainINFO.id == searchId){
                printf("Job: %d engineer\n", i+1);
                printf("Name: %s\n", dataEngineers[i].engineer.mainINFO.name);
                printf("Age: %d\n", dataEngineers[i].engineer.mainINFO.age);
                printf("Id: %d\n", dataEngineers[i].engineer.mainINFO.id);
                printf("Specialization: %s\n", dataEngineers[i].engineer.specialization);
                printf("Amount of projects: %d\n", dataEngineers[i].engineer.amountProject);
                printf("\n");
                check++;
            }
        }
        for(int i=0; i<numMarketer; ++i){
            if(dataMarketers[i].marketer.mainINFO.id == searchId){
                printf("Job: %d marketer\n", i+1);
                printf("Name: %s\n", dataMarketers[i].marketer.mainINFO.name);
                printf("Age: %d\n", dataMarketers[i].marketer.mainINFO.age);
                printf("Id: %d\n", dataMarketers[i].marketer.mainINFO.id);
                printf("Sales amount: %d\n", dataMarketers[i].marketer.amountSale);
                printf("Percent of plan: %d\n", dataMarketers[i].marketer.percentPlan);
                printf("\n");
                check++;
            }
        }
        if(check == 0){
            printf("Id not found!");
        }
    }


    int changeId, changeJob;
    printf("Change of emloyee's job:\n");
    printf("Enter emloyee's id for changing information: ");
    scanf("%d", &changeId);
    printf("\n");
    printf("1) Manager\n 2) Engineer\n 3) Marketer\n");
    printf("Choose a number of new job for emloyee: ");
    scanf("%d", &changeJob);

    int numId;
    for(int i = 0; i<numManager; ++i){
        if(dataManagers[i].manager.mainINFO.id == changeId){
            numId = i;
            switch(changeJob){
                case 1:
                    changing_job(numId, dataManagers, dataManagers);
                    printf("Enter information about new manager:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataManagers[numManager-1].manager.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.age);
                    printf("Enter subordinate's amount of %d manager: ", i+1);
                    scanf("%d", &dataManagers[numManager-1].manager.subordinate);
                    printf("Enter manager's level: ");
                    scanf("%s", &dataManagers[numManager-1].manager.level);
                    printf("\n");
                    break;
                case 2:
                    changing_job(numId, dataManagers, dataEngineers);
                    numManager--;
                    numEngineer++;
                    printf("Enter information about new engineer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.age);
                    printf("Enter engineer's specialization: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.specialization);
                    printf("Enter amount of projects: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.amountProject);
                    printf("\n");
                    break;
                case 3:
                    changing_job(numId, dataManagers, dataMarketers);
                    numManager--;
                    numMarketer++;
                    printf("Enter information about new marketer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataMarketers[numMarketer-1].marketer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.age);
                    printf("Enter sales volume: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.amountSale);
                    printf("Enter percent of plan: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.percentPlan);
                    printf("\n");
                    break;
            }

        }
    }
    for(int i = 0; i<numEngineer; ++i){
        if(dataEngineers[i].engineer.mainINFO.id == changeId){
            numId = i;
            switch(changeJob){
                case 1:
                    changing_job(numId, dataEngineers, dataManagers);
                    numEngineer--;
                    numManager++;
                    printf("Enter information about new manager:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataManagers[numManager-1].manager.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.age);
                    printf("Enter subordinate's amount of %d manager: ", i+1);
                    scanf("%d", &dataManagers[numManager-1].manager.subordinate);
                    printf("Enter manager's level: ");
                    scanf("%s", &dataManagers[numManager-1].manager.level);
                    printf("\n");
                    break;
                case 2:
                    changing_job(numId, dataEngineers, dataEngineers);
                    printf("Enter information about new engineer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.age);
                    printf("Enter engineer's specialization: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.specialization);
                    printf("Enter amount of projects: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.amountProject);
                    printf("\n");
                    break;
                case 3:
                    changing_job(numId, dataEngineers, dataMarketers);
                    numEngineer--;
                    numMarketer++;
                    printf("Enter information about new marketer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataMarketers[numMarketer-1].marketer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.age);
                    printf("Enter sales volume: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.amountSale);
                    printf("Enter percent of plan: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.percentPlan);
                    printf("\n");
                    break;
            }
        }
    }
    for(int i = 0; i<numMarketer; ++i){
        if(dataMarketers[i].marketer.mainINFO.id == changeId){
            numId = i;
            switch(changeJob){
                case 1:
                    changing_job(numId, dataMarketers, dataManagers);
                    numMarketer--;
                    numManager++;
                    printf("Enter information about new manager:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataManagers[numManager-1].manager.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataManagers[numManager-1].manager.mainINFO.age);
                    printf("Enter subordinate's amount of new manager: ");
                    scanf("%d", &dataManagers[numManager-1].manager.subordinate);
                    printf("Enter manager's level: ");
                    scanf("%s", &dataManagers[numManager-1].manager.level);
                    printf("\n");
                    break;
                case 2:
                    changing_job(numId, dataMarketers, dataEngineers);
                    numMarketer--;
                    numEngineer++;
                    printf("Enter information about new engineer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.mainINFO.age);
                    printf("Enter engineer's specialization: ");
                    scanf("%s", &dataEngineers[numEngineer-1].engineer.specialization);
                    printf("Enter amount of projects: ");
                    scanf("%d", &dataEngineers[numEngineer-1].engineer.amountProject);
                    printf("\n");
                    break;
                case 3:
                    changing_job(numId, dataMarketers, dataMarketers);
                    printf("Enter information about new marketer:\n");
                    printf("Enter name: ");
                    scanf("%s", &dataMarketers[numMarketer-1].marketer.mainINFO.name);
                    printf("Enter id: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.id);
                    printf("Enter age: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.mainINFO.age);
                    printf("Enter sales volume: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.amountSale);
                    printf("Enter percent of plan: ");
                    scanf("%d", &dataMarketers[numMarketer-1].marketer.percentPlan);
                    printf("\n");
                    break;
            }
        }
    }

    printf("New list of employees:\n");
    for(int i=0; i<numManager; ++i){
        printf("Job: %d manager\n", i+1);
        printf("Name: %s\n", dataManagers[i].manager.mainINFO.name);
        printf("Age: %d\n", dataManagers[i].manager.mainINFO.age);
        printf("Id: %d\n", dataManagers[i].manager.mainINFO.id);
        printf("Subordinate's amount: %d\n", dataManagers[i].manager.subordinate);
        printf("Level: %s\n", dataManagers[i].manager.level);
        printf("\n");
    }
    for(int i=0; i<numEngineer; ++i){
        printf("Job: %d engineer\n", i+1);
        printf("Name: %s\n", dataEngineers[i].engineer.mainINFO.name);
        printf("Age: %d\n", dataEngineers[i].engineer.mainINFO.age);
        printf("Id: %d\n", dataEngineers[i].engineer.mainINFO.id);
        printf("Specialization: %s\n", dataEngineers[i].engineer.specialization);
        printf("Amount of projects: %d\n", dataEngineers[i].engineer.amountProject);
        printf("\n");
    }
    for(int i=0; i<numMarketer; ++i){
        printf("Job: %d marketer\n", i+1);
        printf("Name: %s\n", dataMarketers[i].marketer.mainINFO.name);
        printf("Age: %d\n", dataMarketers[i].marketer.mainINFO.age);
        printf("Id: %d\n", dataMarketers[i].marketer.mainINFO.id);
        printf("Sales amount: %d\n", dataMarketers[i].marketer.amountSale);
        printf("Percent of plan: %d\n", dataMarketers[i].marketer.percentPlan);
        printf("\n");
    }

    
    free(dataManagers);
    free(dataEngineers);
    free(dataMarketers);

    return 0;
}
