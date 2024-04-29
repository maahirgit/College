package AccessModifier;

public class pkg2 extends pkg1 {
    void test() {
        System.out.println("x (package-private): " + z);  // Accessing package-private member x
    }

    public static void main(String[] args) {
        pkg2 t = new pkg2();
        t.test();
    }
}