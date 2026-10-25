class Calculator {
Calculator() {
System.out.println("Welcome to Calculator");
}
Calculator(int a, int b) {
System.out.println("Sum of " + a + " and " + b + " is: " + (a + b));
}
void add() {
System.out.println("Sum of default numbers 5 and 10 is: " + (5 + 10));
}
void add(int a, int b) {
System.out.println("Sum of " + a + " and " + b + " is: " + (a + b));
}
void add(float a, float b, float c) {
System.out.println("Sum of " + a + ", " + b + " and " + c + " is: " + (a + b + c));
}
public static void main(String[] args) {
Calculator c1 = new Calculator();
Calculator c2 = new Calculator(15, 25);
c1.add();
c1.add(20, 30);
c1.add(12.5f, 15.5f, 10.0f);
}
}
