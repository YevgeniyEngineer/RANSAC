#include <Eigen/Dense>

#include <algorithm>
#include <cmath>
#include <cstdint>
#include <limits>
#include <random>
#include <vector>


namespace algorithms
{
template <typename DataType> class IRansac
{
  public:
    virtual ~IRansac() = default;

    virtual void fit(const std::vector<DataType> &data) = 0;
    virtual double calculateError(const DataType &data_point) const = 0;
};

} // namespace algorithms