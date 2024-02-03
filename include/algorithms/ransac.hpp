#include "i_ransac.hpp"

namespace algorithms
{
template <typename ModelType, typename DataType> class Ransac
{
  public:
    Ransac() = default;

    void execute(const std::vector<DataType> &data, std::size_t iterations, double threshold)
    {
        std::size_t best_inliers = 0U;
        ModelType best_model;

        for (std::size_t iteration = 0U; iteration < iterations; ++iteration)
        {
            // Randomly select minimal subset of data for model fitting

            // Fit model to the subset

            // Count inliers within the threshold

            // Update best model if necessary
        }

        // Finalize by fitting the model with all inliers
    }

  private:
    ModelType model_;
};
} // namespace algorithms