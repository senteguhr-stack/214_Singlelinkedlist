#include <iostream>
#include <string>
using namespace std;
#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
    int noMhs;
    Node *next;
};

class LinkedList
{
    Node *START;

public:
    LinkedList()
    {
        START = NULL;
    }

    void addNode()
    {
        int nim;
        cout << "\nMasukkan NIM Mahasiswa: ";
        cin >> nim;

        Node *Nodebaru = new Node();
        Nodebaru->noMhs = nim;

        if (START == NULL || START->noMhs >= Nodebaru->noMhs)
        {
            if (START != NULL && nim == START->noMhs)
            {
                cout << "\nDuplikasi noMhs tidak di ijinkan\n";
                return;
            }
