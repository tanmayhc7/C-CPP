#include "stockList.h"
stockNode* stockList::addStockNode(stockNode *head,string s,int p,int no)
{
	stockNode *temp=new stockNode();
	temp->s.setParameters(s,p,no);
	temp->setNext(head->getNext());
	head->setNext(temp);
	return head;
}

void stockList:: displayAllStocks(stockNode *head)
{
	stockNode *temp=head;
	while(temp)
	{
		cout<<"Stock Name: "<<temp->s.getName()<<endl;
		cout<<"Stock Price: $"<<temp->s.getPrice()<<endl;
		cout<<"No. of stocks: "<<temp->s.getNo()<<endl;
		cout<<"---------"<<endl;
		temp=temp->getNext();
	}
}

stockNode* stockList::addStockNode_user(stockNode *head)
{
	stockNode *temp=new stockNode();
	int p,no;
	string s;
	cout<<"Enter Stock name:"<<endl;
	cin>>s;
	cout<<"Enter Stock Price:"<<endl;
	cin>>p;
	cout<<"Enter # of Stocks:"<<endl;
	cin>>no;
	temp->s.setParameters(s,p,no);
	temp->setNext(head->getNext());
	head->setNext(temp);
	return head;
}

stockNode* stockList::deleteStock(stockNode *head,string s)
{
	stockNode *cur=head;
	stockNode *prev=NULL;
	string st;
	while(cur)
	{
		st=cur->s.getName();
		if(!st.compare(s) && cur==head)
		{
			head->setNext(cur->getNext());
			delete cur;
			return head;
		}
		if(!st.compare(s) && cur!=head)
		{
			prev->setNext(cur->getNext());
			delete cur;
			return head;
		}
		prev=cur;
		cur=cur->getNext();
	}
	cout<<"Wrong string Entered"<<endl;
	return head;
}

stockNode* stockList::findMid(stockNode *head)
{
	stockNode *slow,*fast=head;
	while(fast && fast->getNext() && slow)
	{
		slow=slow->getNext();
		fast=fast->getNext()->getNext();
	}
	return slow;
}

void stockList::displayStock(stockNode* temp)
{
	cout<<"Stock Name: "<<temp->s.getName()<<endl;
	cout<<"Stock Price: $"<<temp->s.getPrice()<<endl;
	cout<<"No. of stocks: "<<temp->s.getNo()<<endl;
	cout<<"---------"<<endl;
}
