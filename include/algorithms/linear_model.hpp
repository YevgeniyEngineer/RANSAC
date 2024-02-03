#include "i_ransac.hpp"

namespace algorithms
{
template <typename DataType> class LinearModel : public IRansac<DataType>
{
  public:
    void fit(const std::vector<DataType> &data) override
    {
        // Implement the fitting procedure for the linear model
    }

    double calculateError(const DataType &data_point) const override
    {
        // Implement the error calculation for the given data point
    }

  private:
    Eigen::VectorXd coefficients_;
};
} // namespace algorithms