import org.example.Calc;
import org.junit.jupiter.api.Test;

import static org.junit.jupiter.api.Assertions.assertEquals;

public class calc_test
{
    @Test
    void TestPlus()
    {
        Calc b = new Calc("1", "+", "1");
        b.summmmmmmaaaaaaaa();
        assertEquals("2.0", b.summmmmmmaaaaaaaa());
    }
    @Test
    void TestMinus()
    {
        Calc b = new Calc("1", "-", "1");
        b.raznoostb();
        assertEquals("0.0", b.raznoostb());
    }
    @Test
    void Testmultiplication1()
    {
        Calc b = new Calc("3", "-", "7");
        b.multiplication();
        assertEquals("21", b.multiplication());
    }
    @Test
    void Testmultiplication2()
    {
        Calc b = new Calc("1/3", "-", "2/5");
        b.multiplication();
        assertEquals("2/15", b.multiplication());
    }
    @Test
    void Testmultiplication3()
    {
        Calc b = new Calc("3", "-", "2/5");
        b.multiplication();
        assertEquals("6/5", b.multiplication());
    }
    @Test
    void Testdiv()
    {
        Calc b = new Calc("1/2", "-", "1/2");
        b.division();
        assertEquals("1", b.division());
    }
}
