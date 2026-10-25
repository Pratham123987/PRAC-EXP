import java.util.Scanner;
class Student {
  String name;
  int rollNumber;
  float marks;
  public void inputDetails(Scanner scanner) {
     System.out.print("Enter Name: ");
     this.name = scanner.nextLine();
     System.out.print("Enter Roll Number: ");
     this.rollNumber = scanner.nextInt();
        System.out.print("Enter Marks: ");
        this.marks = scanner.nextFloat();
        scanner.nextLine(); // Clears the buffer so the next string input works
    }
    public void displayDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Roll Number: " + this.rollNumber);
        System.out.println("Marks: " + this.marks);
    }
}
public class Exp1_43 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter Details for Student 1:");
        Student student1 = new Student();
        student1.inputDetails(scanner);
        System.out.println("Enter Details for Student 2:");
        Student student2 = new Student();
        student2.inputDetails(scanner);
        System.out.println("Student Information:");
        student1.displayDetails();
        student2.displayDetails();
         scanner.close();
    }
}
