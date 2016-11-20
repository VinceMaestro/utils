
#include "../includes/lib_ft_display_file.h"

int      ft_aff_content(int fd, int len)
{
   char   buffer_text[len + 1]; 

   read(fd, buffer_text, len);
   buffer_text[len] = '\0';
   ft_putstr(buffer_text);
   if (close(fd) == -1) 
   {   
      ft_print_error("close file () failed \n");
      return (-1);
   }   
   return (0);
}

