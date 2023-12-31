#pragma once

#include "SimpleTableProcessor.hpp"

namespace SageDocs
{
    class OmegaInvoiceProcessor : public SimpleTableProcessor
    {
    public:
        explicit OmegaInvoiceProcessor() = default;

        std::shared_ptr<Dataset> process(const std::shared_ptr<Dataset> &dataset) override;
    };
}