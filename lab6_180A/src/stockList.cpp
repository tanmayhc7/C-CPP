#include "stockList.h"
stockNode* stockList::addStockNode(stockNode *head,string s,int p,int no)
{
	if(head->getNext()==NULL)
	{
		stockNode *temp=new stockNode();
		temp->setParameters(s,p,no);
		head->setNext(temp);
		return head;
	}
	else
	{
		stockNode *temp=new stockNode();
		temp->setParameters(s,p,no);
		temp->setNext(head->getNext());
		head->getNext()->setPrev(temp);
		head->setNext(temp);
		return head;
	}
}

void stockList::displayAllStocks(stockNode *head)
{
	stockNode *temp=head;
	while(temp)
	{
		cout<<"Stock Name: "<<temp->getName()<<endl;
		cout<<"Stock Price: $"<<temp->getPrice()<<endl;
		cout<<"No. of stocks: "<<temp->getNo()<<endl;
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
	temp->setParameters(s,p,no);
	temp->setNext(head->getNext());
	head->setNext(temp);
	return head;
}

stockNode* stockList::deleteStock(stockNode *head,string s)
{
	stockNode *cur=head;
	stockNode *pre=NULL;
	string st;
	while(cur)
	{
		st=cur->getName();
		if(!st.compare(s) && cur==head)
		{
			head->setNext(cur->getNext());
			delete cur;
			return head;
		}
		if(!st.compare(s) && cur!=head)
		{
			pre->setNext(cur->getNext());
			delete cur;
			return head;
		}
		pre=cur;
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

void stockList::displayReverse(stockNode* temp)
{
	if(!temp) return;
	displayReverse(temp->getNext());
	cout<<"Stock Name: "<<temp->getName()<<endl;
	cout<<"Stock Price: $"<<temp->getPrice()<<endl;
	cout<<"No. of stocks: "<<temp->getNo()<<endl;
	cout<<"---------------"<<endl;
}
