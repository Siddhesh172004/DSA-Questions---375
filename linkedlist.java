// Java program to Add an Element
// to the Front of LinkedList

import java.io.*;

class LinkedList {
	
	// head reference
	
	// Node class
	class Node {
        int data;
		Node next;
        
		Node(int d)
		{
            data = d;
			next = null;
		}
	}
	
    Node head=null;
	// Inserting node at the front
	public void insertfront(int data)
	{
		// Allocating and inserting the data in that node
		Node new_node = new Node(data);
		
		// Make the next of the newly allocated node to be
		// the head
		new_node.next = head;
		
		// Now make the head to be the newly allocated node
		head = new_node;
	}
	public void insertend(int data){
        Node new_node=new Node(data);
        Node ptr=head;
        while(ptr.next!=null){
            ptr=ptr.next;
        }

        ptr.next=new_node;
        new_node.next=null;
    }
	// Printing the List
	public void print()
	{
		Node temp = head;
		while (temp != null) {
			System.out.print(temp.data + " ");
			temp = temp.next;
		}
	}

	public static void main(String args[])
	{
		// create a linkedlist
		LinkedList l = new LinkedList();
		
		// insert elements at the front
		l.insertfront(6);
		l.insertfront(5);
		l.insertfront(8);
		l.insertfront(9);
		l.insertend(100);
		l.insertend(110);
		// print the linkedlist
		l.print();
	}
}
