#include "Contact.hpp"

void Contact::trunc_str()
{
    if (first_name.size() > 9)
      first_name.replace(9, first_name.size() - 9, ".");
    if (last_name.size() > 9)
      last_name.replace(9, last_name.size() - 9, ".");
    if (nickname.size() > 9)
      nickname.replace(9, nickname.size() - 9, ".");
    if (phone_number.size() > 9)
      phone_number.replace(9, phone_number.size() - 9, ".");
    if (darkest_secret.size() > 9)
      darkest_secret.replace(9, darkest_secret.size() - 9, ".");
		
}