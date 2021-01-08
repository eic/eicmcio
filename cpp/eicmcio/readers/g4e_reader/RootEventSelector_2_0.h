//////////////////////////////////////////////////////////
// This class has been automatically generated on
// Fri Feb 22 02:19:03 2019 by ROOT version 6.16/00
// And updated later many times manually (he-he)
//////////////////////////////////////////////////////////

#ifndef JLEICGeantSelector_2_0_h
#define JLEICGeantSelector_2_0_h

#include "RootEventSelector_1_0.h"

using std::string;

class JLEICGeantSelector_2_0 : public JLEICGeantSelector_1_0 {
public :
    explicit JLEICGeantSelector_2_0(TTree *tree): JLEICGeantSelector_1_0(tree)
    {}

    // True DIS info
    TTreeReaderValue<double> evt_true_q2       = {fReader, "evt_true_q2"};
    TTreeReaderValue<double> evt_true_x        = {fReader, "evt_true_x"};
    TTreeReaderValue<double> evt_true_y        = {fReader, "evt_true_y"};
    TTreeReaderValue<double> evt_true_w2       = {fReader, "evt_true_w2"};
    TTreeReaderValue<double> evt_true_nu       = {fReader, "evt_true_nu"};
    TTreeReaderValue<double> evt_true_t_hat    = {fReader, "evt_true_t_hat"};
    TTreeReaderValue<char>   evt_has_dis_info  = {fReader, "evt_has_dis_info"};
    TTreeReaderValue<double> evt_weight        = {fReader, "evt_weight"};
};

#endif