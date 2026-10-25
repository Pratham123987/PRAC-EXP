import java.util.Scanner;
class person {
String name;
int age;
person() {}
person(String name, int age) {
this.name = name;
this.age = age;
}
void displayperson() {
System.out.println("name=" + name);
System.out.println("age=" + age);
}
}
class Student extends person {
String course;
int rollnumber;
Student() {}
Student(String name, int age, String course, int rollnumber) {
super(name, age);
this.course = course;
this.rollnumber = rollnumber;
}
void displayStudent() {
displayperson();
System.out.println("course=" + course);
System.out.println("rollnumber=" + rollnumber);
}
}
class graduatedstudent extends Student {
int graduationyear;
graduatedstudent(int graduationyear, String name, int age, String course, int rollnumber) {
super(name, age, course, rollnumber);
this.graduationyear = graduationyear;
}
void displaygraduatedstudent() {
displayStudent();
System.out.println("graduationyear=" + graduationyear);
}
}
class Teacher extends person {
String subject;
Teacher(String name, int age, String subject) {
super(name, age);
this.subject = subject;
}
void displayTeacher() {
displayperson();
System.out.println("Subject: " + subject);
}
}
class Administrator extends person {
String department;
Administrator(String name, int age, String department) {
super(name, age);
this.department = department;
}
void displayAdministrator() {
displayperson();
System.out.println("Department: " + department);
}
}
public class exp_3 {
public static void main(String[] args) {
try (Scanner sc = new Scanner(System.in)) {
String name, course, subject, department;
int age, rollnumber, graduationyear;
System.out.println("--- Enter Student Details ---");
System.out.print("Enter Name: ");
name = sc.next();
System.out.print("Enter Age: ");
age = sc.nextInt();
System.out.print("Enter Course: ");
course = sc.next();
System.out.print("Enter Roll Number: ");
rollnumber = sc.nextInt();
Student s = new Student(name, age, course, rollnumber);
System.out.println("\n--- Enter Graduate Student Details ---");
System.out.print("Enter Name: ");
name = sc.next();
System.out.print("Enter Age: ");
age = sc.nextInt();
System.out.print("Enter Course: ");
course = sc.next();
System.out.print("Enter Roll Number: ");
rollnumber = sc.nextInt();
System.out.print("Enter Graduation Year: ");
graduationyear = sc.nextInt();
graduatedstudent gs = new graduatedstudent(graduationyear, name, age, course, rollnumber);
System.out.println("\n--- Enter Teacher Details ---");
System.out.print("Enter Name: ");
name = sc.next();
System.out.print("Enter Age: ");
age = sc.nextInt();
System.out.print("Enter Subject: ");
subject = sc.next();
Teacher t = new Teacher(name, age, subject);
System.out.println("\n--- Enter Administrator Details ---");
System.out.print("Enter Name: ");
name = sc.next();
System.out.print("Enter Age: ");
age = sc.nextInt();
System.out.print("Enter Department: ");
department = sc.next();
Administrator a = new Administrator(name, age, department);
System.out.println("\nStudent Details");
s.displayStudent();
System.out.println("\nGraduate Student Details");
gs.displaygraduatedstudent();
System.out.println("\nTeacher Details");
t.displayTeacher();
System.out.println("\nAdministrator Details");
a.displayAdministrator();
}
}
}
