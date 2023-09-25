#include <iostream>

using namespace std;

//NTS must be separated from main
     class Node{
public:
    string name;
    Node* Next;
    };

    // Must also be separated from Main function
     void printList(Node* n){
    while (n!=NULL){
        cout << n->Value; // << endl;
        n= n->Next;
    }
     }

    int main()
    {


        Node* head = new Node();
        Node* second = new Node();
        Node* third = new Node();
        Node* fourth = new Node();

        head->Value = "Hyena \n";
        cout << "please select a name from the list for Hyena:";
        cout << "Shenzi, Banzai, Ed, Zig, Bud, Lou, Kamari, Wema, Nne, Madoa, Prince Nevarah";

        head->Next = second;

        second->Value = "Bear";
        second->Next = third;

        third->Value = "Lion";
        third->Next = fourth;

        fourth->Value = "Tiger";
        fourth->Next = NULL;

        printList(head);

    return 0;
}
