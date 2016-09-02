// This file was generated by Rcpp::compileAttributes
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <Rcpp.h>

using namespace Rcpp;

// RunUMISampling
Eigen::SparseMatrix<double> RunUMISampling(Eigen::SparseMatrix<double> data, int sample_val, bool upsample, bool display_progress);
RcppExport SEXP Seurat_RunUMISampling(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< int >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    __result = Rcpp::wrap(RunUMISampling(data, sample_val, upsample, display_progress));
    return __result;
END_RCPP
}
// RunUMISamplingPerCell
Eigen::SparseMatrix<double> RunUMISamplingPerCell(Eigen::SparseMatrix<double> data, NumericVector sample_val, bool upsample, bool display_progress);
RcppExport SEXP Seurat_RunUMISamplingPerCell(SEXP dataSEXP, SEXP sample_valSEXP, SEXP upsampleSEXP, SEXP display_progressSEXP) {
BEGIN_RCPP
    Rcpp::RObject __result;
    Rcpp::RNGScope __rngScope;
    Rcpp::traits::input_parameter< Eigen::SparseMatrix<double> >::type data(dataSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type sample_val(sample_valSEXP);
    Rcpp::traits::input_parameter< bool >::type upsample(upsampleSEXP);
    Rcpp::traits::input_parameter< bool >::type display_progress(display_progressSEXP);
    __result = Rcpp::wrap(RunUMISamplingPerCell(data, sample_val, upsample, display_progress));
    return __result;
END_RCPP
}
