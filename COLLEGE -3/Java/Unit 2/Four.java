class Product{
    String Product_name;
    int Product_code;
    String Manufacturer_name;
    Product(String Product_name,int Product_code,String Manufacturer_name){
        this.Product_name = Product_name;
        this.Product_code = Product_code;
        this.Manufacturer_name = Manufacturer_name;
    }
    public String getProduct_name(){
        return Product_name;
    }
    public int getProduct_code(){
        return Product_code;
    }
    public String getManufacturer_name(){
        return Manufacturer_name;
    }
}
class Four{
    public static void main(String args[]){
        // Creating instances of Product
        Product product1 = new Product("Widget A", 001, "XYZ Electronics");
        Product product2 = new Product("Gadget B", 002, "ABC Technologies");

        // Accessing attributes using getters
        System.out.println("Product 1 Details:");
        System.out.println("Name: " + product1.getProduct_name());
        System.out.println("Product Code: " + product1.getProduct_code());
        System.out.println("Manufacturer: " + product1.getManufacturer_name());

        System.out.println();

        System.out.println("Product 2 Details:");
        System.out.println("Name: " + product2.getProduct_name());
        System.out.println("Product Code: " + product2.getProduct_code());
        System.out.println("Manufacturer: " + product2.getManufacturer_name());
    }
}