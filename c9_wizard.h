#ifndef C9_WIZARD_H
#define C9_WIZARD_H

#include <QWidget>
#include <QWizard>
#include <QtWidgets>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>
#include <QHBoxLayout>
#include <QSpacerItem>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>


class IntroPage;
class FirstPage;
class SecondPage;
class ThirdPage;
class FourthPage;
class FifthPage;
class SixthPage;
class SeventhPage;
class Turb_Init_Page;
class DebugPage;



class C9_Wizard :  public QWizard

{
    Q_OBJECT

//TRY TO GET REFRESH TO WORK ON BACK BUTTON
    enum {Page_Intro, Page_First, Page_Second, Page_Third, Page_Fourth, Page_Fifth, Page_Sixth, Page_Seventh, Page_Debug};


public:
    C9_Wizard(QWidget *parent = nullptr);

    //void Write();

private slots:

    void Write();
    void Init_file_Write();
    //void Refresh();


private:
    IntroPage* intro;
    FirstPage* first;
    SecondPage* second;
    ThirdPage* third;
    FourthPage* fourth;
    FifthPage* fifth;
    SixthPage* sixth;
    SeventhPage* seventh;
    Turb_Init_Page* Turb_Init;
    DebugPage* DEBUG;

    //QSTRINGS


    QString *dom_lim_0_first;
    QString *dom_lim_0_last;

    QString *dom_lim_1_first;
    QString *dom_lim_1_last;
    QString *dom_lim_2_first;
    QString *dom_lim_2_last;

    QString *compgrid_1;
    QString *compgrid_2;
    QString *compgrid_3;

    QString *lowerbound_0;
    QString *upperbound_0;
    QString *lowerbound_1;
    QString *upperbound_1;
    QString *lowerbound_2;
    QString *upperbound_2;

    QString *max_time_;
    QString *max_step_;

    QString *print_interval_;
    QString *mv_frame_interval_;
    QString *CFL_factor_;
    QString *redistribution_interval_ ;
    QString *turn_onoff_redist_int_ ;

    QString *projection_ ;
    QString *advection_order_ ;
    QString *density_and_visc_1 ;
    QString *density_and_visc_2 ;
    QString *gravity_ ;

    QString *add_rigbody_;
    QString *num_rigbodies_;
    QString *type_of_rigbody_;
    QString *center_of_rigbody_1 ;
    QString *center_of_rigbody_2;
    QString *center_of_rigbody_3;
    QString *radius_of_rigbody_1 ;
    QString *radius_of_rigbody_2 ;
    QString *radius_of_rigbody_3 ;
    QString *preset_motion_;
    QString *dynamic_motion_;
    QString *direction_of_motion_1 ;
    QString *direction_of_motion_2 ;
    QString *direction_of_motion_3 ;
    QString *total_mass_;
    QString *init_center_mass_1 ;
    QString *init_center_mass_2 ;
    QString *init_center_mass_3 ;
    QString *init_center_mass_vel_1;
    QString *init_center_mass_vel_2 ;
    QString *init_center_mass_vel_3 ;

    //****************************//

    //C9
    QString *num_canopy_surfaces_ ;
    QString *canopy_surf_type_ ;
    QString *canopy_boundary_;
    QString *height_of_plane_;
    QString *circle_center_1 ;
    QString *circle_center_2 ;
    QString *circle_radius_ ;
    QString *attach_gores_;
    QString *cut_vent_ ;
    QString *attach_strings_ ;
    QString *num_chords_ ;
    QString *init_pos_load_1 ;
    QString *init_pos_load_2 ;
    QString *init_pos_load_3 ;
    QString *install_strings_toRGB_ ;
    QString *body_index_;

    //****************************//

    QString *gpu_solver_;
    QString *fluid_solver_;
    QString *use_porosity_;
    QString *viscous_param_;
    QString *inertial_param_;
    QString *smooth_radius_ ;

    QString *payload_ ;
    QString *sub_step_num_;
    QString *area_density_;

    QString *fab_spring_const_;
    QString *fab_damping_const_ ;
    QString *fab_friction_const_ ;
    QString *fab_point_mass_ ;
    QString *fab_thickness_ ;
    QString *fab_rounding_tol_ ;

    QString *str_spring_const_ ;
    QString *str_damping_const_ ;
    QString *str_friction_const_ ;
    QString *str_point_mass_ ;
    QString *str_thickness_ ;
    QString *str_rounding_tol_;

    QString *lower_type_of_dirichlet_ ;
    QString *velocity_1 ;
    QString *velocity_2 ;
    QString *velocity_3 ;
    QString *pressure_;
    QString *upper_type_of_dirichlet_ ;

    QString *yz_movie_ ;
    QString *xz_movie_;
    QString *xy_movie_ ;
    QString *velocity_vector_ ;
    QString *surface_stress_ ;

    QString *debug_ ;
    QString *debug_string_space1_ ;
    QString *debug_string_space2_ ;
    QString *debug_string_space3_ ;
    QString *debug_string_space4_;
    QString *debug_string_space5_ ;
    QString *debug_string_space6_ ;
    QString *debug_string_space7_ ;
    QString *debug_string_space8_ ;
    QString *debug_string_space9_ ;
    QString *debug_string_space10_;
    QString *debug_string_space11_ ;
    QString *debug_string_space12_ ;
    QString *debug_string_space13_ ;


    QString *sample_line_type_ ;
    QString *sample_line_coord_1 ;
    QString *sample_line_coord_2 ;
    QString *start_step_;
    QString *end_step_ ;

    //CHECKBOX
    QString *center_of_sphere1;
    QString *center_of_sphere2;
    QString *center_of_sphere3;

    QString *radius_of_sphere_1;
    QString *radius_of_sphere_2;
    QString *radius_of_sphere_3;

    QString *center_of_box1;
    QString *center_of_box2;
    QString *center_of_box3;

    QString *edge_of_box1;
    QString *edge_of_box2;
    QString *edge_of_box3;

    QString *human_vtk_directory;
    QString *center_of_human1;
    QString *center_of_human2;
    QString *center_of_human3;
    QString *enlargement_coeff;



    //DIRECTORY
    QString *save_directory;
    QString *init_save_directory;

    //****************************//
    //DGB PARACHUTE TYPE
    QString *complex_connection_DGB;
    QString *canopy_surf_type_DGB;
    QString *canopy_boundary_DGB;
    QString *height_of_plane_DGB;
    QString *circle_center1_DGB;
    QString *circle_center2_DGB;
    QString *circle_radius_DGB;
    QString *attach_gores_DGB;
    QString *cut_vent_DGB;
    QString *radius_of_vent_DGB;
    QString *attach_strings_DGB;
    QString *num_chords_DGB;
    QString *length_of_drape_DGB;
    QString *gap_btn_canopy_and_drape_DGB;
    QString *init_pos_load_1_DGB;
    QString *init_pos_load_2_DGB;
    QString *init_pos_load_3_DGB;
    QString *fix_load_node_DGB;
    QString *install_strings_toRGB_DGB;
    QString *modify_initialization_DGB;
    QString *canopy_rotation_DGB;
    QString *new_load_pos1_DGB;
    QString *new_load_pos2_DGB;
    QString *new_load_pos3_DGB;
    QString *connection_pos1_DGB;
    QString *connection_pos2_DGB;
    QString *connection_pos3_DGB;
    QString *multi_parachute_DGB;
    QString *body_index_DGB;

    //****************************//

    //G11 PARACHUTE TYPE

    QString *canopy_surf_type_G11 ;
    QString *canopy_boundary_G11;
    QString *height_of_plane_G11;
    QString *circle_center_1_G11 ;
    QString *circle_center_2_G11 ;
    QString *circle_radius_G11 ;
    QString *attach_gores_G11;
    QString *cut_vent_G11;
    QString *attach_strings_G11 ;
    QString *num_chords_G11 ;
    QString *init_pos_load_1_G11 ;
    QString *init_pos_load_2_G11 ;
    QString *init_pos_load_3_G11 ;
    QString *install_strings_toRGB_G11 ;
    QString *body_index_G11;

    //****************************//

    //INTRUDER PARACHUTE TYPE

    QString *num_canopy_surfaces_intruder;
    QString *canopy_surf_type_intruder;
    QString *canopy_boundary_intruder;
    QString *height_of_plane_intruder;
    QString *ellipse_center1_intruder;
    QString *ellipse_center2_intruder;
    QString *ellipse_center3_intruder;
    QString *ellipse_radius1_intruder;
    QString *ellipse_radius2_intruder;
    QString *ellipse_xrange1_intruder;
    QString *ellipse_xrange2_intruder;
    QString *attach_gores_intruder;
    QString *num_vert_gores_intruder;
    QString *start_xcoord_gore_intruder;
    QString *dist_btn_gores_intruder;
    QString *attach_strings_intruder;
    QString *vertex_coord_paraboloid1_intruder;
    QString *vertex_coord_paraboloid2_intruder;
    QString *vertex_coord_paraboloid3_intruder;
    QString *coeff_paraboloid_intruder;
    QString *init_pos_load1_intruder;
    QString *init_pos_load2_intruder;
    QString *init_pos_load3_intruder;


    //INITIALIZATION PARAM QSTRINGS

    QString *velocity_function;
    QString *shape_fixed_area;
    QString *interior_propagator;

    QString *center_ellipse_1;
    QString *center_ellipse_2;
    QString *radii_ellipse_1;
    QString *radii_ellipse_2;
    QString *area_velocity_1;
    QString *area_velocity_2;
    QString *area_velocity_3;
    QString *init_gravity;

    //TURBULENCE

    QString *use_eddy_viscosity;
    QString *turbulence_model;
    QString *k_eps_model;

    QString *prandtl_number_for_k;
    QString *prandtl_number_for_eps;
    QString *C1;
    QString *C2;
    QString *Cmu;
    QString *Cbc;
    QString *l0;
    QString *mu0;
    QString *y_plus;
    QString *time_to_activate_turb;





};



class IntroPage : public QWizardPage
{
    Q_OBJECT

public:
    IntroPage(QWidget *parent = nullptr);


//private:
    QLabel *mainlabel;
    //QLabel *Hi_label;
    QLabel *directory_label;
    QLabel *init_directory_label;
    QLabel *rigid_body_label;

    QLineEdit *directory_name;
    QLineEdit *init_directory_name;


    QVBoxLayout *finallayout;

    /*

    QLineEdit *center_of_sphere1;
    QLineEdit *center_of_sphere2;
    QLineEdit *center_of_sphere3;
    QLineEdit *center_of_box1;
    QLineEdit *center_of_box2;
    QLineEdit *center_of_box3;
    QLineEdit *radius_of_sphere1;
    QLineEdit *radius_of_sphere2;
    QLineEdit *radius_of_sphere3;
    QLineEdit *edge_of_box1;
    QLineEdit *edge_of_box2;
    QLineEdit *edge_of_box3;
    QLineEdit *human_vtk_directory;
    QLineEdit *center_of_human1;
    QLineEdit *center_of_human2;
    QLineEdit *center_of_human3;
    QLineEdit *enlargement_coeff;

    QVBoxLayout *finallayout;
    //QHBoxLayout *rigid_body_decision_layout;
    QHBoxLayout *hlayout4;
    QHBoxLayout *hlayout5;
    QHBoxLayout *hlayout1;
    QHBoxLayout *hlayout2;
    QHBoxLayout *hlayout_human0;
    QHBoxLayout *hlayout_human1;
    QHBoxLayout *hlayout_human2;

    QCheckBox *rigid_body_check;
    QCheckBox *rigid_body_sphere;
    QCheckBox *rigid_body_box;
    QCheckBox *rigid_body_human;


    //QComboBox *rigid_body_decision;

private slots:
    void rigid_body_toggled(bool clicked);
    void spheretoggled(bool clicked);
    void boxtoggled(bool clicked);
    void humantoggled(bool clicked);

    */
};




class FirstPage : public QWizardPage
{
    Q_OBJECT

public:
    FirstPage(QWidget *parent = nullptr);
    //void Write();

//private:
    QLabel *dom_lim_0;
    QLabel *bounds0;
    QLabel *dom_lim_1;
    QLabel *bounds1;
    QLabel *dom_lim_2;
    QLabel *bounds2;
    QLabel *compgrid;
    QLabel *lowerbound_0;
    QLabel *upperbound_0;
    QLabel *lowerbound_1;
    QLabel *upperbound_1;
    QLabel *lowerbound_2;
    QLabel *upperbound_2;

    QLineEdit *first_bounds0;
    QLineEdit *last_bounds0;
    QLineEdit *first_bounds1;
    QLineEdit *last_bounds1;
    QLineEdit *first_bounds2;
    QLineEdit *last_bounds2;
    QLineEdit *grid_coord1;
    QLineEdit *grid_coord2;
    QLineEdit *grid_coord3;

    QComboBox *upperbound0;
    QComboBox *lowerbound0;
    QComboBox *upperbound1;
    QComboBox *lowerbound1;
    QComboBox *upperbound2;
    QComboBox *lowerbound2;
    QComboBox *lowerbound2_type;
    QComboBox *upperbound2_type;

    QSpacerItem *space1;


};

class SecondPage : public QWizardPage
{
    Q_OBJECT

public:
    SecondPage(QWidget *parent = nullptr);
    //void Write();

//private:


    QLabel *max_time_;
    QLabel *max_step_;
    QLabel *print_interval_;
    QLabel *mv_frame_interval_;
    QLabel *CFL_factor_;
    QLabel *redistribution_interval_;
    QLabel *turn_onoff_redist_int_;
    QLabel *ifluid_;
    QLabel *projection_;
    QLabel *advection_order_;
    QLabel *density_and_visc_;
    QLabel *gravity_;


    QLineEdit *max_time;
    QLineEdit *max_step;
    QLineEdit *print_interval;
    QLineEdit *mv_frame_interval;
    QLineEdit *CFL_factor;
    QLineEdit *redistribution_interval;
    QComboBox *turn_onoff_redist_int;
    QComboBox *projection;
    QLineEdit *advection_order;
    QLineEdit *density_and_visc1;
    QLineEdit *density_and_visc2;
    QLineEdit *gravity;

    QSpacerItem *space1;


};



class ThirdPage : public QWizardPage
{
    Q_OBJECT

public:
    ThirdPage(QWidget *parent = nullptr);

//private:


    QLabel *add_rigbody_;
    QLabel *num_rigbodies_;
    QLabel *rig_body1_;
    QLabel *type_of_rigbody_;
    QLabel *center_of_rigbody_;
    QLabel *radius_of_rigbody_;
    QLabel *preset_motion_;
    QLabel *dynamic_motion_;
    QLabel *direction_of_motion_;
    QLabel *total_mass_;
    QLabel *init_center_mass_;
    QLabel *init_center_mass_vel_;


    QComboBox *add_rigbody;
    QLineEdit *num_rigbodies;
    QComboBox *type_of_rigbody;
    QLineEdit *center_of_rigbody1;
    QLineEdit *center_of_rigbody2;
    QLineEdit *center_of_rigbody3;
    QLineEdit *radius_of_rigbody1;
    QLineEdit *radius_of_rigbody2;
    QLineEdit *radius_of_rigbody3;
    QComboBox *preset_motion;
    QComboBox *dynamic_motion;
    QLineEdit *direction_of_motion1;
    QLineEdit *direction_of_motion2;
    QLineEdit *direction_of_motion3;
    QLineEdit *total_mass;
    QLineEdit *init_center_mass1;
    QLineEdit *init_center_mass2;
    QLineEdit *init_center_mass3;
    QLineEdit *init_center_mass_vel1;
    QLineEdit *init_center_mass_vel2;
    QLineEdit *init_center_mass_vel3;

    QSpacerItem *space1;


    //MOVED FROM INIT PAGE

    QLineEdit *center_of_sphere1;
    QLineEdit *center_of_sphere2;
    QLineEdit *center_of_sphere3;
    QLineEdit *center_of_box1;
    QLineEdit *center_of_box2;
    QLineEdit *center_of_box3;
    QLineEdit *radius_of_sphere1;
    QLineEdit *radius_of_sphere2;
    QLineEdit *radius_of_sphere3;
    QLineEdit *edge_of_box1;
    QLineEdit *edge_of_box2;
    QLineEdit *edge_of_box3;
    QLineEdit *human_vtk_directory;
    QLineEdit *center_of_human1;
    QLineEdit *center_of_human2;
    QLineEdit *center_of_human3;
    QLineEdit *enlargement_coeff;

    QVBoxLayout *finallayout;
    //QHBoxLayout *rigid_body_decision_layout;
    QHBoxLayout *hlayout4;
    QHBoxLayout *hlayout5;
    QHBoxLayout *hlayout1;
    QHBoxLayout *hlayout2;
    QHBoxLayout *hlayout_human0;
    QHBoxLayout *hlayout_human1;
    QHBoxLayout *hlayout_human2;

    QCheckBox *rigid_body_check;
    QCheckBox *rigid_body_sphere;
    QCheckBox *rigid_body_box;
    QCheckBox *rigid_body_human;

    QWidget *for_show_widget_hlayout1;
    QWidget *for_show_widget_hlayout2;
    QWidget *for_show_widget_hlayout4;
    QWidget *for_show_widget_hlayout5;

    QWidget *for_show_widget_hlayout_human0;
    QWidget *for_show_widget_hlayout_human1;
    QWidget *for_show_widget_hlayout_human2;



    //QComboBox *rigid_body_decision;

private slots:
    void rigid_body_toggled(bool clicked);
    void spheretoggled(bool clicked);
    void boxtoggled(bool clicked);
    void humantoggled(bool clicked);



};


class FourthPage : public QWizardPage
{
    Q_OBJECT

public:
    FourthPage(QWidget *parent = nullptr);

//private:

    //C9...the original parameters

    QLabel *main_label;
    QLabel *num_canopy_surfaces_;
    QLabel *canopy_surf_type_;
    QLabel *canopy_boundary_;
    QLabel *height_of_plane_;
    QLabel *circle_center_;
    QLabel *circle_radius_;
    QLabel *attach_gores_;
    QLabel *cut_vent_;
    QLabel *attach_strings_;
    QLabel *num_chords_;
    QLabel *init_pos_load_;
    QLabel *install_strings_toRGB_;
    QLabel *body_index_;

    QLineEdit *num_canopy_surfaces;
    QComboBox *canopy_surf_type;
    QComboBox *canopy_boundary;
    QLineEdit *height_of_plane;
    QLineEdit *circle_center1;
    QLineEdit *circle_center2;
    QComboBox *attach_gores;
    QComboBox *cut_vent;
    QComboBox *attach_strings;
    QLineEdit *num_chords;
    QLineEdit *init_pos_load1;
    QLineEdit *init_pos_load2;
    QLineEdit *init_pos_load3;
    QComboBox *install_strings_toRGB;
    QLineEdit *body_index;
    QLineEdit *circle_radius;

    QVBoxLayout *vlayout_C9;
    QVBoxLayout *finallayout;

    QHBoxLayout *hlayout_parachutes;

    //CHECKBOXES

    QCheckBox *C9_parachute;
    QCheckBox *DGB_parachute;
    QCheckBox *G11_parachute;
    QCheckBox *intruder_parachute;

    //DGB
    QLineEdit *num_canopy_surfaces_DGB;
    QComboBox *complex_connection_DGB;
    QComboBox *canopy_surf_type_DGB;
    QComboBox *canopy_boundary_DGB;
    QLineEdit *height_of_plane_DGB;
    QLineEdit *circle_radius_DGB;
    QLineEdit *circle_center1_DGB;
    QLineEdit *circle_center2_DGB;
    QComboBox *attach_gores_DGB;
    QComboBox *cut_vent_DGB;
    QComboBox *attach_strings_DGB;
    QLineEdit *radius_vent_DGB;
    QLineEdit *num_chords_DGB;
    QLineEdit *length_drape_DGB;
    QLineEdit *gap_canopy_drape_DGB;
    QLineEdit *init_pos_load1_DGB;
    QLineEdit *init_pos_load2_DGB;
    QLineEdit *init_pos_load3_DGB;
    QComboBox *fix_load_node_DGB;
    QComboBox *install_strings_toRGB_DGB;
    QComboBox *modify_initialization_DGB;
    QComboBox *rotate_canopy_DGB;
    QLineEdit *new_pos_load1_DGB;
    QLineEdit *new_pos_load2_DGB;
    QLineEdit *new_pos_load3_DGB;
    QLineEdit *connect_pos1_DGB;
    QLineEdit *connect_pos2_DGB;
    QLineEdit *connect_pos3_DGB;
    QComboBox *multi_parachute_to_RGB_DGB;
    QLineEdit *body_index_DGB;

    QVBoxLayout *vlayout_DGB;

    //G11

    QLineEdit *num_canopy_surfaces_G11;
    QComboBox *canopy_surf_type_G11;
    QComboBox *canopy_boundary_G11;
    QLineEdit *height_of_plane_G11;
    QLineEdit *circle_center1_G11;
    QLineEdit *circle_center2_G11;
    QComboBox *attach_gores_G11;
    QComboBox *cut_vent_G11;
    QComboBox *attach_strings_G11;
    QLineEdit *num_chords_G11;
    QLineEdit *init_pos_load1_G11;
    QLineEdit *init_pos_load2_G11;
    QLineEdit *init_pos_load3_G11;
    QComboBox *install_strings_toRGB_G11;
    QLineEdit *body_index_G11;
    QLineEdit *circle_radius_G11;


    QVBoxLayout *vlayout_G11;

    //INTRUDER

    QLineEdit *num_canopy_surfaces_intruder;
    QComboBox *canopy_surf_type_intruder;
    QComboBox *canopy_boundary_intruder;
    QLineEdit *height_of_plane_intruder;
    QLineEdit *ellipse_center1_intruder;
    QLineEdit *ellipse_center2_intruder;
    QLineEdit *ellipse_center3_intruder;
    QLineEdit *ellipse_radius1_intruder;
    QLineEdit *ellipse_radius2_intruder;
    QLineEdit *ellipse_xrange1_intruder;
    QLineEdit *ellipse_xrange2_intruder;
    QComboBox *attach_gores_intruder;
    QLineEdit *num_vert_gores_intruder;
    QLineEdit *start_xcoord_gore_intruder;
    QLineEdit *dist_btn_gores_intruder;
    QComboBox *attach_strings_intruder;
    QLineEdit *vertex_coord_paraboloid1_intruder;
    QLineEdit *vertex_coord_paraboloid2_intruder;
    QLineEdit *vertex_coord_paraboloid3_intruder;
    QLineEdit *coeff_paraboloid_intruder;
    QLineEdit *init_pos_load1_intruder;
    QLineEdit *init_pos_load2_intruder;
    QLineEdit *init_pos_load3_intruder;

    QVBoxLayout *vlayout_intruder;

    //USED FOR ALL
    QSpacerItem *space1;


    //FOR SHOWING AND HIDING

    QWidget *for_show_vlayout_C9;
    QWidget *for_show_vlayout_DGB;
    QWidget *for_show_vlayout_G11;
    QWidget *for_show_vlayout_intruder;


private slots:
    void C9_toggled(bool);
    void DGB_toggled(bool);
    void G11_toggled(bool);
    void intruder_toggled(bool);



};

class FifthPage : public QWizardPage
{
    Q_OBJECT

public:
    FifthPage(QWidget *parent = nullptr);

//private:


    QLabel *gpu_solver_;
    QLabel *fluid_solver_;
    QLabel *use_porosity_;
    QLabel *viscous_param_;
    QLabel *inertial_param_;
    QLabel *smooth_radius_;
    QLabel *payload_;
    QLabel *sub_step_num_;
    QLabel *area_density_;

    QComboBox *gpu_solver;
    QComboBox *fluid_solver;
    QComboBox *use_porosity;
    QLineEdit *viscous_param;
    QLineEdit *inertial_param;
    QLineEdit *smooth_radius;
    QLineEdit *payload;
    QLineEdit *area_density;
    QLineEdit *sub_step_num;


    QSpacerItem *space1;



};

class SixthPage : public QWizardPage
{
    Q_OBJECT

public:
    SixthPage(QWidget *parent = nullptr);

//private:

    QLabel *fab_spring_const_;
    QLabel *fab_damping_const_;
    QLabel *fab_friction_const_;
    QLabel *fab_point_mass_;
    QLabel *fab_thickness_;
    QLabel *fab_rounding_tol_;
    QLabel *str_spring_const_;
    QLabel *str_damping_const_;
    QLabel *str_friction_const_;
    QLabel *str_point_mass_;
    QLabel *str_thickness_;
    QLabel *str_rounding_tol_;

    QLineEdit *fab_spring_const;
    QLineEdit *fab_damping_const;
    QLineEdit *fab_friction_const;
    QLineEdit *fab_point_mass;
    QLineEdit *fab_thickness;
    QLineEdit *fab_rounding_tol;
    QLineEdit *str_spring_const;
    QLineEdit *str_damping_const;
    QLineEdit *str_friction_const;
    QLineEdit *str_point_mass;
    QLineEdit *str_thickness;
    QLineEdit *str_rounding_tol;

    QSpacerItem *space1;


};

class SeventhPage : public QWizardPage
{
    Q_OBJECT

public:
    SeventhPage(QWidget *parent = nullptr);

//private:


    //QLabel *lower_boundary_;
    //QLabel *lower_type_of_dirichlet_;
    QLabel *velocity_;
    QLabel *pressure_;
    //QLabel *upper_boundary_;
    //QLabel *upper_type_of_dirichlet_;
    QLabel *yz_movie_;
    QLabel *xz_movie_;
    QLabel *xy_movie_;
    QLabel *velocity_vector_;
    QLabel *surface_stress_;

    QComboBox *lower_type_of_dirichlet;
    QLineEdit *velocity1;
    QLineEdit *velocity2;
    QLineEdit *velocity3;
    QLineEdit *pressure;
    QComboBox *upper_type_of_dirichlet;
    QComboBox *yz_movie;
    QComboBox *xz_movie;
    QComboBox *xy_movie;
    QComboBox *velocity_vector;
    QComboBox *surface_stress;


    QSpacerItem *space1;


};



class Turb_Init_Page : public QWizardPage
{
    Q_OBJECT

public:
    Turb_Init_Page(QWidget *parent = nullptr);

    //void setVisible(bool visible);

//private:


    QLabel *velocity_function_label;
    QLabel *shape_fixed_area_label;
    QLabel *center_ellipse_label;
    QLabel *radii_ellipse_label;
    QLabel *area_velocity_label;
    QLabel *gravity_label;
    QLabel *interior_propagator_label;
    QLabel *turbulence_declaration;


    QComboBox *velocity_function;
    QComboBox *shape_fixed_area;
    QComboBox *interior_propagator;

    QLineEdit *center_ellipse_1;
    QLineEdit *center_ellipse_2;
    QLineEdit *radii_ellipse_1;
    QLineEdit *radii_ellipse_2;
    QLineEdit *area_velocity_1;
    QLineEdit *area_velocity_2;
    QLineEdit *area_velocity_3;
    QLineEdit *gravity;

    //TURBULENCE
    QVBoxLayout *vlayout_turb_init_page;

    QLabel *use_eddy_viscosity_label;
    QLabel *turbulence_model_label;
    QLabel *k_eps_model_label;
    QLabel *prandtl_number_for_k_label;
    QLabel *prandtl_number_for_eps_label;
    QLabel *C1_label;
    QLabel *C2_label;
    QLabel *Cmu_label;
    QLabel *Cbc_label;
    QLabel *l0_label;
    QLabel *mu0_label;
    QLabel *y_plus_label;
    QLabel *time_to_activate_turb_label;

    QComboBox *use_eddy_viscosity;
    QComboBox *turbulence_model;
    QComboBox *k_eps_model;

    QLineEdit *prandtl_number_for_k;
    QLineEdit *prandtl_number_for_eps;
    QLineEdit *C1;
    QLineEdit *C2;
    QLineEdit *Cmu;
    QLineEdit *Cbc;
    QLineEdit *l0;
    QLineEdit *mu0;
    QLineEdit *y_plus;
    QLineEdit *time_to_activate_turb;

    QSpacerItem *space1;

//private slots:

    //void Write();


};






class DebugPage : public QWizardPage
{
    Q_OBJECT

public:
    DebugPage(QWidget *parent = nullptr);

    //void setVisible(bool visible);

//private:


    QLabel *debug_;
    QLabel *debug_strings_;
    QLabel *sample_line_type_;
    QLabel *sample_line_coord_;
    QLabel *end_step_;

    QComboBox *debug;
    QLineEdit *debug_string_space1;
    QLineEdit *debug_string_space2;
    QLineEdit *debug_string_space3;
    QLineEdit *debug_string_space4;
    QLineEdit *debug_string_space5;
    QLineEdit *debug_string_space6;
    QLineEdit *debug_string_space7;
    QLineEdit *debug_string_space8;
    QLineEdit *debug_string_space9;
    QLineEdit *debug_string_space10;
    QLineEdit *debug_string_space11;
    QLineEdit *debug_string_space12;
    QLineEdit *debug_string_space13;
    QLineEdit *sample_line_type;
    QLineEdit *sample_line_coord1;
    QLineEdit *sample_line_coord2;
    QLineEdit *start_step;
    QLineEdit *end_step;

    QSpacerItem *space1;

//private slots:

    //void Write();


};




#endif // C9_WIZARD_H
