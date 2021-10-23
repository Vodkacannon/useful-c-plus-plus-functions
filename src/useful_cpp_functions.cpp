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

  void im_gonna_getch_ya()
  {
      getch();
  }
  void pause_console(const std::string& pause_message)
  {
      std::cout << pause_message;
      im_gonna_getch_ya();
  }
};
