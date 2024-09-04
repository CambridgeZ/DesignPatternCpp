import java.awt.Graphics;
import javax.swing.JFrame;

import Builder.PersonDirector;
import Builder.PersonThinBuilder;


class Test extends JFrame{
    public Test () {
        setSize(400, 400);
        setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        setLocationRelativeTo(null);
    }

    public void paint(Graphics g) {
        PersonThinBuilder ptb = new PersonThinBuilder(g);
        PersonDirector pdThin = new PersonDirector(ptb);
        pdThin.createPerson();

    }

    public static void main(String[] args) {
        Test t = new Test();
        t.setVisible(true);
    }
}
