#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

struct liste{
	int data;
	struct liste *next;
};

struct liste *add_head(struct liste *,int);
struct liste *add_last(struct liste *,int);
struct liste *delete_liste(struct liste *,int);
struct liste *destroy_list(struct liste *);
void print_list(struct liste *);
int count_elements(struct liste *);


int main(){
	struct liste *head;
	head = NULL;
	int secim, key, counter;
	
	while(1){		
		printf("Press Any Key for Continue.. ");
		getch();
		system("CLS");
		
		printf("1 ==> Add Head \n2 ==> Add Last\n");
		printf("3 ==> Print List \n4 ==> Count Elements\n");
		printf("5 ==> Delete liste \n6 ==> Destroy List\n");
		printf("7 ==> Exit\n");
		printf("\nMake Your Choice : "); scanf("%d",&secim);
		
		system("CLS");
		
		switch(secim){
			case 1:
				printf("Please enter liste's data : "); scanf("%d",&key);
				head = add_head(head,key);
				break;
				
			case 2:
				printf("Please enter liste's data : "); scanf("%d",&key);
				head = add_last(head,key);
				break;
			
			case 3:
				if(head == NULL){
					printf("List is empty..\n");
				}	
				else{
					print_list(head);
				}
				break;
			
			case 4:
				counter = count_elements(head);
				printf("There are %d elements in your list\n",counter);
				break;
			
			case 5:
				printf("Please enter liste's data : "); scanf("%d",&key);
				head = delete_liste(head,key);
				break;
			
			case 6:
				head = destroy_list(head);
				break;
			
			case 7:
				printf("Exited !!");
				return 0;
			
			default:
				printf("Wrong choice !! Try Again !!");
				break;
		
		}	
	}
}

struct liste *add_head(struct liste *head,int key){
	if (head == NULL){
		head = (struct liste *) malloc(sizeof(struct liste));
		head->data = key;
		head->next = NULL;
	}
	else{
		struct liste *temp;
		temp = (struct liste *)malloc(sizeof(struct liste));
		temp->data = key;
		temp->next = head;
		head = temp;
	}
	return head;
}

struct liste *add_last(struct liste *head,int key){
	if (head == NULL){
		head = (struct liste *) malloc(sizeof(struct liste));
		head->data = key;
		head->next = NULL;
	}
	else{
		struct liste *temp,*iter;
		temp = (struct liste *)malloc(sizeof(struct liste));
		iter = head;
		
		while(iter->next != NULL)
			iter = iter->next;
		
		temp->data = key;
		iter->next = temp;
		temp->next = NULL;
	}
	return head;
}

void print_list(struct liste *head){
	if(head == NULL)
		return;
	printf("%d\n",head->data);
	print_list(head->next);
}

int count_elements(struct liste *head){
	if(head == NULL)
		return 0;
	
	return 1+count_elements(head->next);
}

struct liste *delete_liste(struct liste *head,int key){
	struct liste *temp = head;

	if(head->data == key){
		head = head->next;
		free(temp);
	}
	else{
		while(temp->next->data != key)
			temp = temp->next;
		
		if(temp->next->data == key){
			struct liste *deleted = temp->next;
			temp->next = deleted->next;
			free(deleted);		
		}

	}
	
	return head;
}

struct liste *destroy_list(struct liste *head){
	if (head == NULL)
		return NULL;
	
	destroy_list(head->next);
	free(head); //
	return head;
}

