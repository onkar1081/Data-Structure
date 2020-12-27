package stack2;
import java.util.*;
public class Stack2 {
    public static void main(String[] args) {
        Scanner s=new Scanner(System.in);
        System.out.println("Enter size of stack");
        int n=s.nextInt();
        int[] arr=new int[n];
        int top=-1;
        int ch,elem;
        do{
            System.out.println("Enter 1-Push 2-Pop 3-Peek 4-Empty 5-Exit");
            ch=s.nextInt();
            switch(ch){
                case 1:
                    if(top==n-1){
                        System.out.println("Stack is full");                       
                    }else{
                        System.out.println("Enter element to push");
                       while(top<n)
                        {
                             top++;                           
                            arr[top]=s.nextInt();
                            break;
                        } 
                    }
                    break;
                case 2:
                    if(top==-1){
                        System.out.println("Stack is empty");
                    }else{
                        while(top!=-1){
                            System.out.println("Poped element is "+arr[top]);
                            top--;
                            break;
                        }                         
                    }
                    break;
                case 3:
                    if(top==-1)
                    {
                       System.out.println("Stack is empty"); 
                    }else{
                        System.out.println("Peek element is "+arr[top]); 
                    }
                    break;
                case 4:
                    top=-1;
                    System.out.println("Stack is cleared");
                    break;
                case 5:                   
                    break;
                default:
                    System.out.println("Please enter valid choice");
            }
        }while(ch!=5);         
    }   
}
