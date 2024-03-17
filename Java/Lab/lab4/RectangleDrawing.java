package Java.Lab.lab4;
public class RectangleDrawing {
    public static void main(String[] args) {
        RectangleDrawing rd = new RectangleDrawing();
        // A Square
        rd.drawRectangle(5);
        System.out.println();
        // A Rectangle
        rd.drawRectangle(6, 4);
        System.out.println();
        // A Parallelogram
        rd.drawRectangle(7, 3, '#');
        System.out.println();
        // A Rectangle
        rd.drawRectangle(4, 6, '@');
    }

    public void drawRectangle(int length) {
        System.out.print("A Square\n");
        for (int i = 1; i <= length; i++) {
            for (int j = 1; j <= length; j++) {
                if(i==length||i==1||j==length||j==1){
                    System.out.print("0 ");
                }
                else{
                    System.out.print("  ");
                }
            }
            System.out.println();
        }
    }

    public void drawRectangle(int length,int width) {
        System.out.print("A Rectangle\n");
        for (int i = 0; i < width; i++) {
            for (int j = 0; j < length; j++) {
                System.out.print("X ");
            }
            System.out.println();
        }
    }

    public void drawRectangle(int length, int width, char ch) {
        if(ch=='#'){
            System.out.print("A Parallelogram\n");
            for (int i = 0; i < width; i++) {
                // Print spaces to create the indentation
                for (int j = 0; j < width - i - 1; j++) {
                    System.out.print("  ");
                }
                // Print the characters for the parallelogram
                for (int j = 0; j < length; j++) {
                    System.out.print(ch + " ");
                }
                System.out.println();
            }
        }else{
            drawRectangle(length,width);
        }
    }
    
    
}
