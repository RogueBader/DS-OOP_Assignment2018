#ifndef list
#define list

struct node
{
	int val_Re;
	int val_Im;
	node * next;
};

class complex_list {
private:
	node * head;
public:
	complex_list();

	void insert_at_start(int, int);

	void del_at_start();

	void insert_at_end(int, int);

	void del_end();


	void insert_at_sp(int, int, int);

	void del_sp(int);

	void traverse();

};

#endif 
