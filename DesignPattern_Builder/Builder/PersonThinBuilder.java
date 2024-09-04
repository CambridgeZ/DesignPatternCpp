package Builder;
import java.awt.Graphics;

public class PersonThinBuilder extends PersonBuilder {
    public PersonThinBuilder(Graphics g) {
        super(g);
    }

    @Override
    public void buildHead() {
        g.drawOval(150, 120, 30, 30);
    }

    @Override
    public void buildBody() {
        g.drawRect(160, 150, 10, 50);
    }

    @Override
    public void buildArmLeft() {
        g.drawLine(160, 150, 140, 200);
    }

    @Override
    public void buildArmRight() {
        g.drawLine(170, 150, 190, 200);
    }

    @Override
    public void buildLegLeft() {
        g.drawLine(160, 200, 140, 250);
    }

    @Override
    public void buildLegRight() {
        g.drawLine(170, 200, 190, 250);
    }
}
