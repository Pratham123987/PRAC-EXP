// Q6. Hierarchical Inheritance
class Person {
 String name; int age;
 Person(String name, int age) { this.name = name; this.age = age; }
 void showPerson() { System.out.println("Name: " + name + ", Age: " + age); }
}
class Student extends Person {
 String course;
 Student(String n, int a, String course) { super(n, a); this.course = course; }
 void display() { showPerson(); System.out.println("Course: " + course); }
}
class Teacher extends Person {
 String subject;
 Teacher(String n, int a, String subject) { super(n, a); this.subject = subject; }
 void display() { showPerson(); System.out.println("Subject: " + subject); }
}
class Administrator extends Person {
 String department;
 Administrator(String n, int a, String dept) { super(n, a); department = dept; }
 void display() { showPerson(); System.out.println("Department: " + department); }
}
class HierarchicalInheritance {
 public static void main(String[] args) {
  new Student("Pratham", 20, "B.Tech").display();
  new Teacher("Ravi", 40, "Java").display();
  new Administrator("Meena", 45, "Admissions").display();
 }
}
