#include<iostream>
#include<string.h>
using namespace std;

class vinisha
{
    private:
    char course[20]="flutter";
    char collage[20]="RED & WHITE";

    friend void krisha();
};

void krisha()
{
    vinisha v1;
    char course[20],collage[20];

    cout << "Vinisha Course:" << v1.course << endl;
    cout << "Vinisha Collage" << v1.collage;

    strcpy(course,v1.course);
    strcpy(collage,v1.collage);
    cout << endl << endl << "Krisha Course:" << v1.course << endl;
    cout << "Krisha Collage" << v1.collage;

}

int main()
{
    krisha();
    return 0;
}
