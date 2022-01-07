//
//  QuickSort_Skeleton.cpp
//
//  Created by Bahamon, Julio on 6/25/19.
//  UNC Charlotte
//  Copyright © 2019 Bahamon, Julio. All rights reserved.
//  Modified by: Rhytham Shiroya

#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;

//  Declaring a new struct to store patient data
struct patient {
    int age;
    char name[20];
    float balance;
};

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY AGE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE AGE OF THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S AGE
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
int comparesAge(const void * x, const void * y)
{
    patient * a = (patient *)x;
    patient * b = (patient *)y;
    if(a -> age < b -> age)
    return -1;
    else if(a -> age > b -> age)
    return 1;
    else
    return 0;
}


//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY BALANCE DUE

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE BALANCE FOR THE FIRST PATIENT IS LESS
//         THAN THE SECOND PATIENT'S BALANCE
//       0 IF THE BALANCES ARE EQUAL
//       1 OTHERWISE
int comparesBalance(const void * x, const void * y)
{
    patient * a = (patient *)x;
    patient * b = (patient *)y;
    if(a -> balance < b -> balance)
    return -1;
    else if(a -> balance > b -> balance)
    return 1;
    else
    return 0;
}

//  TODO:
//  IMPLEMENT A FUNCTION THAT COMPARES TWO PATIENTS BY NAME

//  THE FUNCTION RETURNS AN INTEGER AS FOLLOWS:
//      -1 IF THE NAME OF THE FIRST PATIENT GOES BEFORE
//         THE SECOND PATIENT'S NAME
//       0 IF THE AGES ARE EQUAL
//       1 OTHERWISE
//
int comparesName(const void * x, const void * y)
{
    patient * a = (patient *)x;
    patient * b = (patient *)y;
    return strcmp(a -> name, b -> name);
}
void display(struct patient patientX[])
    {
        for(int i = 0; i < 5 ; i++ )
        {
            cout << "\tAge: " << patientX[i].age;
            cout << "\t"<< "\t" << "\t"<<"\t";
            cout <<"Name: "<<patientX[i].name;
            cout << "\t"<< "\t" << "\t"<<"\t";
            cout << "Balance Due $: "<<patientX[i].balance << endl;
        }
    }
//  The main program
int main()
{
    int total_patients = 5;
    
    //  Storing some test data
    struct patient patient_list[5] = {
        {25, "Juan Valdez   ", 1250},
        {15, "James Morris  ", 2100},
        {32, "Tyra Banks    ", 750},
        {62, "Maria O'Donell", 375},
        {53, "Pablo Picasso ", 615}
    };
    
    
    cout << "Patient List: " << endl;
    
    //  TODO:
    //  IMPLEMENT THE CODE TO DISPLAY THE CONTENTS
    //  OF THE ARRAY BEFORE SORTING
    display(patient_list);
    
    cout << endl;
    
    qsort(patient_list, 5 ,sizeof(patient), comparesAge);
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT AGE
    
    cout << "Patient List - Sorted by Age: " << endl;
    
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY AGE
    display(patient_list);
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT BALANCE
    qsort(patient_list, 5 ,sizeof(patient), comparesBalance);
    cout << "Patient List - Sorted by Balance Due: " << endl;
    display(patient_list);
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY BALANCE
    
    cout << endl;
    
    
    cout << "Sorting..." << endl;
    
    //  TODO:
    //  CALL THE qsort FUNCTION TO SORT THE ARRAY BY PATIENT NAME
    qsort(patient_list, 5 , sizeof(patient) , comparesName);
    cout << "Patient List - Sorted by Name: " << endl;
    display(patient_list);
    //  TODO:
    //  DISPLAY THE CONTENTS OF THE ARRAY
    //  AFTER SORTING BY NAME
    
    cout << endl;
    
    return 0;
    
    
}
