namespace useful_cpp_functions
{
  float get_fractional_part(float f)
  {
    return f - (int) f; 
  }
  
  double get_fractional_part(double d)
  {
    return d - (int) d; 
  }
};
