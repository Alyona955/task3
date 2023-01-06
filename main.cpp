#include <iostream>
#include <fstream>
#include <string>
using namespace std;

void Title(ofstream &site)
{
    char a='"';
    char b=39;
    site << "<head>"<< endl;
    site<<"<meta charset="<<a<<"utf-8"<<a<<">"<<endl;
    site<<"<link rel="<<a<<"stylesheet"<<a<<" href="<<a<<"./css/table.css"<<a<<">"<<endl;
    site << "<title>";
    cout << "Write a title of the site" << endl;
    string title;
    getline(cin, title);
    site<<title;
    site << "</title>" << endl;
    site<<"</head>"<< endl;
    cout<<"The title is created"<<endl;
}
void Header(ofstream &site)
{
    cout<<"Create a variety of headers."<<endl;
    int n;
    cin>>n;
    site<<"<h"<<n<<" style=\"color:green; background: black; padding:10px;\">";
    cout<<"Write header"<<endl;
    string header;
    cin.ignore(32767, '\n');
    getline(cin, header);
    site<<header;
    site<<"</h"<<n<<">"<<endl;
    cout<<"The header is created"<<endl;
}


void PrintHelloWorld(){
    for (int i = 0; i < 10; ++i) {
        cout << "Hello";
    }
}



void Text(ofstream &site)
{

    site<<"<p>";
    cout<<"Write a text"<<endl;
    string text;
    cin.ignore(32767, '\n');
    getline(cin, text);
    site<<text;
    site<<"</p>"<<endl;
    cout<<"The text is created"<<endl;
}
void Bottom(ofstream &site)
{
    site<<"<bottom>"<<endl;
    cout<<"Write a bottom"<<endl;
    string text;
    string bottom;
    cin.ignore(32767, '\n');
    getline(cin, bottom);
    site<<bottom<<endl;
    site<<"</bottom>"<<endl;
    cout<<"The bottom is created"<<endl;
}
void Footer(ofstream &site)
{
    site<<"<footer>"<<endl;
    cout<<"Write a footer"<<endl;
    string footer;
    cin.ignore(32767, '\n');
    getline(cin, footer);
    site<<footer<<endl;
    site<<"</footer>"<<endl;
    cout<<"The footer is created"<<endl;
}
void Table(ofstream &site)
{
    cout<<"Write size of Table"<<endl;
    cout<<"Columns: "<<endl;
    char a='"';
    int columns;
    cin>>columns;
    columns = columns;
    cout<<"Raws: "<<endl;
    int raws;
    cin>>raws;
    raws = raws;
    ;
    site<<"<table"<<">"<<endl;
    site<<"<tbody>"<<endl;
    for(int i =1; i<=columns; i++)
    {
        site<<"<tr>"<<endl;
        for(int j=1; j<=raws; j++)
        {
            site<<"<td"<<" class="<<a<<"taboo"<<a<<">"<<endl;
            string element;
            cout<<"Write element "<<i<<j<<endl;
            cin>>element;
            element = element;
            site<<element<<endl;
            site<<"</td>"<<endl;
        }
        site<<"</tr>"<<endl;
    }
    site<<"</tbody>"<<endl;
    site<<"</table>"<<endl;
    cout<<"The table is created"<<endl;
}
void Button(ofstream &site)
{
    char a='"';
    char b=39;

    site<<"<button onclick="<<a<<"window.location.href = "<<b;
    cout<<"Write address of site"<<endl;
    string address;
    cin.ignore(32767, '\n');
    getline(cin, address);
    site<<address<<b<<";"<<" "<<a<<" "<<">";
    cout<<"Write a text on button"<<endl;
    string button;
    getline(cin, button);
    site<<button<<"</button>";
    cout<<"Nice! Button is created!";

}
void Stop(ofstream &site)
{
    site<<"</body>"<<endl;
    site<<"</html>";
    cout<<"The creation of site is completed";
}
int main() {
    int p = 1, k = 0;
    string web = "myFile.html";
    ofstream site;

    site.open(web);
    if (!site.is_open()) {
        cout << "File is not able to be opened";
        return 0;
    } else { cout << "Start work" << endl; }
    site << "<!DOCTYPE html>" << endl;
    site << "<html>" << endl;
    Title(site);
    if (k == 0)site << "<body>" << endl;
    for (int i = 0; i <= 1; i++) {
        cout << "Enter the number, which you wish to add." << endl;
        cout << "1.Header" << endl;
        cout << "2.Text" << endl;
        cout << "3.Bottom" << endl;
        cout << "4.Footer" << endl;
        cout << "5.Table" << endl;
        cout << "6.Button" << endl;
        cout << "7.Stop Creating" << endl;
        int number;
        cin >> number;
        if (number == 1) {
            Header(site);
            i--;
            k++;
        }
        if (number == 2) {
            Text(site);
            i--;
            k++;
        }
        if (number == 3) {
            Bottom(site);
            i--;
            k++;
        }
        if (number == 4) {
            Footer(site);
            i--;
            k++;
        }
        if (number == 5) {
            Table(site);
            i--;
            k++;
        }
        if (number == 6) {
            Button(site);
            i--;
            k++;
        }
        if (number == 7) {
            Stop(site);
            i = 1;
        }
    }
    site.close();
    return 0;
}

