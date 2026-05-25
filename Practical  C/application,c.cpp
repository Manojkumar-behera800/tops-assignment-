#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define FACULTY_FILE "faculty.dat"

typedef struct 
{
    int  id;
    char name[50];
    char department[30];
    char designation[30];
} Faculty;

// FUNCTION PROTOTYPES

void facultyMenu();
void addFaculty();
void displayFaculty();
void searchFacultyMenu();
void searchFacultyById();
void searchFacultyByName();
void searchFacultyByDepartment();
void searchFacultyByDesignation();
void deleteFacultyMenu();
void deleteFacultyById();
void deleteFacultyByName();
void deleteFacultyByDepartment();
void deleteFacultyByDesignation();
void updateFacultyById();
void sortFaculty();
int countFaculty();
int isFacultyIdExists(int);
void displayFacultyi(Faculty f);
// ================= MAIN =================
int main()
{
    facultyMenu();
    return 0;
}



// ================= MENU =================
void facultyMenu()
{
    int ch;
    do
    {
        printf("\n\t\t1.Add\n\t\t2.Display\n\t\t3.Search\n\t\t4.Update\n\t\t5.Delete\n\t\t6.Sort\n\t\t7.Count\n\t\t8.Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: addFaculty(); break;
            case 2: displayFaculty(); break;
            case 3: searchFacultyMenu(); break;
            case 4: updateFacultyById(); break;
            case 5: deleteFacultyMenu(); break;
            case 6: sortFaculty(); break;
            case 7: printf("Total = %d\n",countFaculty()); break;
            case 8: printf("exiting....");break;
            default: printf("INVALID CHOICE");
        }

    }while(ch!=8);
}

// ================= ADD =================
void addFaculty()
{
    
    Faculty f;



    printf("Enter ID: ");
    scanf("%d",&f.id);

    if(isFacultyIdExists(f.id))
    {
        printf("ID exists\n");
        
        return;
    }

    FILE *fp = fopen(FACULTY_FILE,"a");
    if(fp==NULL)
    {
        printf("File error\n");
        return;
    }
    printf("Name: ");
    scanf(" %[^\n]",f.name);
    printf("Department: ");
    scanf(" %[^\n]",f.department);
    printf("Designation: ");
    scanf(" %[^\n]",f.designation);

    fwrite(&f,sizeof(f),1,fp);
    fclose(fp);

    printf("Added successfully\n");
    return;
}

// ================= DISPLAY =================
void displayFaculty()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    int count=0;

    if(fp==NULL)
    {
        printf("No records found\n");
        return;
    }
    printf("-----------------FACULTY MANAGEMENT SYSTEM---------------\n ");
    printf("\nID\tName\t\tDepartment\tDesignation\n");
    printf("------------------------------------------------------------\n");

    while(fread(&f,sizeof(f),1,fp))
    {
       // printf("%d\t%s\t\t%s\t\t%s\n",
        //       f.id,f.name,f.department,f.designation);
         displayFacultyi(f);
        count++;
    }

    printf("\n%d records\n",count);
    fclose(fp);
}
void displayFacultyi(Faculty f)
{
        printf("%d\t%s\t\t%s\t\t%s\n",
               f.id,f.name,f.department,f.designation);
            return;
       
}

// ================= COUNT =================
int countFaculty()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    int c=0;

    if(fp==NULL) return 0;

    while(fread(&f,sizeof(f),1,fp)) c++;

    fclose(fp);
    return c;
}

// ================= SEARCH =================
void searchFacultyMenu()
{
    int ch;
    do{
        printf("\t-----------------SEARCH MENU-----------------\n");
        printf("\n\t\t1.ID \n\t\t2.Name \n\t\t3.Department \n\t\t4.Designation \n\t\t5.Exit\n");
        printf("\nEnter the choice:");
        scanf("%d",&ch);

        if(ch==1) searchFacultyById();
        else if(ch==2) searchFacultyByName();
        else if(ch==3) searchFacultyByDepartment();
        else if(ch==4) searchFacultyByDesignation();

    }while(ch!=5);
}

void searchFacultyById()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    int id,found=0;

    if(fp==NULL) return;

    printf("Enter ID: ");
    scanf("%d",&id);

    while(fread(&f,sizeof(f),1,fp))
    {
        if(f.id==id)
        {
            printf("\nID\tName\t\tDepartment\tDesignation\n");
    printf("------------------------------------------------------------\n");
            displayFacultyi(f);
            found=1;
        }
    }

    if(!found) printf("Not found\n");

    fclose(fp);
}

void searchFacultyByName()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    char name[50];
    int found=0;

    if(fp==NULL) return;

    printf("Enter Name: ");
    scanf(" %[^\n]",name);

    while(fread(&f,sizeof(f),1,fp))
    {
        if(stricmp(f.name,name)==0)
        {printf("\nID\tName\t\tDepartment\tDesignation\n");
    printf("------------------------------------------------------------\n");
           displayFacultyi(f);
            found=1;
        }
    }

    if(!found) printf("Not found\n");

    fclose(fp);
}

void searchFacultyByDepartment()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    char d[30];
    int found=0;

    if(fp==NULL) return;

    printf("Enter Department: ");
    scanf(" %[^\n]",d);

    while(fread(&f,sizeof(f),1,fp))
    {
        if(stricmp(f.department,d)==0)
        {printf("\nID\tName\t\tDepartment\tDesignation\n");
    printf("------------------------------------------------------------\n");
            displayFacultyi(f);
            found=1;
        }
    }

    if(!found) printf("Not found\n");

    fclose(fp);
}

void searchFacultyByDesignation()
{
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;
    char d[30];
    int found=0;

    if(fp==NULL) return;

    printf("Enter Designation: ");
    scanf(" %[^\n]",d);

    while(fread(&f,sizeof(f),1,fp))
    {
        if(stricmp(f.designation,d)==0)
        {printf("\nID\tName\t\tDepartment\tDesignation\n");
    printf("------------------------------------------------------------\n");
            displayFacultyi(f);
            found=1;
        }
    }

    if(!found) printf("Not found\n");

    fclose(fp);
}

// ================= DELETE =================
void deleteFacultyMenu()
{
    int ch;
    printf("\t------------DELETE MENU---------\n");
    printf("\t\t1.ID\n\t\t2.Name \n\t\t3.Department \n\t\t4.Designation\n");
    scanf("%d",&ch);

    if(ch==1) deleteFacultyById();
    else if(ch==2) deleteFacultyByName();
    else if(ch==3) deleteFacultyByDepartment();
    else if(ch==4) deleteFacultyByDesignation();
}

void deleteFacultyById()
{
    FILE *f1=fopen(FACULTY_FILE,"r");
    FILE *f2=fopen("temp.dat","w");
    Faculty f; int id;

    if(f1==NULL || f2==NULL) return;

    printf("Enter ID: ");
    scanf("%d",&id);

    while(fread(&f,sizeof(f),1,f1))
        if(f.id!=id) fwrite(&f,sizeof(f),1,f2);

    fclose(f1); fclose(f2);
    remove(FACULTY_FILE);
    rename("temp.dat",FACULTY_FILE);
    printf("Deleted\n");
}

void deleteFacultyByName()
{
    FILE *f1=fopen(FACULTY_FILE,"r");
    FILE *f2=fopen("temp.dat","w");
    Faculty f; char name[50];

    if(f1==NULL || f2==NULL) return;

    printf("Enter Name: ");
    scanf(" %[^\n]",name);

    while(fread(&f,sizeof(f),1,f1))
        if(stricmp(f.name,name)!=0) fwrite(&f,sizeof(f),1,f2);

    fclose(f1); fclose(f2);
    remove(FACULTY_FILE);
    rename("temp.dat",FACULTY_FILE);
    printf("Deleted\n");
}

void deleteFacultyByDepartment()
{
    FILE *f1=fopen(FACULTY_FILE,"r");
    FILE *f2=fopen("temp.dat","w");
    Faculty f; char d[30];

    if(f1==NULL || f2==NULL) return;

    printf("Enter Department: ");
    scanf(" %[^\n]",d);

    while(fread(&f,sizeof(f),1,f1))
        if(stricmp(f.department,d)!=0) fwrite(&f,sizeof(f),1,f2);

    fclose(f1); fclose(f2);
    remove(FACULTY_FILE);
    rename("temp.dat",FACULTY_FILE);
    printf("Deleted\n");
}

void deleteFacultyByDesignation()
{
    FILE *f1=fopen(FACULTY_FILE,"r");
    FILE *f2=fopen("temp.dat","w");
    Faculty f; char d[30];

    if(f1==NULL || f2==NULL) return;

    printf("Enter Designation: ");
    scanf(" %[^\n]",d);

    while(fread(&f,sizeof(f),1,f1))
        if(stricmp(f.designation,d)!=0) fwrite(&f,sizeof(f),1,f2);

    fclose(f1); fclose(f2);
    remove(FACULTY_FILE);
    rename("temp.dat",FACULTY_FILE);
    printf("Deleted\n");
}

// ================= UPDATE =================
void updateFacultyById()
{
    FILE *f1=fopen(FACULTY_FILE,"r");
    FILE *f2=fopen("temp.dat","w");

    Faculty f; int id;

    if(f1==NULL || f2==NULL) return;

    printf("Enter ID: ");
    scanf("%d",&id);

    while(fread(&f,sizeof(f),1,f1))
    {
        if(f.id==id)
        {
            printf("New Name: ");
            scanf(" %[^\n]",f.name);
            printf("New Department: ");
            scanf(" %[^\n]",f.department);
            printf("New Designation: ");
            scanf(" %[^\n]",f.designation);
        }
        fwrite(&f,sizeof(f),1,f2);
    }

    fclose(f1); fclose(f2);
    remove(FACULTY_FILE);
    rename("temp.dat",FACULTY_FILE);
    printf("Updated\n");
}

// ================= SORT =================
void sortFacultyMenu()
{
    int ch;
    printf("\t------------SORT MENU---------\n");
    printf("\t\t1.name\n\t\t2.department \n\t\t3.designation \n\t\t4.ID\n");
    scanf("%d",&ch);

    if(ch==1) sortFaculty();
    else if(ch==2) sortFacultydept();
    else if(ch==3) sortFacultydesig();
    else if(ch==4) sortFacultydesig();
}
void sortFaculty()
{
    int n=countFaculty();
    if(n==0)
    {
        printf("No data\n");
        return;
    }

    Faculty f = (Faculty)malloc(n*sizeof(Faculty));
    Faculty temp;

    FILE *fp=fopen(FACULTY_FILE,"r");
    if(fp==NULL) return;

    for(int i=0;i<n;i++)
        fread(&f[i],sizeof(Faculty),1,fp);

    fclose(fp);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(stricmp(f[i].name,f[j].name)>0)
            {
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }

    printf("\n------------Sorted List--------------\n");
    for(int i=0;i<n;i++)
        printf("%d %s %s %s\n",f[i].id,f[i].name,f[i].department,f[i].designation);

    free(f);
}
void sortFacultydept()
{
    int n=countFaculty();
    if(n==0)
    {
        printf("No data\n");
        return;
    }

    Faculty f = (Faculty)malloc(n*sizeof(Faculty));
    Faculty temp;

    FILE *fp=fopen(FACULTY_FILE,"r");
    if(fp==NULL) return;

    for(int i=0;i<n;i++)
        fread(&f[i],sizeof(Faculty),1,fp);

    fclose(fp);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(stricmp(f[i].department,f[j].department)>0)
            {
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }

    printf("\n------------Sorted List--------------\n");
    for(int i=0;i<n;i++)
        printf("%d %s %s %s\n",f[i].id,f[i].name,f[i].department,f[i].designation);

    free(f);
}
void sortFacultydesig()
{
    int n=countFaculty();
    if(n==0)
    {
        printf("No data\n");
        return;
    }

    Faculty f = (Faculty)malloc(n*sizeof(Faculty));
    Faculty temp;

    FILE *fp=fopen(FACULTY_FILE,"r");
    if(fp==NULL) return;

    for(int i=0;i<n;i++)
        fread(&f[i],sizeof(Faculty),1,fp);

    fclose(fp);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(stricmp(f[i].designation,f[j].designation)>0)
            {
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }

    printf("\n------------Sorted List--------------\n");
    for(int i=0;i<n;i++)
        printf("%d %s %s %s\n",f[i].id,f[i].name,f[i].department,f[i].designation);

    free(f);
}
void sortFacultyid()
{
    int n=countFaculty();
    if(n==0)
    {
        printf("No data\n");
        return;
    }

    Faculty f = (Faculty)malloc(n*sizeof(Faculty));
    Faculty temp;

    FILE *fp=fopen(FACULTY_FILE,"r");
    if(fp==NULL) return;

    for(int i=0;i<n;i++)
        fread(&f[i],sizeof(Faculty),1,fp);

    fclose(fp);

    for(int i=0;i<n;i++)
        for(int j=i+1;j<n;j++)
            if(f[i].id==f[j].id)
            {
                temp=f[i];
                f[i]=f[j];
                f[j]=temp;
            }

    printf("\n------------Sorted List--------------\n");
    for(int i=0;i<n;i++)
        printf("%d %s %s %s\n",f[i].id,f[i].name,f[i].department,f[i].designation);

    free(f);
}

// ================= CHECK ID =================
int isFacultyIdExists(int id)
{
      int flag=0;
    FILE *fp = fopen(FACULTY_FILE,"r");
    Faculty f;

    if(fp==NULL) return 0;

    while(fread(&f,sizeof(f),1,fp))
    {
        if(f.id==id)
        {
            flag =1;
            break;
        }
    }

    fclose(fp);
    return flag;
}
