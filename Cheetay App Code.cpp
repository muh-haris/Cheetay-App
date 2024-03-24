#include <iostream>
#include <windows.h>
#include <fstream>
#include <iomanip>
#include <string>
#include <ctime>

using namespace std;

void show_menue();
void Food();
void BiryaniExpress();
void Arcadian_Cafe();
void Pizza_Chaneel();
void Uncle_Tesu();
void cart(int a, string b);
int g;

struct resturant
{
    string restname;
    int DeliFee;
    int DeliTime;
    string address;
} s;

int main()
{
    /*HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(h,4 );*/
    system("color 6");
    cout << "\n\n\n\n\n\n";
    cout << setw(10) << setfill(' ') << " "
         << "O O O O        O     O    OOOOOOO      OOOOOOO     OOOOOOOO    OOOOOOOOOOO  O       O\n";
    cout << setw(9) << setfill(' ') << " "
         << "O       O       O     O    O            O          O        O        O        O     O\n";
    cout << setw(8) << setfill(' ') << " "
         << "O                O     O    O            O          O        O        O         O   O \n";
    cout << setw(7) << setfill(' ') << " "
         << "O   00000         O     O    O            O          O        O        O          O O\n";
    cout << setw(6) << setfill(' ') << " "
         << "O    00000         OOOOOOO    OOOOOOO      OOOOOOO    OOOOOOOOOO        O           O\n";
    cout << setw(7) << setfill(' ') << " "
         << "O   00000   O     O     O    O            O          O        O        O           O\n";
    cout << setw(8) << setfill(' ') << " "
         << "O         O      O     O    O            O          O        O        O           O\n";
    cout << setw(9) << setfill(' ') << " "
         << "O       O       O     O    O            O          O        O        O           O\n";
    cout << setw(10) << setfill(' ') << " "
         << "O O O O        O     O    OOOOOOO      OOOOOOO    O        O        O           O\n";
    cout << "\n\n\n\n\n\n";

    string choice;
    cout << setw(52) << setfill('-') << "-" << endl;
    cout << "|" << setw(23) << setfill(' ') << " "
         << "ADDRESS" << setw(20) << setfill(' ') << " "
         << "|" << endl;
    cout << setw(52) << setfill('-') << "-" << endl
         << endl
         << endl;
    cout << "Enter your address\n";
    getline(cin, s.address);

    show_menue();
    cin >> choice;
    if (choice == "Food")
    {
        Food();
    }
    else
    {
        cout << "Invalid Input";
    }
}

void Food()
{
    string resturants;
    system("cls");
    cout << "All restaurants\n";
    cout << "Top restaurants in your area are given\n";

    cout << setw(41) << setfill('-') << "-" << endl;
    cout << "| "
         << "Biryani Express" << setw(18) << setfill(' ') << " "
         << "* 5.0|" << endl;
    cout << "|" << setw(39) << setfill(' ') << " "
         << "|\n";
    cout << "| "
         << " 60 mins"
         << "   "
         << "Rs. 150 Delivery fee" << setw(7) << setfill(' ') << " "
         << "|\n";
    cout << setw(41) << setfill('-') << "-"
         << "\n\n";

    cout << setw(41) << setfill('-') << "-" << endl;
    cout << "| "
         << "Arcadian Cafe" << setw(20) << setfill(' ') << " "
         << "* 5.0|" << endl;
    cout << "|" << setw(39) << setfill(' ') << " "
         << "|\n";
    cout << "| "
         << "60 mins"
         << "   "
         << "Rs. 150 Delivery fee" << setw(8) << setfill(' ') << " "
         << "|\n";
    cout << setw(41) << setfill('-') << "-"
         << "\n\n";

    cout << setw(41) << setfill('-') << "-" << endl;
    cout << "| "
         << "Pizza Channel " << setw(19) << setfill(' ') << " "
         << "* 5.0|" << endl;
    cout << "|" << setw(39) << setfill(' ') << " "
         << "|\n";
    cout << "| "
         << "30 mins"
         << "   "
         << "Rs. 120 Delivery fee" << setw(8) << setfill(' ') << " "
         << "|\n";
    cout << setw(41) << setfill('-') << "-"
         << "\n\n";

    cout << setw(41) << setfill('-') << "-" << endl;
    cout << "| "
         << "Uncle Testu" << setw(22) << setfill(' ') << " "
         << "* 5.0|" << endl;
    cout << "|" << setw(39) << setfill(' ') << " "
         << "|\n";
    cout << "| "
         << "40 mins"
         << "   "
         << "Rs. 70 Delivery fee" << setw(9) << setfill(' ') << " "
         << "|\n";
    cout << setw(41) << setfill('-') << "-"
         << "\n\n";

    cin.ignore();
    cout << "Enter resturant Name ";
    getline(cin, s.restname);
    if (s.restname == "Biryani Express")
    {
        BiryaniExpress();
    }
    else if (s.restname == "Arcadian Cafe")
    {
        Arcadian_Cafe();
    }
    else if (s.restname == "Pizza Channel")
    {
        Pizza_Chaneel();
    }
    else if (s.restname == "Uncle Testu")
    {
        Uncle_Tesu();
    }
    else
        cout << "Invalid input";
}

void show_menue()
{
    system("cls");
    cout << "Choose from the following\n";
    cout << " " << setw(11) << setfill('-') << "-" << setw(5) << setfill(' ') << " " << setw(11) << setfill('-') << "-" << endl;
    cout << " "
         << "| "
         << "Grocery |"
         << "     "
         << "|   "
         << "Food"
         << "  |\n";
    cout << " " << setw(11) << setfill('-') << "-" << setw(5) << setfill(' ') << " " << setw(11) << setfill('-') << "-"
         << "\n\n";
    cout << " " << setw(12) << setfill('-') << "-" << setw(4) << setfill(' ') << " " << setw(11) << setfill('-') << "-" << endl;
    cout << " "
         << "|"
         << "Fresh Milk|"
         << "    "
         << "|  "
         << "Pharma"
         << " |\n";
    cout << " " << setw(12) << setfill('-') << "-" << setw(4) << setfill(' ') << " " << setw(11) << setfill('-') << "-" << endl;
}

void BiryaniExpress()
{
    string cho, c, d, m;
    int e, f;
    s.DeliFee = 150;
    s.DeliTime = 60;
    system("CLS");
    cout << endl; //   Shapes
    cout << setw(9) << "=====" << setw(9) << "/`" << setw(7) << "||" << setw(10) << "|||||" << setw(9) << "|~|" << setw(14) << "/\\" << endl;
    cout << setw(10) << "-------" << setw(9) << "|~|" << setw(7) << "|  |" << setw(10) << "|-----|" << setw(8) << "|   |" << setw(6) << "|~|" << setw(9) << "/''\\" << setw(8) << "/\\" << endl;
    cout << setw(10) << "XXXXXXX" << setw(9) << "|   |" << setw(7) << "|oo|" << setw(10) << "|     |" << setw(8) << "| S |" << setw(6) << "|   |" << setw(10) << "/**\\" << setw(8) << "/''\\" << endl;
    cout << setw(10) << "-------" << setw(9) << "|^^|" << setw(7) << "|oo|" << setw(10) << "|FRIES|" << setw(8) << "|_|" << setw(6) << "| S |" << setw(11) << "/___\\" << setw(8) << "/**\\" << endl;
    cout << setw(9) << "=====" << setw(10) << "|_|" << setw(7) << "|_|" << setw(10) << "|_|" << setw(14) << "|_|" << setw(20) << "/___\\" << endl;
    // cout << setw(70) << setfill('') << "" << endl << endl;
    cout << s.restname << "\t\t *5.0" << endl
         << s.DeliTime << " mins \t\t Rs." << s.DeliFee << " delivery fee \n\n";
    cout << setw(70) << setfill('_') << "_" << endl
         << endl;
    cout << " Deals \n\n";
    cout << " Biryani    Soups    Fries    Burgers    Sandwiche  \n\n";
    cout << setw(70) << setfill('_') << "_" << endl
         << endl;
    cout << " Which category you want: ";
    getline(cin, cho);
    cout << endl;
    if (cho == "Biryani")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "BIRYANI" << setw(20) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << "Chicken Biryani\t\tRs.169\nBBQ Biryani\t\tRs.399\nDelight Biryani\t\tRs.390\nChicken Biryani Combo\tRs.259\n";
        string a[] = {"Chicken Biryani", "BBQ Biryani", "Delight Biryani", "Chicken Biryani Combo"};
        int b[] = {169, 399, 390, 259};
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose your size: \n";
                cout << "1.Half \t"
                     << "\n2.Medium \t +Rs. 150 \n";
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 150;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Soups")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "SOUPS" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << "Special Soup\t\tRs. 245\nHot N Sour Soup\t\tRs. 200\nChicken Corn Soup\tRs. 190\nThai Soup\t\tRs. 220\n\n";
        string a[] = {"Special Soup", "Hot N Sour Soup", "Chicken Corn Soup", "Thai Soup"};
        int b[] = {245, 200, 190, 220};
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose your size: \n";
                cout << "1.Single Bowl \t"
                     << "\n2.Family Bowl \t +Rs. 500\n ";
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 500;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Fries")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "FRIES" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << "French Fries\tRs. 220\nMayo Fries\tRs. 313\nMasala Fries\tRs. 254\nBBQ Fries\tRs. 313\n";
        string a[] = {"French Fries", "Mayo Fries", "Masala Fries", "BBQ Fries"};
        int b[] = {220, 313, 254, 313};
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t" << b[i];
                e = b[i];
                g = e;
                cout << g << "\n";
                cart(g, m);
            }
        }
    }
    else if (cho == "Burgers")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "BURGERS" << setw(20) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << "Beef Burger\t\tRs. 279\nChicken Burger\t\tRs. 271\nMalik Burger\t\tRs. 322\nGrilled Breast Burger\tRs. 305\n";
        string a[] = {"Beef Burger", "Chicken Burger", "Malik Burger", "Grilled Breast Burger"};
        int b[] = {279, 271, 322, 305};
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose your size: \n";
                cout << "1.Nothing\n"
                     << "2.Extra Cheese \t +Rs. 89"
                     << "\n3.Coleslaw \t +Rs. 89\n"
                     << "4.Both\n";
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                if (d == "2")
                {
                    e = b[i] + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "3")
                {
                    e = b[i] + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "4")
                {
                    e = b[i] + 89 + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Sandwiche")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "Sandwiche" << setw(18) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << "Chicken Sandwich\tRs. 271\nClub Sandwich\t\tRs. 200\nGrilled breast Sandwich\tRs. 288\nChicken Steak Sandwich\tRs. 296\n\n";
        string a[] = {"Chicken Sandwich", "Club Sandwich", "Grilled breast Sandwich", "Chicken Steak Sandwich"};
        int b[] = {271, 200, 288, 296};
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose your size: \n";
                cout << "1.Nothing\n"
                     << "2.Extra Cheese \t +Rs. 89"
                     << "\n3.Coleslaw \t +Rs. 89\n"
                     << "4.Both\n";
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "3")
                {
                    e = b[i] + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "4")
                {
                    e = b[i] + 89 + 89;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else
    {
        cout << "This item does not exist. \n";
    }
}
void Arcadian_Cafe() // Arcadian Cafe
{
    system("CLS");
    string cho, c, m;
    s.DeliFee = 150;
    s.DeliTime = 60;
    // system("color 7C");
    cout << endl; //   Shapes
    cout << setw(9) << "=====" << setw(9) << "/`" << setw(7) << "||" << setw(10) << "|||||" << setw(9) << "|~|" << setw(14) << "/\\" << endl;
    cout << setw(10) << "-------" << setw(9) << "|~|" << setw(7) << "|  |" << setw(10) << "|-----|" << setw(8) << "|   |" << setw(6) << "|~|" << setw(9) << "/''\\" << setw(8) << "/\\" << endl;
    cout << setw(10) << "XXXXXXX" << setw(9) << "|   |" << setw(7) << "|oo|" << setw(10) << "|     |" << setw(8) << "| S |" << setw(6) << "|   |" << setw(10) << "/**\\" << setw(8) << "/''\\" << endl;
    cout << setw(10) << "-------" << setw(9) << "|^^|" << setw(7) << "|oo|" << setw(10) << "|FRIES|" << setw(8) << "|_|" << setw(6) << "| S |" << setw(11) << "/___\\" << setw(8) << "/**\\" << endl;
    cout << setw(9) << "=====" << setw(10) << "|_|" << setw(7) << "|_|" << setw(10) << "|_|" << setw(14) << "|_|" << setw(20) << "/___\\" << endl;
    cout << setw(70) << setfill('_') << '_' << endl
         << endl;
    cout << setw(20) << setfill('-') << "-" << endl
         << "|   " << s.restname << " | "
         << "\t\t * 5.0" << endl
         << setw(20) << setfill('-') << " - " << endl;
    cout << s.DeliTime << " mins \t\t\t Rs." << s.DeliFee << " delivery fee \n\n";
    cout << " Fast Food   Italian   Thai   Seafood   Barbeque   Pizza   Soup \n";
    cout << setw(70) << setfill('_') << '_' << endl
         << endl;
    cout << " Deals \n"; //    Deals
    cout << setw(70) << setfill('-') << "-" << endl;
    cout << "|  Pizza  |  Soups  |  Fries  |  Seafood  |  Burger  |  Creamy Shake | \n";
    cout << setw(70) << setfill('-') << "-" << endl
         << endl; //   Category
    cout << " Which category you want: ";
    getline(cin, cho);
    cout << endl;
    if (cho == "Pizza") //   Pizza
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "PIZZA" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl
             << " BBQ Pizza \t\t Rs.900 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Tikka Pizza \t\t Rs.1,245 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Fajita Pizza \t\t Rs.450 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Vegetable Pizza \t Rs.900 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string a[] = {"BBQ Pizza", "Tikka Pizza", "Fajita Pizza", "Vegetable Pizza"};
        int b[] = {900, 1245, 450, 900};
        cout << endl;
        cout << "Which Flavour you want: ";
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;
                cout << "1.Small \t Rs." << b[i] << "\n2.Medium \t Rs." << b[i] + 400 << "\n3.Large \t Rs." << b[i] + 900 << "\n";
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] + 400;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 3)
                {
                    e = b[i] + 900;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else if (cho == "Soups") //   Soups
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "SOUPS" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl
             << " Cream of Chicken \t Rs.520 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Cream of Mushroom \t Rs.500 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Chicken Corn Soup \t Rs.400 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Arcadian Special Soup \t Rs.450 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string c;
        string a[] = {"Cream of Chicken", "Cream of Mushroom", "Chicken Corn Soup", "Arcadian Special Soup"};
        int b[] = {520, 500, 400, 450};
        cout << endl;
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;
                cout << "1.Small Bowl \t Rs." << b[i] << "\n2.Family Bowl \t Rs." << b[i] + 300 << endl;
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] + 300;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else if (cho == "Fries") //  Fries
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(23) << setfill(' ') << " "
             << "FRIES" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl
             << " Crispy Prawns \t\t Rs.420 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Ball Prawns \t\t Rs.400 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Grilled Prawns \t Rs.520 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Dynamite Prawns \t Rs.600 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string c;
        string a[] = {"Crispy Prawns", "Ball Prawns", "Grilled Prawns", "Dynamite Prawns"};
        int b[] = {420, 400, 520, 600};
        cout << endl;
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;
                cout << "1.Regular \t Rs." << b[i] << "\n2.Family \t Rs." << b[i] + 300 << endl;
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] + 300;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else if (cho == "Seafood") //             SeaFood
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(22) << setfill(' ') << " "
             << "SeaFood" << setw(21) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;

        cout << setw(40) << setfill('-') << "-" << endl
             << " Pan Fried Fish \t Rs.1,450 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Crispy Fish \t\t Rs.1,470 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Sole Fish \t\t Rs.1,350 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Finger Fish \t\t Rs.1,600 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string c;
        string a[] = {"Pan Fried Fish", "Crispy Fish", "Sole Fish", "Finger Fish"};
        int b[] = {1450, 1470, 1350, 1600};
        cout << endl;
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;
                cout << "1.Half Kg \t Rs." << b[i] << "\n2.Full Kg \t Rs." << b[i] * 2 - 100 << endl;
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] * 2 - 100;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else if (cho == "Burger") //    Burger
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(22) << setfill(' ') << " "
             << "BURGER" << setw(22) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl
             << " Dynamite Burger \t\t Rs.745 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Beef Burger \t\t\t Rs.895 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Chicken Burger \t\t Rs.825 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Zinger Burger \t\t\t Rs.800 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string c;
        string a[] = {"Dynamite Burger", "Beef Burger", "Chicken Burger", "Zinger Burger"};
        int b[] = {745, 895, 825, 800};
        cout << endl;
        cout << "Which Flavour you want: ";
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;
                cout << "1.Small \t Rs." << b[i] << "\n2.Medium \t Rs." << b[i] + 100 << "\n3.King size \t Rs." << b[i] + 300 << endl;
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] + 100;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 3)
                {
                    e = b[i] + 300;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else if (cho == "Creamy Shake") //      Shake
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "CREAMY SHAKE" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl
             << " Oreo Pleasure \t\t Rs.395 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Kit Kat Shake \t\t Rs.425 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Chocolate Shake \t Rs.520 \n"
             << setw(40) << setfill('-') << "-" << endl
             << " Strawberry Shake \t Rs.520 \n"
             << setw(40) << setfill('-') << "-" << endl;
        string c;
        string a[] = {"Oreo Pleasure", "Kit Kat Shake", "Chocolate Shake", "Strawberry Shake"};
        int b[] = {395, 425, 520, 520};
        cout << endl;
        getline(cin, c);
        for (int i = 0; i < 4; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << setw(40) << setfill('-') << "-" << endl
                     << setw(6) << setfill(' ') << " " << m << "\t\t Rs." << b[i]
                     << setw(6) << setfill(' ') << " " << endl
                     << setw(40) << setfill('-') << "-" << endl
                     << endl;

                cout << "1.Regular \t Rs." << b[i] << "\n2.Large \t Rs." << b[i] + 200 << endl;
                cout << "\nChoose the size: ";
                int size, e, f;
                cin >> size;
                cout << endl;
                if (size == 1)
                {
                    e = b[i];
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (size == 2)
                {
                    e = b[i] + 200;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else
                {
                    cout << "This size does not exist. \n\n";
                    break;
                }
            }
        }
    }
    else
    {
        cout << "This item does not exist. \n\n";
    }
}
void Pizza_Chaneel()
{
    system("CLS");
    s.DeliFee = 120;
    s.DeliTime = 30;
    cout << endl;
    cout << setw(9) << "=====" << setw(9) << "/`" << setw(7) << "||" << setw(10) << "___" << setw(9) << "|~|" << setw(14) << "/\\" << setw(9) << "/\\" << endl;
    cout << setw(10) << "___" << setw(9) << "||" << setw(7) << "|  |" << setw(10) << "|-----|" << setw(8) << "|   |" << setw(6) << "||" << setw(9) << "/''\\" << setw(9) << "/''\\" << endl;
    cout << setw(10) << "***" << setw(9) << "|   |" << setw(7) << "|%%|" << setw(10) << "|     |" << setw(8) << "| B |" << setw(6) << "|   |" << setw(10) << "/\\" << setw(9) << "/\\" << endl;
    cout << setw(10) << " __" << setw(9) << "|^^|" << setw(7) << "|%%|" << setw(10) << "|Drink|" << setw(8) << "||" << setw(6) << "| B |" << setw(11) << "/_\\" << setw(9) << "/_\\" << endl;
    cout << setw(9) << "**" << setw(10) << "||" << setw(7) << "||" << setw(10) << "|__|" << setw(14) << "|_|" << endl;
    cout << setw(70) << setfill('_') << "_" << endl
         << endl;
    cout << s.restname << "\t\t *4.7" << endl
         << s.DeliTime << " mins \t\t Rs." << s.DeliFee << "delivery fee \n\n";
    cout << setw(70) << setfill('_') << '_' << endl
         << endl;
    cout << " Deals \n";
    cout << " Pizza    Drinks      \n\n";
    string cho, c, m;
    cout << " Which category you want: ";
    getline(cin, cho);
    cout << endl;
    if (cho == "Pizza")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "Pizza" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << " Chicken Lover Pizza \t Rs.999 \n Chicken Supreme Pizza \t Rs.405 \n Hot And Spicy Pizza \t Rs.420 \n Chicken Achari Pizza \t Rs.900 \n";
        cout << " Chicken Mild Pizza \t Rs.440 \n Super Supreme Pizza \t Rs.430 \n Pepperoni Pizza \t Rs.490 \n Beef Salami Pizza \t Rs.430 \n";
        cout << " Hawailan Pizza \t/t Rs.830 \n Cheese Lover Pizza \t Rs.630 \n Chicken Euro Pizza \t Rs.730 \n Pasha Pizza \t Rs.940 \n";
        string a[] = {"Chicken Lover Pizza", "Super Supreme Pizza", "Hot And Spicy Pizza", "Chicken Achari Pizza", "Chicken Mild Pizza", "Super Supreme Pizza", "Pepperoni Pizza", "Beef Salami Pizza", "Hawailan Pizza", "Cheese Lover Pizza", "Chicken Euro Pizza", "Pasha Pizza"};
        int b[] = {999, 405, 420, 900, 440, 430, 490, 430, 830, 630, 730, 940};
        getline(cin, c);
        for (int i = 0; i < 12; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Small  \n2.Medium \t +Rs.400 \n3.Large \t +Rs.900 \n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 400;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "3")
                {
                    e = b[i] + 900;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Drinks")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "DRINKS" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << " Soft Drink Coca Cola \t Rs.120 \n Soft Drink 7UP \t Rs.110 \n Soft Drink Pepsi \t Rs.100 \n";
        string c;
        string a[] = {"Soft Drink Coca Cola", "Soft Drink 7UP", "Soft Drink Pepsi"};
        int b[] = {120, 110, 100};
        getline(cin, c);
        for (int i = 0; i < 3; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Regular  \n2.Large\t +Rs.60 \n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 60;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else
    {
        cout << "This item does not exist. \n";
    }
}
void Uncle_Tesu()
{
    system("CLS");
    s.DeliFee = 70;
    s.DeliTime = 40;
    cout << endl;
    cout << setw(9) << "=====" << setw(9) << "/`" << setw(7) << "||" << setw(10) << "_" << setw(9) << "|~|" << setw(14) << "/\\" << setw(9) << "/\\" << endl;
    cout << setw(10) << "_" << setw(9) << "||" << setw(7) << "|  |" << setw(10) << "|-----|" << setw(8) << "|   |" << setw(6) << "||" << setw(9) << "/''\\" << setw(9) << "/''\\" << endl;
    cout << setw(10) << "*" << setw(9) << "|   |" << setw(7) << "|%%|" << setw(10) << "|     |" << setw(8) << "| B |" << setw(6) << "|   |" << setw(10) << "/\\" << setw(9) << "/\\" << endl;
    cout << setw(10) << " " << setw(9) << "|^^|" << setw(7) << "|%%|" << setw(10) << "|Drink|" << setw(8) << "||" << setw(6) << "| B |" << setw(11) << "/\\" << setw(9) << "/\\" << endl;
    cout << setw(9) << "**" << setw(10) << "||" << setw(7) << "||" << setw(10) << "|_|" << setw(14) << "||" << endl;
    cout << setw(70) << setfill('_') << "_" << endl
         << endl;
    cout << s.restname << "\t\t *4.7" << endl
         << s.DeliTime << " mins \t\t Rs." << s.DeliFee << "delivery fee \n\n";
    cout << setw(70) << setfill('_') << '_' << endl
         << endl;
    cout << " Deals \n";
    cout << " Bakkery       Drinks        Pizza         Chienese food\n\n";
    string cho, c, m;
    cout << " Which category you want: ";
    getline(cin, cho);
    cout << endl;
    if (cho == "Bakkery")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "BAKKERY" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << "Japanese Cheese Cake\t\t Rs.999\nHoney Madeleines\t\t Rs.899\nStrawbry Japanese Cheese Cake \t Rs.1000\nChocolate Cheese Sticks \t Rs.700";
        string a[] = {"Japanese Cheese Cake", "Honey Madeleines", "Strawbry Japanese Cheese Cake", "Chocolate Cheese Sticks"};
        int b[] = {999, 899, 1000, 700, 600};
        getline(cin, c);
        for (int i = 0; i < 7; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Small  \n2.Medium \t +Rs.400 \n3.Large \t +Rs.1000 \n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 400;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "3")
                {
                    e = b[i] + 1000;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Drinks")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "DRINKS" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << "Drip coffee\t\t Rs.500\nCappuccino Coffee\t Rs.700\nClassi chotChocolate\t Rs.600\nStrawbery chocolate\t Rs.610\nClassic Tea\t\t Rs.400";
        string c;
        string a[] = {"Drip coffee", "Cappuccino Coffee", "Classi chotChocolate", "Strawbery chocolate", "Classic Tea"};
        int b[] = {500, 700, 600, 610, 400};
        getline(cin, c);
        for (int i = 0; i < 11; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Small  \n2.Large\t +Rs.299\n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 299;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Pizza")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "PIZZA" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << "Paneer Pizza \t Rs.500\nChocolate Pizza\t Rs.700\nPeporoni Pizza \t Rs.600\nGinger Pizza\t Rs.600\nBuffer Pizza \t Rs.400";
        string c;
        string a[] = {"Paneer Pizza", "Chocolate Pizza", "Peporoni Pizza", "Ginger Pizza", "Buffer Pizza"};
        int b[] = {500, 700, 600, 600, 400};
        getline(cin, c);
        for (int i = 0; i < 11; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Small  \n2.Large\t +Rs.499\n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 499;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else if (cho == "Chienese food")
    {
        cout << setw(52) << setfill('-') << "-" << endl;
        cout << "|" << setw(19) << setfill(' ') << " "
             << "CHIENESE FOOD" << setw(19) << setfill(' ') << " "
             << "|" << endl;
        cout << setw(52) << setfill('-') << "-" << endl
             << endl
             << endl;
        cout << setw(40) << setfill('-') << "-" << endl;
        cout << "Cheomien \t Rs.500\nNoodles \t Rs.700\nDrum stick \t Rs.100\nShahlike \t Rs.400\nChiken menchorien \t Rs.400";
        string c;
        string a[] = {"Cheomien", "Noodles", "Drum stick", "Shahlike", "Chicken menchoerien"};
        int b[] = {500, 700, 100, 400, 400};
        getline(cin, c);
        for (int i = 0; i < 5; i++)
        {
            if (c == a[i])
            {
                system("cls");
                m = a[i];
                cout << m;
                cout << "\t\t" << b[i];
                cout << endl
                     << setw(30) << setfill('_') << '_' << endl;
                cout << "\nChoose the size: \n";
                cout << "1.Small  \n2.Large\t +Rs.199\n";
                string d;
                int e, f;
                cin >> d;
                if (d == "1")
                {
                    e = b[i];
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
                else if (d == "2")
                {
                    e = b[i] + 199;
                    cout << setw(30) << setfill('_') << '_' << endl;
                    cout << "Select number of items: ";
                    cin >> f;
                    g = e * f;
                    cout << g << "\n";
                    cart(g, m);
                }
            }
        }
    }
    else
    {
        cout << "This item does not exist. \n";
    }
}
void cart(int a, string b)
{
    string ins, pay, enter, w, rating, continue_;
    int c;
    system("cls");
    cout << s.restname << "\n\n";
    cout << "Sub Total: \t Rs." << a << endl;
    cout << "Delivery Fee: \t Rs." << s.DeliFee << endl;
    cout << "Discount: \t Rs.0 " << endl;
    cout << "Service Fee: \t Rs.0 " << endl;
    cout << "Sales Tax: \t Rs.0 " << endl
         << endl;
    cout << "Total: \t\t Rs." << a + s.DeliFee << endl
         << endl
         << endl;
    cout << setw(30) << setfill('-') << "-" << endl;
    cout << "Delivery Address: " << s.address << endl;
    cout << setw(30) << setfill('-') << "-" << endl;
    cout << "Delivery Time:" << s.DeliTime << " mins \n";
    cout << setw(30) << setfill('-') << "-" << endl;
    cout << "Select Payment Method:\n1.Cash on Delivery\n2.Credit Card\n";
    cin.ignore();
    getline(cin, pay);
    if (pay == "Cash on Delivery")
    {
        cout << setw(30) << setfill('-') << "-" << endl;
    }
    else if (pay == "Credit Card")
    {
        cout << setw(30) << setfill('-') << " - " << endl;
    }
    cout << "Delivery Instructions: ";
    getline(cin, ins);
    cout << setw(30) << setfill('-') << "-" << endl;
    cout << "Write OK to order";
    cin >> enter;
    system("cls");
    cout << "\n\n\n\t Your order has been\n\tsuccessfully submitted \n\n\n";
    srand(time(0));
    c = rand();
    cout << "\t Your order no. is\n\t      " << c;
    cout << "\n\n\n\t Write OK to continue\n";
    cin >> enter;

    system("cls");
    cout << s.restname << " - We are preparing your Order \n\n";
    cout << setw(50) << setfill('-') << "-" << endl;
    cout << "This order will be delivered by restautant rider\n";
    cout << setw(50) << setfill('-') << "-" << endl
         << endl;
    cout << "Order Details\n";
    cout << s.restname << "\t\t" << c << "\n";
    cout << b << "\t\t"
         << " Rs. " << a << "\n";
    cout << setw(30) << setfill('-') << "-" << endl
         << endl;
    cout << "Sub Total: \t Rs." << a << endl;
    cout << "Delivery Fee: \t Rs." << s.DeliFee << endl;
    cout << "Discount: \t Rs.0 " << endl;
    cout << "Service Fee: \t Rs.0 " << endl;
    cout << "Sales Tax: \t Rs.0 " << endl
         << endl;
    cout << "Total: \t\t Rs." << a + s.DeliFee << endl
         << endl
         << endl;
    cout << setw(30) << setfill('-') << "-" << endl
         << endl;
    cout << pay << "\t\t Rs." << a + s.DeliFee << endl
         << endl;
    cin >> continue_;

    system("cls");
    cout << "Please give us a rating\n";
    cin >> rating;
    cout << "\n\n";
    if (rating == "*****")
    {
        cout << "\n\tYou give us \n\n\t   ***** \n\n";
    }
    if (rating == "****")
    {
        cout << "\n\tYou give us \n\n\t   **** \n\n";
    }
    if (rating == "***")
    {
        cout << "\n\tYou give us \n\n\t   ***\n\n";
    }
    if (rating == "**")
    {
        cout << "\n\tYou give us \n\n\t   ** \n\n";
    }
    if (rating == "*")
    {
        cout << "\n\tYou give us \n\n\t   * \n\n";
    }
    ofstream receipt; // File Receipt
    receipt.open("Receipt.txt", ios::app);
    receipt << setw(20) << setfill('-') << "-" << endl
            << "|   " << s.restname << " | " << endl
            << setw(20) << setfill('-') << " - "
            << "\n\n\n";
    receipt << "Taking Order \n\n";
    receipt << "Sub Total: \t Rs." << a << endl;
    receipt << "Delivery Fee: \t Rs." << s.DeliFee << endl;
    receipt << "Discount: \t Rs.0 " << endl;
    receipt << "Service Fee: \t Rs.0 " << endl;
    receipt << "Sales Tax: \t Rs.0 " << endl
            << endl;
    receipt << "Total: \t\t Rs." << a + s.DeliFee << endl
            << endl
            << endl;
    receipt << setw(35) << setfill('-') << "-" << endl
            << endl;
    receipt << "Delivery Address: " << s.address << endl;
    receipt << "Delivery Time: " << s.DeliTime << " \n";
    receipt << "Payment Method: " << pay << "\n";

    receipt << "\nDelivery Instructions: ";
    receipt << ins << endl;
    receipt << setw(35) << setfill(' ') << "" << endl
            << endl;

    receipt << setw(20) << setfill('-') << "-" << endl
            << "|   " << s.restname << "  |" << endl
            << setw(20) << setfill('-') << "-"
            << "\n\n\n";
    receipt << "Receipt \n\n";
    receipt << "Sub Total: \t Rs." << a << endl;
    receipt << "Delivery Fee: \t Rs." << s.DeliFee << endl;
    receipt << "Discount: \t Rs.0 " << endl;
    receipt << "Service Fee: \t Rs.0 " << endl;
    receipt << "Sales Tax: \t Rs.0 " << endl
            << endl;
    receipt << "Total: \t\t Rs." << a + s.DeliFee << endl
            << endl
            << endl;
    receipt << setw(35) << setfill('-') << "-" << endl
            << endl;

    receipt << pay << " \t Rs." << a + s.DeliFee << endl;
    receipt << setw(35) << setfill(' ') << " " << endl
            << endl;
    receipt << setw(100) << setfill(' ') << " " << endl
            << endl
            << endl;
    receipt.close();
}