#ifndef RTW_HEADER_FlyByWire_h_
#define RTW_HEADER_FlyByWire_h_
#include <cmath>
#include <cstring>
#ifndef FlyByWire_COMMON_INCLUDES_
# define FlyByWire_COMMON_INCLUDES_
#include "rtwtypes.h"
#endif

#include "FlyByWire_types.h"

typedef struct {
  real_T in_flight;
  real_T flare_Theta_c_deg;
  real_T flare_Theta_c_rate_deg_s;
} BlockIO_FlyByWire_T;

typedef struct {
  real_T Delay_DSTATE;
  real_T Delay_DSTATE_k;
  real_T Delay_DSTATE_kg;
  real_T Delay1_DSTATE;
  real_T Delay_DSTATE_ke;
  real_T Delay_DSTATE_o;
  real_T Delay_DSTATE_a;
  real_T Delay_DSTATE_e;
  real_T Delay_DSTATE_b;
  real_T Delay_DSTATE_c;
  real_T Delay_DSTATE_kt;
  real_T Delay_DSTATE_bh;
  real_T Delay_DSTATE_am;
  real_T Delay_DSTATE_p;
  real_T Delay1_DSTATE_n;
  real_T Delay_DSTATE_el;
  real_T Delay_DSTATE_f;
  real_T Delay_DSTATE_m;
  real_T Delay_DSTATE_i;
  real_T Delay_DSTATE_g;
  real_T Delay_DSTATE_pp;
  real_T Delay1_DSTATE_b;
  real_T Delay_DSTATE_f0;
  real_T Delay_DSTATE_h;
  real_T Delay_DSTATE_cb;
  real_T Delay_DSTATE_h2;
  real_T Delay1_DSTATE_p;
  real_T Delay_DSTATE_l;
  real_T Delay1_DSTATE_c;
  real_T Delay_DSTATE_ei;
  real_T Delay_DSTATE_m4;
  real_T Delay_DSTATE_kq;
  real_T Delay1_DSTATE_i;
  real_T Delay_DSTATE_fg;
  real_T Delay1_DSTATE_g;
  real_T Delay_DSTATE_gt;
  real_T Delay_DSTATE_pv;
  real_T Delay_DSTATE_fz;
  real_T Delay_DSTATE_n;
  real_T Delay_DSTATE_fv;
  real_T Delay_DSTATE_p3;
  real_T on_ground_time;
  uint8_T icLoad;
  uint8_T icLoad_e;
  uint8_T icLoad_b;
  uint8_T icLoad_m;
  uint8_T icLoad_i;
  uint8_T icLoad_c;
  uint8_T is_active_c5_FlyByWire;
  uint8_T is_c5_FlyByWire;
  uint8_T is_active_c6_FlyByWire;
  uint8_T is_c6_FlyByWire;
  uint8_T is_active_c7_FlyByWire;
  uint8_T is_c7_FlyByWire;
  uint8_T is_active_c8_FlyByWire;
  uint8_T is_c8_FlyByWire;
  uint8_T is_active_c3_FlyByWire;
  uint8_T is_c3_FlyByWire;
  uint8_T is_active_c9_FlyByWire;
  uint8_T is_c9_FlyByWire;
  uint8_T is_active_c2_FlyByWire;
  uint8_T is_c2_FlyByWire;
  uint8_T is_active_c1_FlyByWire;
  uint8_T is_c1_FlyByWire;
} D_Work_FlyByWire_T;

typedef struct {
  fbw_input in;
} ExternalInputs_FlyByWire_T;

typedef struct {
  fbw_output out;
} ExternalOutputs_FlyByWire_T;

struct Parameters_FlyByWire_T_ {
  fbw_output fbw_output_MATLABStruct;
  real_T ScheduledGain_BreakpointsForDimension1[4];
  real_T LagFilter_C1;
  real_T LagFilter_C1_i;
  real_T LagFilter_C1_l;
  real_T LagFilter_C1_d;
  real_T WashoutFilter_C1;
  real_T LagFilter_C1_c;
  real_T LagFilter1_C1;
  real_T DiscreteDerivativeVariableTs1_Gain;
  real_T DiscreteDerivativeVariableTs_Gain;
  real_T DiscreteDerivativeVariableTs_Gain_c;
  real_T DiscreteDerivativeVariableTs_Gain_b;
  real_T DiscreteTimeIntegratorVariableTs_Gain;
  real_T DiscreteTimeIntegratorVariableTs_Gain_k;
  real_T DiscreteTimeIntegratorVariableTs_Gain_g;
  real_T DiscreteTimeIntegratorVariableTs_Gain_d;
  real_T DiscreteTimeIntegratorVariableTs1_Gain;
  real_T DiscreteTimeIntegratorVariableTs1_Gain_e;
  real_T RateLimiterVariableTs_InitialCondition;
  real_T RateLimiterVariableTs1_InitialCondition;
  real_T RateLimiterDynamicVariableTs_InitialCondition;
  real_T RateLimiterVariableTs1_InitialCondition_h;
  real_T RateLimiterVariableTs_InitialCondition_c;
  real_T DiscreteDerivativeVariableTs1_InitialCondition;
  real_T DiscreteDerivativeVariableTs_InitialCondition;
  real_T RateLimiterVariableTs_InitialCondition_n;
  real_T DiscreteDerivativeVariableTs_InitialCondition_d;
  real_T DiscreteDerivativeVariableTs_InitialCondition_k;
  real_T RateLimiterDynamicVariableTs_InitialCondition_i;
  real_T RateLimiterVariableTs_InitialCondition_f;
  real_T RateLimiterVariableTs2_InitialCondition;
  real_T RateLimiterVariableTs_InitialCondition_fc;
  real_T RateLimiterVariableTs_InitialCondition_p;
  real_T RateLimiterVariableTs1_InitialCondition_f;
  real_T RateLimiterDynamicVariableTs_InitialCondition_i4;
  real_T RateLimitereta_InitialCondition;
  real_T RateLimiterxi_InitialCondition;
  real_T RateLimiterzeta_InitialCondition;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit_b;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit_g;
  real_T DiscreteTimeIntegratorVariableTs_LowerLimit_k;
  real_T DiscreteTimeIntegratorVariableTs1_LowerLimit;
  real_T DiscreteTimeIntegratorVariableTs1_LowerLimit_o;
  real_T ScheduledGain_Table[4];
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit;
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit_c;
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit_j;
  real_T DiscreteTimeIntegratorVariableTs_UpperLimit_d;
  real_T DiscreteTimeIntegratorVariableTs1_UpperLimit;
  real_T DiscreteTimeIntegratorVariableTs1_UpperLimit_e;
  real_T CompareToConstant_const;
  real_T RateLimiterVariableTs_lo;
  real_T RateLimiterVariableTs1_lo;
  real_T RateLimiterVariableTs1_lo_h;
  real_T RateLimiterVariableTs_lo_f;
  real_T RateLimiterVariableTs_lo_d;
  real_T RateLimiterVariableTs_lo_fs;
  real_T RateLimiterVariableTs2_lo;
  real_T RateLimiterVariableTs_lo_p;
  real_T RateLimiterVariableTs_lo_fw;
  real_T RateLimiterVariableTs1_lo_hd;
  real_T RateLimitereta_lo;
  real_T RateLimiterxi_lo;
  real_T RateLimiterzeta_lo;
  real_T RateLimiterVariableTs_up;
  real_T RateLimiterVariableTs1_up;
  real_T RateLimiterVariableTs1_up_k;
  real_T RateLimiterVariableTs_up_f;
  real_T RateLimiterVariableTs_up_d;
  real_T RateLimiterVariableTs_up_k;
  real_T RateLimiterVariableTs2_up;
  real_T RateLimiterVariableTs_up_m;
  real_T RateLimiterVariableTs_up_dl;
  real_T RateLimiterVariableTs1_up_p;
  real_T RateLimitereta_up;
  real_T RateLimiterxi_up;
  real_T RateLimiterzeta_up;
  boolean_T CompareToConstant_const_h;
  real_T Constant_Value;
  real_T Theta_max3_Value;
  real_T Gain3_Gain;
  real_T Saturation2_UpperSat;
  real_T Saturation2_LowerSat;
  real_T Constant_Value_m;
  real_T Gain_Gain;
  real_T Saturation_UpperSat;
  real_T Saturation_LowerSat;
  real_T Gain1_Gain;
  real_T Switch_Threshold;
  real_T Theta_max1_Value;
  real_T Gain2_Gain;
  real_T Saturation1_UpperSat;
  real_T Saturation1_LowerSat;
  real_T Loaddemand_tableData[3];
  real_T Loaddemand_bp01Data[3];
  real_T Gain4_Gain;
  real_T Gain2_Gain_n;
  real_T Switch1_Threshold;
  real_T Constant2_Value;
  real_T Delay_InitialCondition;
  real_T GainTheta_Gain;
  real_T GainPhi_Gain;
  real_T Gain_Gain_n;
  real_T Gainqk_Gain;
  real_T Gain_Gain_l;
  real_T Gain_Gain_a;
  real_T Gainpk_Gain;
  real_T Gain_Gain_e;
  real_T Gainqk1_Gain;
  real_T Gain_Gain_aw;
  real_T Gain_Gain_nm;
  real_T Gainpk1_Gain;
  real_T Gainpk4_Gain;
  real_T Gainpk2_Gain;
  real_T Gainpk5_Gain;
  real_T Gainpk6_Gain;
  real_T Gainpk3_Gain;
  real_T Gain_Gain_i;
  real_T Constant_Value_g;
  real_T Saturation_UpperSat_e;
  real_T Saturation_LowerSat_e;
  real_T Gain1_Gain_h;
  real_T Saturation1_UpperSat_g;
  real_T Saturation1_LowerSat_j;
  real_T Gain2_Gain_a;
  real_T Saturation2_UpperSat_b;
  real_T Saturation2_LowerSat_g;
  real_T Gaineta_Gain;
  real_T Gainxi_Gain;
  real_T Gainxi1_Gain;
  real_T Gain_Gain_d;
  real_T Saturation_UpperSat_er;
  real_T Saturation_LowerSat_a;
  real_T Delay_InitialCondition_d;
  real_T Constant_Value_h;
  real_T Delay1_InitialCondition;
  real_T Constant1_Value;
  real_T Constant_Value_j;
  real_T Saturation1_UpperSat_f;
  real_T Saturation1_LowerSat_p;
  real_T Gain1_Gain_p;
  real_T Saturation_UpperSat_d;
  real_T Saturation_LowerSat_p;
  real_T Gain1_Gain_b;
  real_T Switch1_Threshold_k;
  real_T Vmms_Value;
  real_T Saturation3_UpperSat;
  real_T Saturation3_LowerSat;
  real_T Gain5_Gain;
  real_T Bias_Bias;
  real_T Gain1_Gain_j;
  real_T Gain_Gain_dc;
  real_T PLUT_tableData[2];
  real_T PLUT_bp01Data[2];
  real_T Gain3_Gain_l;
  real_T DLUT_tableData[2];
  real_T DLUT_bp01Data[2];
  real_T Saturation_UpperSat_j;
  real_T Saturation_LowerSat_c;
  real_T PitchRateDemand_tableData[3];
  real_T PitchRateDemand_bp01Data[3];
  real_T Gain3_Gain_p;
  real_T Gain_Gain_h;
  real_T Gain1_Gain_i;
  real_T Saturation_UpperSat_jo;
  real_T Saturation_LowerSat_f;
  real_T Gain1_Gain_a;
  real_T Gain5_Gain_m;
  real_T Delay_InitialCondition_g;
  real_T Constant_Value_l;
  real_T Delay1_InitialCondition_e;
  real_T Gain4_Gain_g;
  real_T Gain6_Gain;
  real_T Switch_Threshold_d;
  real_T Saturation_UpperSat_k;
  real_T Saturation_LowerSat_eg;
  real_T Constant_Value_hk;
  real_T Saturation_UpperSat_b;
  real_T Saturation_LowerSat_i;
  real_T Constant_Value_i;
  real_T Gain_Gain_ip;
  real_T Gain_Gain_c;
  real_T uDLookupTable_tableData[4];
  real_T uDLookupTable_bp01Data[4];
  real_T Gain1_Gain_jh;
  real_T Saturation_UpperSat_p;
  real_T Saturation_LowerSat_h;
  real_T Delay_InitialCondition_k;
  real_T Constant_Value_p;
  real_T Delay1_InitialCondition_l;
  real_T Gain1_Gain_m;
  real_T BankAngleProtection_tableData[7];
  real_T BankAngleProtection_bp01Data[7];
  real_T Saturation_UpperSat_n;
  real_T Saturation_LowerSat_o;
  real_T Switch_Threshold_p;
  real_T Gain3_Gain_k;
  real_T Gain2_Gain_i;
  real_T Gain1_Gain_mg;
  real_T pKp_Gain;
  real_T Constant2_Value_l;
  real_T Gain1_Gain_br;
  real_T Gain1_Gain_c;
  real_T Saturation_UpperSat_l;
  real_T Saturation_LowerSat_l;
  real_T Gain6_Gain_j;
  real_T Gain_Gain_cd;
  real_T Delay_InitialCondition_go;
  real_T Constant_Value_f;
  real_T Delay1_InitialCondition_g;
  real_T Gain_Gain_hk;
  real_T Saturation1_UpperSat_h;
  real_T Saturation1_LowerSat_g;
  real_T Delay_InitialCondition_i;
  real_T Constant_Value_a;
  real_T Delay1_InitialCondition_e2;
  real_T Gain6_Gain_k;
  real_T Saturation2_UpperSat_e;
  real_T Saturation2_LowerSat_gp;
  real_T Saturation_UpperSat_m;
  real_T Saturation_LowerSat_is;
  real_T Constant_Value_c;
  real_T Delay_InitialCondition_e;
  real_T Constant_Value_ia;
  real_T Delay1_InitialCondition_h;
  real_T Delay_InitialCondition_ke;
  real_T Constant_Value_mh;
  real_T Delay1_InitialCondition_lc;
  real_T Gain4_Gain_o;
  real_T Gain7_Gain;
  real_T Saturation_UpperSat_h;
  real_T Saturation_LowerSat_fe;
  real_T Constant_Value_pu;
  real_T Constant3_Value;
  real_T Gain4_Gain_h;
  real_T Constant_Value_b;
  real_T Constant1_Value_a;
  real_T Saturation1_UpperSat_e;
  real_T Saturation1_LowerSat_l;
  real_T Saturation_UpperSat_i;
  real_T Saturation_LowerSat_ps;
  real_T Constant_Value_n;
  real_T Saturation_UpperSat_eq;
  real_T Saturation_LowerSat_n;
  real_T Saturation_UpperSat_d5;
  real_T Saturation_LowerSat_j;
  real_T Constant_Value_o;
  real_T Gaineta_Gain_d;
  real_T Limitereta_UpperSat;
  real_T Limitereta_LowerSat;
  real_T GainiH_Gain;
  real_T LimiteriH_UpperSat;
  real_T LimiteriH_LowerSat;
  real_T Gainxi_Gain_n;
  real_T Limiterxi_UpperSat;
  real_T Limiterxi_LowerSat;
  real_T Gainxi1_Gain_e;
  real_T Limiterxi1_UpperSat;
  real_T Limiterxi1_LowerSat;
  real_T Gainxi2_Gain;
  real_T Limiterxi2_UpperSat;
  real_T Limiterxi2_LowerSat;
  uint8_T ManualSwitch_CurrentSetting;
  uint8_T ManualSwitch1_CurrentSetting;
};

extern const fbw_input FlyByWire_rtZfbw_input;
extern const fbw_output FlyByWire_rtZfbw_output;
class FlyByWireModelClass {
 public:
  ExternalInputs_FlyByWire_T FlyByWire_U;
  ExternalOutputs_FlyByWire_T FlyByWire_Y;
  void initialize();
  void step();
  void terminate();
  FlyByWireModelClass();
  ~FlyByWireModelClass();
 private:
  static Parameters_FlyByWire_T FlyByWire_P;
  BlockIO_FlyByWire_T FlyByWire_B;
  D_Work_FlyByWire_T FlyByWire_DWork;
};

#endif

