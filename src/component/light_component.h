#pragma once

/* THIS FILE IS AUTOGENERATED BY gen/gen_component_impl.py; DO NOT HAND-MODIFY */

#include "component_manager.h"

struct light_component_manager : component_manager {
    struct instance_data {
        c_entity *entity;
        float *intensity;
        float *requested_intensity;
    } instance_pool;

    void create_component_instance_data(unsigned count) override;
    void destroy_instance(instance i) override;
    void entity(c_entity e) override;

    instance_data get_instance_data(c_entity e) {
        instance_data d;
        auto inst = lookup(e);

        d.entity = instance_pool.entity + inst.index;
        d.intensity = instance_pool.intensity + inst.index;
        d.requested_intensity = instance_pool.requested_intensity + inst.index;

        return d;
    }
};