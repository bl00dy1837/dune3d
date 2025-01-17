#pragma once

#include "core/tool.hpp"

namespace dune3d {

class Entity;
class EntityWorkplane;
class Document;

class ToolCommon : public ToolBase {
protected:
    using ToolBase::ToolBase;

    template <typename T> T &add_entity(const UUID &uu);
    template <typename T> T &add_entity()
    {
        return add_entity<T>(UUID::random());
    }

    template <typename T = Entity> T &get_entity(const UUID &uu);

    template <typename T> T &add_constraint(const UUID &uu);

    template <typename T> T &add_constraint()
    {
        return add_constraint<T>(UUID::random());
    }

    EntityWorkplane *get_workplane();

    Document &get_doc();
};
} // namespace dune3d
