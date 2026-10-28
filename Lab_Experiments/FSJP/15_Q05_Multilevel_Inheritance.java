// Q5. Multilevel Inheritance
class Person {
 String name; int age;
 Person(String name, int age) { this.name = name; this.age = age; }
}
class Student extends Person {
 String course; int rollNumber;
 Student(String name, int age, String course, int rollNumber) {
  super(name, age); this.course = course; this.rollNumber = rollNumber;
 }
}
class GraduateStudent extends Student {
 int graduationYear;
 GraduateStudent(String name, int age, String course, int rollNumber, int year) {
  super(name, age, course, rollNumber); graduationYear = year;
 }
 void display() {
  System.out.println("Name: " + name + "\nAge: " + age + "\nCourse: " + course +
   "\nRoll Number: " + rollNumber + "\nGraduation Year: " + graduationYear);
 }
}
class MultilevelInheritance {
 public static void main(String[] args) {
  new GraduateStudent("Pratham", 22, "B.Tech", 101, 2026).display();
 }
}
