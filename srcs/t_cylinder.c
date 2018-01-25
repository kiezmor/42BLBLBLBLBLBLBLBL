#include <rtv1.h>

t_impact rt_collider_cylinder(t_float3 vector, t_object cylinder)
{
    t_float3 abc;
    t_impact i;

    abc.x = powf(vector.x, 2) + powf(vector.y, 2) + powf(vector.z, 2);
    abc.y = 2.0 * (-cylinder.pos.x * vector.x - cylinder.pos.y * vector.y - cylinder.pos.z * vector.z);
    // abc.y = (powf(cylinder.pos.x, 2) + powf(cylinder.pos.y, 2) - powf(cylinder.ray, 2));

    // abc.x = powf(powf(vector.x, 2) + powf(vector.y, 2) + powf(vector.z, 2), 2);
    // abc.y = 2.0 * (-cylinder.pos.x * vector.x - cylinder.pos.y * vector.y);
    abc.z = powf(cylinder.pos.z, 2) - powf(cylinder.ray, 2);
    rt_collider_delta(abc, &i);
    i.color = cylinder.color;
    return (i);
}
