package queue1;
import java.util.Scanner;
public class Queue1 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter size of queue");
        int n=s.nextInt();
        int[] arr=new int[n];
        int rear=-1,front=-1;
        int ch;
        do{
            System.out.println("Enter 1-Enqueue 2-Dequeue 3-Peek 4-Empty 5-Exit");
            ch=s.nextInt();
            switch(ch){
                case 1:
                    if(rear==n){
                        System.out.println("Queue is full");                       
                    }else{
                        System.out.println("Enter element");
                       while(rear<n)
                        {
                            if(rear==-1){
                                front++;
                                rear=rear+2;
                                arr[front]=s.nextInt();
                                break;
                            }else{
                                arr[rear]=s.nextInt();
                                rear++;
                                break;                               
                            }
                        } 
                    }
                    break;
                case 2:
                    if(front==rear){
                        front=rear=-1;
                        System.out.println("Queue is empty");
                    }else{
                        while(front!=rear){
                            System.out.println("Dequeued element is "+arr[front]);
                            front++;
                            break;
                        }                         
                    }
                    break;
                case 3:
                    if(front==rear)
                    {
                       System.out.println("Queue is empty"); 
                    }else{
                        System.out.println("Peek element is "+arr[front]); 
                    }
                    break;
                case 4:
                    front=rear=-1;
                    System.out.println("Queue is cleared");
                    break;
                case 5:                   
                    break;
                default:
                    System.out.println("Please enter valid choice");
            }
        }while(ch!=5);       
    }
}
