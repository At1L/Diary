package org.example;

public class Calc {

    private  String num1, num2, operation;
    private String[] numarr1, numarr2;


    public Calc(String number1, String operation, String number2)
    {
        this.num1 = number1;
        this.num2 = number2;
        this.operation = operation;
        numarr1 = number1.split("/");
        numarr2 = number2.split("/");
    }

    public String summmmmmmaaaaaaaa()
    {
//        if (numarr1.length != 1 || numarr2.length != 1)
//        {
//            if (numarr1.length != 1)
//            {
//                if (numarr1[2] == "0")
//                {
//                    return "None";
//                }
//                else
//                {
//                    if (numarr1[0] == "0")
//                    {
//                        if (numarr2.length > 1)
//                        {
//                            return String.valueOf(numarr2[0] + '/' + numarr2[2]);
//                        }
//                        else
//                        {
//                            return String.valueOf(numarr2[0]);
//                        }
//                    }
//                }
//
//            }
//            else if (numarr2.length != 1)
//            {
//                if (numarr2[2] == "0")
//                {
//                    return "None";
//                }
//                else
//                {
//                    if (numarr2[0] == "0")
//                    {
//                        if (numarr1.length > 1)
//                        {
//                            return String.valueOf(numarr1[0] + '/' + numarr1[2]);
//                        }
//                        else
//                        {
//                            return String.valueOf(numarr1[0]);
//                        }
//                    }
//
//                }
//            }
//
//                float res = Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[2]) + Integer.parseInt(numarr1[2])*Integer.parseInt(numarr2[0]);
//               return String.valueOf(res + "/" + Integer.parseInt(numarr1[2]) * Integer.parseInt(numarr2[2]));

     //   }
      //  else
        //{
            float result = (Integer.parseInt(numarr1[0]) + Integer.parseInt(numarr2[0]));
            String buffer = String.valueOf(result);
            return buffer;
       // }
    }
    public String raznoostb()
    {
//        if (numarr1.length != 1 || numarr2.length != 1)
//        {
//            if (numarr1.length != 1)
//            {
//                if (numarr1[2] == "0")
//                {
//                    return "None";
//                }
//                else
//                {
//                    if (numarr1[0] == "0")
//                    {
//                        if (numarr2.length > 1)
//                        {
//                            return String.valueOf(numarr2[0] + '/' + numarr2[2]);
//                        }
//                        else
//                        {
//                            return String.valueOf(numarr2[0]);
//                        }
//                    }
//                }
//
//            }
//            else if (numarr2.length != 1)
//            {
//                if (numarr2[2] == "0")
//                {
//                    return "None";
//                }
//                else
//                {
//                    if (numarr2[0] == "0")
//                    {
//                        if (numarr1.length > 1)
//                        {
//                            return String.valueOf(numarr1[0] + '/' + numarr1[2]);
//                        }
//                        else
//                        {
//                            return String.valueOf(numarr1[0]);
//                        }
//                    }
//
//                }
//            }
//
//                float res = Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[2]) + Integer.parseInt(numarr1[2])*Integer.parseInt(numarr2[0]);
//               return String.valueOf(res + "/" + Integer.parseInt(numarr1[2]) * Integer.parseInt(numarr2[2]));

        //   }
        //  else
        //{
        float result = (Integer.parseInt(numarr1[0]) - Integer.parseInt(numarr2[0]));
        String buffer = String.valueOf(result);
        return buffer;
        // }
    }

    public String multiplication()
    {
        if (numarr1.length <= 1 && numarr2.length <= 1)
        {
            return String.valueOf((Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[0])));
        }
        else
        {
            if (numarr1.length > 1 && numarr1[1].equals("0")|| numarr2.length > 1 && numarr2[1].equals("0"))
            {
                return "Wrong";
            }
            else
            {
                if (numarr2.length > 1 && numarr1.length > 1)
                {
                    return String.valueOf((Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[0])) + "/" + Integer.parseInt(numarr1[1]) * Integer.parseInt(numarr2[1]));
                }
                else if (numarr2.length <= 1 && numarr1.length > 1)
                {
                    return String.valueOf((Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[0])) + "/" + Integer.parseInt(numarr1[1]));
                }
                else if (numarr2.length > 1 && numarr1.length <= 1)
                {
                    return String.valueOf((Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[0])) + "/" + Integer.parseInt(numarr2[1]));
                }
            }
        }
        return "1";
    }

    public String division()
    {
        if (numarr1.length <= 1 && numarr2.length <= 1)
        {
            return String.valueOf((Integer.parseInt(numarr1[0]) / Integer.parseInt(numarr2[0])));
        }
        else
        {
            if (numarr1.length > 1 && numarr1[1].equals("0")|| numarr2.length > 1 && numarr2[1].equals("0"))
            {
                return "Wrong";
            }
            else
            {
                if (numarr2.length > 1 && numarr1.length > 1)
                {
                    return String.valueOf((Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[1])) + "/" + Integer.parseInt(numarr1[1]) * Integer.parseInt(numarr2[0]));
                }
                else if (numarr2.length <= 1 && numarr1.length > 1)
                {
                    return String.valueOf(Integer.parseInt(numarr1[0]) + "/" + Integer.parseInt(numarr1[1]) * Integer.parseInt(numarr2[0]));
                }
                else if (numarr2.length > 1 && numarr1.length <= 1)
                {
                    return String.valueOf(Integer.parseInt(numarr1[0]) * Integer.parseInt(numarr2[1]) + "/" + Integer.parseInt(numarr2[1]));
                }
            }
        }
        return "1";
    }
}
