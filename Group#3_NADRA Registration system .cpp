#include<iostream>
using namespace std;

struct node{
	 int id;
	 string name;
	 string address;
	long long int phno;
	
	 node *next;
	
};
class myclass{
	private:
		static int Id;
		node *head,*tail,*temp;
	public:
		myclass(){
			head=NULL;
			tail=NULL;
			Id++;
		}
		bool isemty()
		{
			if (head==NULL && tail==NULL)
			return true;
			else
			return false;
		}
		
		void Enter_data()
		{
			int value;
			string nam,addr;
			long long int phone;
			cout<<"ENter the phone no.";
			cin>>phone;
			cout<<"ENter the name :";
			cin>>nam;
			cout<<"Enter the ID  :";
			cin>>value;
			cout<<"ENter the Address :";
			cin>>addr;
			node *ptr=new node();
			ptr->id=value;
			ptr->name=nam;
			ptr->address=addr;
			ptr->phno=phone;
			ptr->next=NULL;
			
			if (head==NULL)
			{
				head=ptr;
				tail=ptr;
			}
			else
			{
				tail->next=ptr;
				tail=ptr;
			}
			
		}
		
//  (------------deleting operation is performed-----------------)
void Delete() {
 
   temp = head;
   if (head == NULL) {
      cout<<"Underflow"<<endl;
      return;
   }
   else
   if (temp->next != NULL) {
      temp = temp->next;
      cout<<"Element deleted from queue is : "<<head->id<<endl;
     
	  delete(head);
      head = temp;
   } 
   
   
   else {
      cout<<"Element deleted from queue is : "<<head->id<<endl;
      delete(head);
      head = NULL;
      tail = NULL;
   }
}


//(--------------TO dispay the person info----------------------)
void Display() {
   temp = head;
   if ((head == NULL) && (tail == NULL)) {
      cout<<"Queue is empty"<<endl;
      return;
   }
   cout<<"\t\t(-----Persons informetion-----)"<<endl;
   while (temp != NULL) {

   	
   	cout<<"------DIPLAYperson data --------";
		cout<<"The uninue NO. is:"<<Id<<endl;   	
      cout<<"\n\nData of the person"<<temp->id<<" "<<endl;
      cout<<"\nName of The Person:"<<temp->name<<" "<<endl;
      cout<<"\nName of The Person:"<<temp->address<<" "<<endl;

      temp = temp->next;
   }
   cout<<endl;

}

};

int myclass::Id=0;


int main() {

	myclass obj;
   int ch;


   cout<<"(------Remember these keys-------)"<<endl;
   cout<<"1) Insert element to queue"<<endl;
   cout<<"2) Delete element from queue"<<endl;
   cout<<"3) Display all the elements of queue"<<endl;
   cout<<"4) Exit"<<endl;
      do {
      cout<<"Enter your choice : "<<endl;
      cin>>ch;
      
      system("cls");

      switch (ch) {

         case 1: obj.Enter_data();
         break;
         case 2: obj.Delete();
         break;
         case 3: obj.Display();
         break;
         case 4: cout<<"Exit"<<endl;
         break;
         default: cout<<"Invalid choice"<<endl;
      
	  
	  }
   } 
   
   
   while(ch!=4);
   
   
   return 0;
}
