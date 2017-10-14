#pragma once

/* THIS FILE IS AUTOGENERATED BY gen/gen_component_impl.py; DO NOT HAND-MODIFY */

#include "component_manager.h"

struct switch_component_manager : component_manager {
    struct instance_data {
        c_entity *entity;
        bool *enabled;
    } instance_pool;

    void create_component_instance_data(unsigned count) override;
    void destroy_instance(instance i) override;
    void entity(c_entity e) override;

    instance_data get_instance_data(c_entity e) {
        instance_data d;
        auto inst = lookup(e);

        d.entity = instance_pool.entity + inst.index;
        d.enabled = instance_pool.enabled + inst.index;

        return d;
    }
};
