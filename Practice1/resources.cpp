#include <iostream>

using namespace std;

struct Resource
{
private:
    int *data;

public:
    Resource() : data{new int[10]}
    {

        for (int i = 0; i <= 9; i++)
        {
            *data = 0;
        }
    }

    ~Resource()
    {
        delete data;
        cout << "Resource freed\n";
    }

    void displayFunc()
    {
        cout << "Resource allocated ";
        for (int i = 0; i <= 9; i++)
        {
            cout << data[i];
        }
        cout << endl;
    }

    friend void autreBloc();
};

void autreBloc()
{
    Resource resource1;

    for (int i = 0; i <= 9; i++)
    {
        resource1.data[i] = i + 1;
    }
    for (int i = 0; i <= 9; i++)
    {
        cout << (resource1.data[i]);
    }
}

int main()
{
    Resource resource;
    resource.displayFunc();
    autreBloc();
}

#include <iostream>

class Resource
{
private:
    int *data;

public:
    // Constructor
    Resource()
    {
        data = new int[10];
        for (int i = 0; i < 10; ++i)
        {
            data[i] = 0;
        }
        std::cout << "Resource allocated." << std::endl;
    }

    // Destructor
    ~Resource()
    {
        delete[] data;
        std::cout << "Resource freed." << std::endl;
    }

    // Method to display the data
    void display() const
    {
        for (int i = 0; i < 10; ++i)
        {
            std::cout << data[i] << " ";
        }
        std::cout << std::endl;
    }
};

int main()
{
    // Create a Resource object
    Resource res1;
    res1.display();

    {
        // Create another Resource object in a code block
        Resource res2;
        res2.display();
        // res2 will be destroyed at the end of this block
    }

    // res1 will be destroyed at the end of the program
    return 0;
}