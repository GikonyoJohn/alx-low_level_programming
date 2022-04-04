 k < (len - 1);  k++)
                {
                        *(col + k) = *(str++);
                }
                *(col + k) = '\0';
                *(f + j) = col;

                if (j < (count - 1))
                {
                        j++;
                }
        }
        *(f + j) = NULL;
        return (f);
}
