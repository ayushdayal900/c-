
// Simple C++ program to add two polynomials
#include <iostream>
using namespace std;
 
// A utility function to return maximum of two integers
int max(int m, int n) { return (m > n) ? m : n; }
 
// A[] represents coefficients of first polynomial
// B[] represents coefficients of second polynomial
// m and n are sizes of A[] and B[] respectively
int* add(int A[], int B[], int m, int n)
{
    int size = max(m, n);
    int* sum = new int[size];
 
    // Initialize the product polynomial
    for (int i = 0; i < m; i++)
        sum[i] = A[i];
 
    // Take every term of first polynomial
    for (int i = 0; i < n; i++)
        sum[i] += B[i];
 
    return sum;
}
 
// A utility function to print a polynomial
void printPoly(int poly[], int n)
{
    for (int i = 0; i < n; i++) {
        cout << poly[i];
        if (i != 0)
            cout << "x^" << i;
        if (i != n - 1)
            cout << " + ";
    }
}
 
// Driver program to test above functions
int main()
{
    // The following array represents polynomial 5 + 10x^2 +
    // 6x^3
    int A[] = { 5, 0, 10, 6 };
 
    // The following array represents polynomial 1 + 2x +
    // 4x^2
    int B[] = { 1, 2, 4 };
    int m = sizeof(A) / sizeof(A[0]);
    int n = sizeof(B) / sizeof(B[0]);
 
    cout << "First polynomial is \n";
    printPoly(A, m);
    cout << "\nSecond polynomial is \n";
    printPoly(B, n);
 
    int* sum = add(A, B, m, n);
    int size = max(m, n);
 
    cout << "\nsum polynomial is \n";
    printPoly(sum, size);
 
    return 0;
}
Learn Data Structures & Algorithms with GeeksforGeeks

Output: 

First polynomial is
5 + 0x^1 + 10x^2 + 6x^3
Second polynomial is
1 + 2x^1 + 4x^2
Sum polynomial is
6 + 2x^1 + 14x^2 + 6x^3

Time complexity: O(m+n) where m and n are orders of two given polynomials.

Auxiliary Space: O(max(m, n))
Polynomial addition using Linked List

// Program to add two polynomials represented
// in linkedlist using recursion
#include <iostream>
using namespace std;
 
// Node class
class Node {
 
public:
    int coeff, power;
    Node* next;
 
    // Constructor of Node
    Node(int coeff, int power)
    {
        this->coeff = coeff;
        this->power = power;
        this->next = NULL;
    }
};
 
// Function to add polynomials
void addPolynomials(Node* head1, Node* head2)
{
 
    // Checking if our list is empty
    if (head1 == NULL && head2 == NULL)
        return;
 
    // List contains elmements
 
    else if (head1->power == head2->power) {
        cout << " " << head1->coeff + head2->coeff << "x^"
             << head1->power << " ";
        addPolynomials(head1->next, head2->next);
    }
    else if (head1->power > head2->power) {
        cout << " " << head1->coeff << "x^" << head1->power
             << " ";
        addPolynomials(head1->next, head2);
    }
    else {
        cout << " " << head2->coeff << "x^" << head2->power
             << " ";
        addPolynomials(head1, head2->next);
    }
}
 
void insert(Node* head, int coeff, int power)
{
    Node* new_node = new Node(coeff, power);
    while (head->next != NULL) {
        head = head->next;
    }
    head->next = new_node;
}
 
void printList(Node* head)
{
    cout << "Linked List" << endl;
    while (head != NULL) {
        cout << " " << head->coeff << "x"
             << "^" << head->power;
        head = head->next;
    }
}
 
// Main function
int main()
{
 
    Node* head = new Node(5, 2);
    insert(head, 4, 1);
    Node* head2 = new Node(6, 2);
 
    insert(head2, 4, 1);
    printList(head);
 
    cout << endl;
    printList(head2);
 
    cout << endl << "Addition:" << endl;
    addPolynomials(head, head2);
 
    return 0;
}
