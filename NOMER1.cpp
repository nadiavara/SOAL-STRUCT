#include <iostream>
#include <stdlib.h>
#define N_MOVIES 5
int MOVIES ;
using namespace std;
struct movies_t 
{
    char title [50];
    int year [];
} films [N_MOVIES];
void printmovie (movies_t movie);
int main()
{
    char buffer[50];
    int n;
    cout<<"Masukan Jumlah Movie Favorit Anda :";
    cin>>MOVIES;
    for (n=0;n<MOVIES;n++)
    {
        cout<<"Masukan Judul Film :";
        cin.getline (buffer,50);
        cout<<endl;
        cout<<"Masukan Tahun Film :";
        cin.getline (buffer,50);
       films[n];
	   int year = atoi (buffer);
    }
    cout<<"Film yang menjadi favorit kamu adalah :"<<endl;
    for (n=0;n<MOVIES;n++)
        printmovie(films[n]);
    return 0;
}

void printmovie (movies_t movie)
{
    cout<<movie.title;
    cout<<"("<<movie.year<<")"<<endl;
}


