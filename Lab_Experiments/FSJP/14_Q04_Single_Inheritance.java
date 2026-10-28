// Q4. Single Inheritance
class Person {
 String name; int age;
 Person(String name, int age) { this.name = name; this.age = age; }
}
class Student extends Person {
 String course; int rollNumber;
 Student(String name, int age, String course, int rollNumber) {
  super(name, age); this.course = course; this.rollNumber = rollNumber;
 }
 void display() {
  System.out.println("Name: " + name + "\nAge: " + age +
   "\nCourse: " + course + "\nRoll Number: " + rollNumber);
 }
}
class SingleInheritance {
 public static void main(String[] args) {
  new Student("Pratham", 20, "B.Tech", 101).display();
 }
}
