%{
 #include <shogun/multiclass/tree/TreeMachine.h>
 #include <shogun/multiclass/tree/RelaxedTreeNodeData.h>
 #include <shogun/multiclass/tree/ConditionalProbabilityTreeNodeData.h>
 #include <shogun/multiclass/tree/ConditionalProbabilityTree.h>
 #include <shogun/multiclass/tree/BalancedConditionalProbabilityTree.h>
 #include <shogun/multiclass/tree/RandomConditionalProbabilityTree.h>
 #include <shogun/multiclass/tree/RelaxedTree.h>
 #include <shogun/multiclass/tree/RelaxedTreeUtil.h>
 #include <shogun/multiclass/tree/TreeMachineNode.h>
 #include <shogun/multiclass/tree/VwConditionalProbabilityTree.h>

 #include <shogun/multiclass/RejectionStrategy.h>
 #include <shogun/multiclass/MulticlassStrategy.h>
 #include <shogun/multiclass/MulticlassOneVsRestStrategy.h>
 #include <shogun/multiclass/MulticlassOneVsOneStrategy.h>
 #include <shogun/machine/BaseMulticlassMachine.h>
 #include <shogun/machine/MulticlassMachine.h>
 #include <shogun/machine/NativeMulticlassMachine.h>
 #include <shogun/machine/LinearMulticlassMachine.h>
 #include <shogun/machine/KernelMulticlassMachine.h>
 #include <shogun/multiclass/MulticlassSVM.h>
 #include <shogun/classifier/mkl/MKLMulticlass.h>

 #include <shogun/multiclass/ecoc/ECOCStrategy.h>
 #include <shogun/multiclass/ecoc/ECOCEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCOVOEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCRandomSparseEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCRandomDenseEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCDiscriminantEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCForestEncoder.h>
 #include <shogun/multiclass/ecoc/ECOCDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCOVREncoder.h>
 #include <shogun/multiclass/ecoc/ECOCSimpleDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCHDDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCIHDDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCEDDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCAEDDecoder.h>
 #include <shogun/multiclass/ecoc/ECOCLLBDecoder.h>

 #include <shogun/multiclass/MulticlassLibLinear.h>
 #include <shogun/multiclass/MulticlassOCAS.h>
 #include <shogun/multiclass/MulticlassSVM.h>
 #include <shogun/multiclass/LaRank.h>
 #include <shogun/multiclass/MulticlassLibSVM.h>
 #include <shogun/multiclass/GMNPSVM.h>
 #include <shogun/multiclass/ScatterSVM.h>
 #include <shogun/multiclass/KNN.h>
 #include <shogun/multiclass/ConjugateIndex.h>
 #include <shogun/multiclass/GaussianNaiveBayes.h>
 #include <shogun/multiclass/QDA.h>
 #include <shogun/multiclass/ShareBoost.h>
%}
