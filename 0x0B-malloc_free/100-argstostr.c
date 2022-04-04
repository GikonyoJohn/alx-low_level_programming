<<<<<<< HEAD
 k < (len - 1);  k++)
                {
                        *(col + k) = *(str++);
                }
                *(col + k) = '\0';
                *(f + j) = col;
=======
#include "main.h"
#include <stdlib.h>
>>>>>>> 820cccec0f23d304bf7a0c24e0fde0849df1fba0

                if (j < (count - 1))
                {
                        j++;
                }
        }
        *(f + j) = NULL;
        return (f);
}
