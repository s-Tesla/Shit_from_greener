#include<bits/stdc++.h>
template <typename T>
class List {
public:
    List() : head(nullptr) {}

    ~List() {
        Node *temp = head;
        while (temp) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }

    void insert(T data) {
        Node *newNode = new Node(data);

        if (!head) {
            head = newNode;
            return;
        }

        if (data <= head->data) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node *temp = head;
        while (temp->next && temp->next->data < data) {
            temp = temp->next;
        }

        newNode->next = temp->next;
        temp->next = newNode;
    }

    void remove(T data) {
        if (!head) {
            return;
        }

        if (head->data == data) {
            Node *temp = head;
            head = head->next;
            delete temp;
            return;
        }

        Node *temp = head;
        while (temp->next && temp->next->data != data) {
            temp = temp->next;
        }

        if (!temp->next) {
            return;
        }

        Node *toDelete = temp->next;
        temp->next = toDelete->next;
        delete toDelete;
    }

    void display() {
        Node *temp = head;
        while (temp) {
            std::cout << temp->data << " ";
            temp = temp->next;
        }
        std::cout << std::endl;
    }
private:
    struct Node {
        T data;
        Node *next;

        Node(T data) : data(data), next(nullptr) {}
    };

    Node *head;
};
int main()
{
    // List <const char*> Clist;
    // Clist.insert("Hello");
    // Clist.insert("C");
    // Clist.insert("World");
    // Clist.display();
    // Clist.remove("C");
    // Clist.display();
    // 上述为测试用例，咋写都行
    system("pause");
    return 0;
}
