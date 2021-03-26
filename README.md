## Task 1

Create a class called Rational for performing arithmetic with fractions. Write a program to test your class.  
Use  integer  variables  to  represent  the  private  data  of  the  class—  the  numerator  and  the denominator.  
Provide  a  constructor  that  enables  an  object  of  this  class  to  be  initialized  when  it’s declared.  
The  constructor  should  contain  default  values  in  case  no  initializers  are  provided  and should store the fraction in reduced form. 
For example, the fraction     would be stored in the object 2/4 as 1 in the numerator and 2 in the denominator. 

Provide public member functions that perform each of the following tasks:


> add — adds two Rational numbers. The result should be stored in reduced form.

> subtract —s ubtracts two Rational numbers. Store the result in reduced form.

> multiply — multiplies two Rational numbers. Store the result in reduced form.

> divide — divides two Rational numbers. The result should be stored in reduced form.

> toRationalString  — Returns  a  string  representation  of  a  Rational  number  in  the  form  a/b, where a is the numerator and b is the denominator.

> toDouble — Returns the Rational number as a double.



## Task 2

Modify the supplied Date class to perform error checking on the initializer values for data members month,  
day  and  year.  Also,  provide  a  member  function ```nextDay```  to  increment  the  day  by  one. 
Write a program that tests function nextDay in a loop that prints the date during each iteration to illustrate that ```nextDay``` works correctly. 

Be sure to test the following cases:

> Incrementing into the next month

> Incrementing into the next year
