/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 3 of the License, or
 * (at your option) any later version.
 *
 * Written (W) 2012 Heiko Strathmann
 */

#ifndef __TESTSTATISTIC_H_
#define __TESTSTATISTIC_H_

#include <shogun/base/SGObject.h>

namespace shogun
{

/** enum for different method to approximate null-distibution */
enum ENullApproximationMethod
{
	BOOTSTRAP, MMD2_SPECTRUM, MMD2_GAMMA, MMD1_GAUSSIAN, HSIC_GAMMA
};

/** @brief Test statistic base class. Provides an interface for statistical
 * tests via three methods: compute_statistic(), compute_p_value() and
 * compute_threshold(). The second computes a p-value for the statistic computed
 * by the first method.
 * The p-value represents the position of the statistic in the null-distribution,
 * i.e. the distribution of the statistic population given the null-hypothesis
 * is true. (1-position = p-value).
 * The third method,  compute_threshold(), computes a threshold for a given
 * test level which is needed to reject the null-hypothesis.
 *
 * Also provides an interface for sampling from the null-distribution.
 * The actual sampling has to be implemented in sub-classes.
 *
 * All statistical tests should inherit from this class.
 *
 * Abstract base class.
 */
class CTestStatistic : public CSGObject
{
	public:
		CTestStatistic();

		virtual ~CTestStatistic();

		/** @return test statistic for the given data/parameters/methods */
		virtual float64_t compute_statistic()=0;

		/** computes a p-value based on current method for approximating the
		 * null-distribution. The p-value is the 1-p quantile of the null-
		 * distribution where the given statistic lies in.
		 * This method should be overridden for different implementations
		 *
		 * @param statistic statistic value to compute the p-value for
		 * @return p-value parameter statistic is the (1-p) percentile of the
		 * null distribution
		 */
		virtual float64_t compute_p_value(float64_t statistic)=0;

		/** computes a threshold based on current method for approximating the
		 * null-distribution. The threshold is the value that a statistic has
		 * to have in ordner to reject the null-hypothesis.
		 * This method should be overridden for different implementations
		 *
		 * @param alpha test level to reject null-hypothesis
		 * @return threshold for statistics to reject null-hypothesis
		 */
		virtual float64_t compute_threshold(float64_t alpha)=0;

		/** merges both sets of samples and computes the test statistic
		 * m_bootstrap_iteration times
		 *
		 * @return vector of all statistics
		 */
		virtual SGVector<float64_t> bootstrap_null()=0;

		/** sets the number of bootstrap iterations for bootstrap_null()
		 *
		 * @param bootstrap_iterations how often bootstrapping shall be done
		 */
		virtual void set_bootstrap_iterations(index_t bootstrap_iterations);

		/** sets the method how to approximate the null-distribution
		 * @param null_approximation_method method to use
		 */
		virtual void set_null_approximation_method(
				ENullApproximationMethod null_approximation_method);

		inline virtual const char* get_name() const=0;

	private:
		void init();

	protected:
		/** number of iterations for bootstrapping null-distributions */
		index_t m_bootstrap_iterations;

		/** Defines how the the null distribution is approximated */
		ENullApproximationMethod m_null_approximation_method;
};

}

#endif /* __TESTSTATISTIC_H_ */
