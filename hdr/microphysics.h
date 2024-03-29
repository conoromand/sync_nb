struct _input load_inputfile();

struct _input{
  double Bp;
  double Prot0;
  double Mej;
  double tmin;
  double tmax;
  double fac_dt;
  double epsB;
  double epse;
  double gam_b;
  double gam_max;
  double p1;
  double p2;
  int Nbin_e;
  int output_file_num;
};

void calc_microphysics(double epse, double gam_b, double gam_max,double p1, double p2, int Nbin_e, int output_file_num);
int get_hydro_tstep();
void load_hydro_data(int t_step, double *t, double *dt, double *vej, double *rej, double *vnb, double *rnb, double *Bnb, double *Lpsr);
double Ntot(double *dgam, double *dN_dgam, int Nbin_e);
void initialize_e_dis(double *gam, double *dgam, double *dN_dgam, double *dN_dgam_dt, double *dgam_dt, double *tad, double *tsyn, double gam_max, int Nbin_e);
double dNe_dEe_dt_inj(double gam, double Lpsr, double epse, double gam_b, double gam_max, double p1, double p2, int Nbin_e);
void injection(double *gam, double *dgam, double *dN_dgam_dt, double Lpsr, double dt, double *N_inj_tot, double epse, double gam_b, double gam_max, double p1, double p2, int Nbin_e);
double dgam_dt_ad(double gam, double t);
double dgam_dt_syn(double gam, double B);
void cooling(double t, double B, double *dgam_dt, double *gam, double *tad, double *tsyn, int Nbin_e);
void time_evolution(double dt, double *gam, double *dgam, double *dN_dgam, double *dN_dgam_dt, double *dgam_dt, int Nbin_e);

