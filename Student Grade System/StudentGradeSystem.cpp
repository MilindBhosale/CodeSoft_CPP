#include<iostream>
using namespace std;

int main()
{
    cout<<"\n\n-------------Student Grade System---------------\n\n";
    int num;
    double highestG=0,lowestG=0,AvgG=0;
    abc:
    cout<<"Enter total number of students:- ";
    cin>>num;

    if(num==0)
    {
        cout<<"Please enter valid number!!"<<endl;
        goto abc;
    }
    string Name[num];
    double Grade[num];

    for(int i=0;i<num;i++)
    {
        cout<<"Enter the name of "<<(i+1)<<" student:- ";
        cin>>Name[i];
        cout<<"Enter the grade:- ";
        cin>>Grade[i];
        if(highestG==0 || Grade[i]>highestG)
            highestG=Grade[i];
        if(lowestG==0 || Grade[i]<lowestG)
            lowestG=Grade[i];
        AvgG+=Grade[i];
    }
    cout<<"\n\nName\t\tGrade"<<endl;
    for(int i=0;i<num;i++)
    {
        cout<<Name[i]<<"\t\t"<<Grade[i]<<endl;
    }
    cout<<"\n\nAverage grade:- "<<AvgG/num<<endl;
    cout<<"Highest grade score:- "<<highestG<<endl;
    cout<<"Lowest grade score:- "<<lowestG;

    return 0;
}