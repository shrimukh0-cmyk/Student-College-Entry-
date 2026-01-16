#include<stdio.h>
#include<string.h>

typedef struct StudentDetails{
    char Name[100];
    char Fname[100];
    char Mname[100];
    float BoardPercentage ;
    int admissonNum;
} std ;

typedef struct teacherDetails{
    char facultyname[100];
    char facultyskill[100];
    char facultysubject[100];
    int workExp;
    int age;
} tad ;
typedef struct nonaccfac{
    char facultyname[100];
    int workexp;
    char department[100];
    int workExp;
} naf ;


int main(){
    std cse[11];
   cse[0].admissonNum=123456789;
   cse[0].BoardPercentage=69.8;
   strcpy(cse[0].Name,"Manish");
   strcpy(cse[0].Fname,"Madanlal");
   strcpy(cse[0].Mname,"mamta");
   
   cse[1].admissonNum=1234886789;
   cse[1].BoardPercentage=79.8;
   strcpy(cse[1].Name,"Mohan");
   strcpy(cse[1].Fname,"Mohit");
   strcpy(cse[1].Mname,"madhuri");
   
   cse[2].admissonNum=128856789;
   cse[2].BoardPercentage=89.8;
   strcpy(cse[2].Name,"Manmohan");
   strcpy(cse[2].Fname,"tillu");
   strcpy(cse[2].Mname,"snata");
   
   cse[3].admissonNum=123454489;
   cse[3].BoardPercentage=65.8;
   strcpy(cse[3].Name,"Amna");
   strcpy(cse[3].Fname,"Mohit");
   strcpy(cse[3].Mname,"Savitri");
   
   cse[4].admissonNum=123465689;
   cse[4].BoardPercentage=69.8;
   strcpy(cse[4].Name,"AVINASH");
   strcpy(cse[4].Fname,"Bholu");
   strcpy(cse[4].Mname,"Tuntun");
   
   cse[5].admissonNum=123455589;
   cse[5].BoardPercentage=99.8;
   strcpy(cse[5].Name,"RAJ");
   strcpy(cse[5].Fname,"Santosh");
   strcpy(cse[5].Mname,"Neha");
   
   cse[6].admissonNum=1234569689;
   cse[6].BoardPercentage=44.8;
   strcpy(cse[6].Name,"Ansh");
   strcpy(cse[6].Fname,"Lakshay");
   strcpy(cse[6].Mname,"Brijesh");
   
   cse[7].admissonNum=123445659;
   cse[7].BoardPercentage=40.2;
   strcpy(cse[7].Name,"Manik");
   strcpy(cse[7].Fname,"Manoj");
   strcpy(cse[7].Mname,"Aarti");
   
   cse[8].admissonNum=123456759;
   cse[8].BoardPercentage=31.5;
   strcpy(cse[8].Name,"Manish");
   strcpy(cse[8].Fname,"Bambom");
   strcpy(cse[8].Mname,"savitri");
   
   cse[9].admissonNum=12345889;
   cse[9].BoardPercentage=75.6;
   strcpy(cse[9].Name,"Mohan");
   strcpy(cse[9].Fname,"LAL");
   strcpy(cse[9].Mname,"Smata_singth");
   
   cse[10].admissonNum=123454789;
   cse[10].BoardPercentage=99.8;
   strcpy(cse[10].Name,"Sury");
   strcpy(cse[10].Fname,"staish");
   strcpy(cse[10].Mname,"poonam");
   
   
   printf("Students name : %s\n",cse[0].Name);
   printf("Mother's name : %s\n",cse[0].Fname);
   printf("Father's name :%s\n",cse[0].Mname);
   printf("Boards Percentage :%f\n",cse[0].BoardPercentage);
   printf("Students Admission number : %d\n",cse[0].admissonNum);
   printf("---------------------------------------------------\n");

   printf("Students name : %s\n",cse[1].Name);
   printf("Mother's name : %s\n",cse[1].Fname);
   printf("Father's name :%s\n",cse[1].Mname);
   printf("Boards Percentage :%f\n",cse[1].BoardPercentage);
   printf("Students Admission number : %d\n",cse[1].admissonNum);
   printf("---------------------------------------------------\n");

   printf("Students name : %s\n",cse[2].Name);
   printf("Mother's name : %s\n",cse[2].Fname);
   printf("Father's name :%s\n",cse[2].Mname);
   printf("Boards Percentage :%f\n",cse[2].BoardPercentage);
   printf("Students Admission number : %d\n",cse[2].admissonNum);
   printf("---------------------------------------------------\n");
    
   printf("Students name : %s\n",cse[3].Name);
   printf("Mother's name : %s\n",cse[3].Fname);
   printf("Father's name :%s\n",cse[3].Mname);
   printf("Boards Percentage :%f\n",cse[3].BoardPercentage);
   printf("Students Admission number : %d\n",cse[3].admissonNum);
   printf("---------------------------------------------------\n");

   printf("Students name : %s\n",cse[4].Name);
   printf("Mother's name : %s\n",cse[4].Fname);
   printf("Father's name :%s\n",cse[4].Mname);
   printf("Boards Percentage :%f\n",cse[4].BoardPercentage);
   printf("Students Admission number : %d\n",cse[4].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[5].Name);
   printf("Mother's name : %s\n",cse[5].Fname);
   printf("Father's name :%s\n",cse[5].Mname);
   printf("Boards Percentage :%f\n",cse[5].BoardPercentage);
   printf("Students Admission number : %d\n",cse[5].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[6].Name);
   printf("Mother's name : %s\n",cse[6].Fname);
   printf("Father's name :%s\n",cse[6].Mname);
   printf("Boards Percentage :%f\n",cse[6].BoardPercentage);
   printf("Students Admission number : %d\n",cse[6].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[7].Name);
   printf("Mother's name : %s\n",cse[7].Fname);
   printf("Father's name :%s\n",cse[7].Mname);
   printf("Boards Percentage :%f\n",cse[7].BoardPercentage);
   printf("Students Admission number : %d\n",cse[7].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[8].Name);
   printf("Mother's name : %s\n",cse[8].Fname);
   printf("Father's name :%s\n",cse[8].Mname);
   printf("Boards Percentage :%f\n",cse[8].BoardPercentage);
   printf("Students Admission number : %d\n",cse[8].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[9].Name);
   printf("Mother's name : %s\n",cse[9].Fname);
   printf("Father's name :%s\n",cse[9].Mname);
   printf("Boards Percentage :%f\n",cse[9].BoardPercentage);
   printf("Students Admission number : %d\n",cse[9].admissonNum);
   printf("---------------------------------------------------\n");
   
   printf("Students name : %s\n",cse[10].Name);
   printf("Mother's name : %s\n",cse[10].Fname);
   printf("Father's name :%s\n",cse[10].Mname);
   printf("Boards Percentage :%f\n",cse[10].BoardPercentage);
   printf("Students Admission number : %d\n",cse[10].admissonNum);
   printf("---------------------------------------------------\n");


printf("x-x-x-x-x-x-x-x-x-x-x--x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x");
 tad fac[11];
 fac[0].workExp=10;
 fac[0].age=69;
strcpy(fac[0].facultyname,"Manoj");
strcpy(fac[0].facultyskill,"AppliedChemistry");
strcpy(fac[0].facultysubject,"chemistry&anatomy");

fac[1].workExp=27;
 fac[1].age= 47;
strcpy(fac[1].facultyname,"Anshu");
strcpy(fac[1].facultyskill,"Language");
strcpy(fac[1].facultysubject,"Hindi");

fac[2].workExp=8;
 fac[2].age=38;
strcpy(fac[2].facultyname,"Aarti");
strcpy(fac[2].facultyskill,"Communication");
strcpy(fac[2].facultysubject,"English");

fac[3].workExp=5;
 fac[3].age=29;
strcpy(fac[3].facultyname,"Parnita");
strcpy(fac[3].facultyskill,"communication");
strcpy(fac[3].facultysubject,"electrical");

fac[4].workExp=1;
 fac[4].age=25;
strcpy(fac[4].facultyname,"Lal");
strcpy(fac[4].facultyskill,"Teaching");
strcpy(fac[4].facultysubject,"Physics");

fac[5].workExp=30;
 fac[5].age=70;
strcpy(fac[5].facultyname,"Sarita");
strcpy(fac[5].facultyskill,"PE");
strcpy(fac[5].facultysubject,"PhysicalEducation");

fac[6].workExp=11;
 fac[6].age=35;
strcpy(fac[6].facultyname,"Mukesh");
strcpy(fac[6].facultyskill,"Mechanics");
strcpy(fac[6].facultysubject,"Mechnaical");

fac[7].workExp=5;
 fac[7].age=25;
strcpy(fac[7].facultyname,"Monika");
strcpy(fac[7].facultyskill,"atheltics");
strcpy(fac[7].facultysubject,"Yoga");

fac[8].workExp=8;
 fac[8].age=50;
strcpy(fac[8].facultyname,"Rajeev");
strcpy(fac[8].facultyskill,"Teaching");
strcpy(fac[8].facultysubject,"Mathematics");

fac[9].workExp=25;
 fac[9].age=60;
strcpy(fac[9].facultyname,"Babita");
strcpy(fac[9].facultyskill,"Communication");
strcpy(fac[9].facultysubject,"Botany");

fac[10].workExp=2;
 fac[10].age=30;
strcpy(fac[10].facultyname,"Lal");
strcpy(fac[10].facultyskill,"Lab_Assistant");
strcpy(fac[10].facultysubject,"Maths");

printf("Faculty name : %s\n",fac[0].facultyname);
printf("Faculty is having this skill :%s\n",fac[0].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[0].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[0].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[0].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[1].facultyname);
printf("Faculty is having this skill :%s\n",fac[1]facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[1].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[1].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[1].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[2].facultyname);
printf("Faculty is having this skill :%s\n",fac[2].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[2].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[2].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[2].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[3].facultyname);
printf("Faculty is having this skill :%s\n",fac[3].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[3].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[3].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[3].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[4].facultyname);
printf("Faculty is having this skill :%s\n",fac[4].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[4].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[4].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[4].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[5].facultyname);
printf("Faculty is having this skill :%s\n",fac[5].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[5].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[5].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[5].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[6].facultyname);
printf("Faculty is having this skill :%s\n",fac[6].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[6].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[6].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[6].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[7].facultyname);
printf("Faculty is having this skill :%s\n",fac[7].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[7].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[7].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[7].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[8].facultyname);
printf("Faculty is having this skill :%s\n",fac[8].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[8].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[8].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[8].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[9].facultyname);
printf("Faculty is having this skill :%s\n",fac[9].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[9].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[9].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[9].age);
printf("--------------------------------------------------\n");

printf("Faculty name : %s\n",fac[10].facultyname);
printf("Faculty is having this skill :%s\n",fac[10].facultyskill);
printf("Fcaulty's Experties in this subject : %s\n",fac[10].facultysubject);
printf("Faculty is having working experience of : %d\n",fac[10].workExp);
printf("Faculty's age as per aaddhar : %d\n",fac[10].age);
printf("--------------------------------------------------\n");
printf("x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x-x\n");

     return 0 ;
}