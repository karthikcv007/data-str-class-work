#include<iostream>
using namespace std;
class Node{
	int data;
	Node* link;
	public:
        Node(){
            this->data=NULL;
            this->link= nullptr;
        }
		Node(int data){
			this->data=data;
			this->link= nullptr;
		}
        void set_data(int x){
            this->data=x;
        }
		int get_data(){
			return data;
		}
		void set_link(Node* link){
			this->link=link;
		}
		Node* get_link(){
			return link;
		}
};

class LinkedList{
    Node* head; //head of the linked list
    public:
    LinkedList() {
        head = new Node();
    }
    void create_ll(){
        Node current = *head;
        char choice;
        do
        {
            int x;
            cout<<"Enter Data:";
            cin>>x;
            Node* node =  new Node(x);
            current.set_link(node);
            current = *node;
            cout<<"Do you want to add more:";
            cin>>choice;
        } while (choice=='y');
        
    }
    ~LinkedList(){
        delete head;
    }

};
int main(){
    LinkedList obj;
    obj.create_ll();
    return 0;
}
