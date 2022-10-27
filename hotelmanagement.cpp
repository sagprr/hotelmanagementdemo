#include <iostream>
using namespace std;
int main()
{
    int quant;
    int choice;

    // Qauntity avaiable
    int rooms = 0, pasta = 0, pizza = 0, paneer = 0, chicken = 0, roti = 0, noodles = 0;

    // Food items sold
    int rooms1 = 0, pasta1 = 0, pizza1 = 0, paneer1 = 0, chicken1 = 0, roti1 = 0, noodles1 = 0;
    ;

    // total price of items
    int totalrooms = 0;
    int totalpasta = 0, totalpizza = 0, totalchicken = 0, totalpaneer = 0, totalroti = 0, totalnoodles = 0;
    ;

    cout << "\n \t \t Quantity of items in hotel" << endl;
    cout << endl;
    cout << "Rooms available ";
    cin >> rooms;

    cout << "\n Quantity of pasta :";
    cin >> pasta;

    cout << "\n Quantity of pizza :";
    cin >> pizza;

    cout << "\n Quantity of paneer :";
    cin >> paneer;

    cout << "\n Quantity of chicken :";
    cin >> chicken;


    a:
    cout << "\n \t\t\t Please select from the given menu options ";
    cout << "\n \n Rooms";
    cout << "\n2 Pasta";
    cout << "\n3 Pizza";
    cout << "\n4 Paneer";
    cout << "\n5 Chicken";
    cout << "\n6 Information regarding sales and collection ";
    cout << "\n8 EXIT ";

    cout << "\n \n Please enter your choice ";
    cin >> choice;

    switch (choice)
    {
    case 1:
        cout << " \n \n Enter the number of rooms in need ";
        cin >> quant;
        if (rooms - rooms1 >= quant)
        {
            rooms = rooms1 + quant;
            totalrooms = totalrooms + quant * 1500;
            cout << "\n \n \n \t\t " << quant << "rooms have been alloted to you :)";
        }

        else
        {
            cout << "\n \t Only " << rooms - rooms1 << "Rooms left in hotel to occupy";
            break;
        }

    case 2:
        cout << " \n \n Enter the number of pasta to be ordered ";
        cin >> quant;
        if (pasta - pasta1 >= quant)
        {
            pasta = pasta + quant;
            totalpasta = totalpasta + quant * 100;
            cout << "\n \n \n \t\t " << quant << "Pasta have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << pasta - pasta1 << "Pasta left to be ordered in stock";
            break;
        }

    case 3:
        cout << " \n \n Enter the number of paneer to be ordered ";
        cin >> quant;
        if (paneer - paneer1 >= quant)
        {
            paneer = paneer + quant;
            totalpaneer = totalpaneer + quant * 200;
            cout << "\n \n \n \t\t " << quant << "Paneer have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << paneer - paneer1 << "Paneer left to be ordered in stock";
            break;
        }

    case 4:
        cout << " \n \n Enter the number of pizza to be ordered ";
        cin >> quant;
        if (pizza - pizza1 >= quant)
        {
            pizza = pizza + quant;
            totalpizza = totalpizza + quant * 300;
            cout << "\n \n \n \t\t " << quant << "pizza have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << pizza - pizza1 << "pizza left to be ordered in stock";
            break;
        }

    case 5:
        cout << " \n \n Enter the number of chicken to be ordered ";
        cin >> quant;
        if (chicken - chicken1 >= quant)
        {
            chicken = chicken + quant;
            totalchicken = totalchicken + quant * 400;
            cout << "\n \n \n \t\t " << quant << "chicken have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << chicken - chicken1 << "chicken left to be ordered in stock";
            break;
        }

    case 6:
        cout << " \n \n Enter the number of roti to be ordered ";
        cin >> quant;
        if (roti - roti1 >= quant)
        {
            roti = roti + quant;
            totalroti = totalroti + quant * 15;
            cout << "\n \n \n \t\t " << quant << "roti have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << roti - roti1 << "roti left to be ordered in stock";
            break;
        }

    case 7:
        cout << " \n \n Enter the number of noodles to be ordered ";
        cin >> quant;
        if (noodles - noodles1 >= quant)
        {
            noodles = noodles + quant;
            totalnoodles = totalnoodles + quant * 85;
            cout << "\n \n \n \t\t " << quant << "noodles have been placed to you :)";
        }

        else
        {
            cout << "\n \t Only " << noodles - noodles1 << "noodles left to be ordered in stock";
            break;
        }

    case 8:
        cout << " \n\t Details of sales and collection ";
        cout << " \n\n Display number of rooms we had : " << rooms;
        cout << " \n\n Display number of rooms we rented : " << rooms1;
        cout << " \n\n  Display number of Remaining rooms we had : " << rooms - rooms1;
        cout << " \n\n  Total rooms collection  of rooms we had : " << totalrooms;

        cout << " \n\n Display number of pasta we had : " << pasta;
        cout << " \n\n Display number of pasta we served : " << pasta1;
        cout << " \n\n  Display number of Remaining pasta stock we had : " << pasta - pasta1;
        cout << " \n\n  Total pasta collection we had : " << totalpasta;

        cout << " \n\n Display number of paneer we had : " << paneer;
        cout << " \n\n Display number of paneer we served : " << paneer1;
        cout << " \n\n  Display number of Remaining paneer stock we had : " << paneer - paneer1;
        cout << " \n\n  Total paneer collection we had : " << totalpaneer;

        cout << " \n\n Display number of pizza we had : " << pizza;
        cout << " \n\n Display number of pizza we served : " << pizza1;
        cout << " \n\n  Display number of Remaining pizza stock we had : " << pizza - pizza1;
        cout << " \n\n  Total pizza collection we had : " << totalpizza;

        cout << " \n\n Display number of chicken we had : " << chicken;
        cout << " \n\n Display number of chicken we served : " << chicken1;
        cout << " \n\n  Display number of Remaining chicken stock we had : " << chicken - chicken1;
        cout << " \n\n  Total chicken collection we had : " << totalchicken;

        cout << " \n\n Display number of roti we had : " << roti;
        cout << " \n\n Display number of roti we served : " << roti1;
        cout << " \n\n  Display number of Remaining roti stock we had : " << roti - roti1;
        cout << " \n\n  Total roti collection we had : " << totalroti;

        cout << " \n\n Display number of noodles we had : " << noodles;
        cout << " \n\n Display number of noodles we served : " << noodles1;
        cout << " \n\n  Display number of Remaining noodles stock we had : " << noodles - noodles1;
        cout << " \n\n  Total noodles collection we had : " << totalnoodles;

        cout <<"\n \n \n Total collection for the day is :" << totalchicken+totalnoodles+totalpaneer+totalpasta+totalpizza+totalrooms+totalroti;


        case 9:
            exit(0);

            default:
                cout <<"\n PLease select the numbers mentioned above "<< endl;

    }
    goto a; // jump statement from one part to another 
}