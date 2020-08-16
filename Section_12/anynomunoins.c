#include <stdio.h>

struct owner
{
    char socsecuirity[12];
};
struct leasecompany
{
    char name[40];
    char headquarters[40];
};

struct car_data
{
    char make[15];
    int status;
    union
    {
        struct owner owncar;
        struct leasecompany leascar;
    };
};
