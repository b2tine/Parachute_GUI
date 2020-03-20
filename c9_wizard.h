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


class C9_Wizard : public QWizard
{
    Q_OBJECT

public:
    C9_Wizard(QWidget *parent = nullptr);

    //void accept() override;
};



class IntroPage : public QWizardPage
{
    Q_OBJECT

public:
    IntroPage(QWidget *parent = nullptr);

private:
    QLabel *mainlabel;

};

class FirstPage : public QWizardPage
{
    Q_OBJECT

public:
    FirstPage(QWidget *parent = nullptr);

private:
    QLabel *mainlabel;

};
















/*



class C9_Wizard : public QWizard
{
    Q_OBJECT

public:
    //C9_Wizard(QWizard *parent = nullptr);

    C9_Wizard();
    ~C9_Wizard();


private:

    //QWizardPage *createmainpage();

    QWizardPage *mainpage = new QWizardPage;
    QLabel *mainlabel = new QLabel;
    QHBoxLayout *mainlayout = new QHBoxLayout;


    //QWizardPage *createfirstpage();

    QLabel *dom_lim_0 = new QLabel;
    QHBoxLayout *hlayout1 = new QHBoxLayout;
    QLabel *bounds0 = new QLabel;
    QSpacerItem *space1 = new QSpacerItem(500,1);
    QVBoxLayout *vlayout1 = new QVBoxLayout;
    QLabel *dom_lim_1 = new QLabel;
    QHBoxLayout *hlayout2 = new QHBoxLayout;
    QLabel *bounds1 = new QLabel;
    QVBoxLayout *vlayout2 = new QVBoxLayout;
    QLabel *dom_lim_2 = new QLabel;
    QHBoxLayout *hlayout3 = new QHBoxLayout;
    QLabel *bounds2 = new QLabel;



    QWizardPage *createsecondpage();

    QWizardPage *createthirdpage();

    QWizardPage *createfourthpage();

    QWizardPage *createfifthpage();

    QWizardPage *createsixthpage();

    QWizardPage *createseventhpage();

    QWizardPage *createdebuggingpage();






    QLineEdit *first_bounds0 = new QLineEdit;
    QLineEdit *last_bounds0 = new QLineEdit;
    QLineEdit *first_bounds1 = new QLineEdit;
    QLineEdit *last_bounds1 = new QLineEdit;
    QLineEdit *first_bounds2 = new QLineEdit;
    QLineEdit *last_bounds2 = new QLineEdit;
    QLineEdit *grid_coord1 = new QLineEdit;
    QLineEdit *grid_coord2 = new QLineEdit;
    QLineEdit *grid_coord3 = new QLineEdit;
    QComboBox *upperbound0 = new QComboBox;
    QComboBox *lowerbound0 = new QComboBox;
    QComboBox *upperbound1 = new QComboBox;
    QComboBox *lowerbound1 = new QComboBox;
    QComboBox *upperbound2 = new QComboBox;
    QComboBox *lowerbound2 = new QComboBox;

    QLineEdit *max_time = new QLineEdit;
    QLineEdit *max_step = new QLineEdit;
    QLineEdit *print_interval = new QLineEdit;
    QLineEdit *mv_frame_interval = new QLineEdit;
    QLineEdit *CFL_factor = new QLineEdit;
    QLineEdit *redistribution_interval = new QLineEdit;
    QComboBox *turn_onoff_redist_int = new QComboBox;
    QComboBox *projection = new QComboBox;
    QLineEdit *advection_order= new QLineEdit;
    QLineEdit *density_and_visc1 = new QLineEdit;
    QLineEdit *density_and_visc2 = new QLineEdit;
    QLineEdit *gravity = new QLineEdit;
    QComboBox *add_rigbody = new QComboBox;
    QLineEdit *num_rigbodies = new QLineEdit;
    QComboBox *type_of_rigbody = new QComboBox;
    QLineEdit *center_of_rigbody1 = new QLineEdit;
    QLineEdit *center_of_rigbody2 = new QLineEdit;
    QLineEdit *center_of_rigbody3 = new QLineEdit;
    QLineEdit *radius_of_rigbody1 = new QLineEdit;
    QLineEdit *radius_of_rigbody2 = new QLineEdit;
    QLineEdit *radius_of_rigbody3 = new QLineEdit;
    QComboBox *preset_motion = new QComboBox;
    QComboBox *dynamic_motion = new QComboBox;
    QLineEdit *direction_of_motion1 = new QLineEdit;
    QLineEdit *direction_of_motion2 = new QLineEdit;
    QLineEdit *direction_of_motion3 = new QLineEdit;
    QLineEdit *total_mass = new QLineEdit;
    QLineEdit *init_center_mass1 = new QLineEdit;
    QLineEdit *init_center_mass2 = new QLineEdit;
    QLineEdit *init_center_mass3 = new QLineEdit;
    QLineEdit *init_center_mass_vel1 = new QLineEdit;
    QLineEdit *init_center_mass_vel2 = new QLineEdit;
    QLineEdit *init_center_mass_vel3 = new QLineEdit;
    QLineEdit *num_canopy_surfaces = new QLineEdit;
    QComboBox *canopy_surf_type = new QComboBox;
    QComboBox *canopy_boundary = new QComboBox;
    QLineEdit *height_of_plane = new QLineEdit;
    QLineEdit *circle_center1 = new QLineEdit;
    QLineEdit *circle_center2 = new QLineEdit;
    QComboBox *attach_gores = new QComboBox;
    QComboBox *cut_vent = new QComboBox;
    QComboBox *attach_strings = new QComboBox;
    QLineEdit *num_chords = new QLineEdit;
    QLineEdit *init_pos_load1 = new QLineEdit;
    QLineEdit *init_pos_load2 = new QLineEdit;
    QLineEdit *init_pos_load3 = new QLineEdit;
    QComboBox *install_strings_toRGB = new QComboBox;
    QLineEdit *body_index = new QLineEdit;
    QLineEdit *circle_radius = new QLineEdit;
    QComboBox *gpu_solver = new QComboBox;
    QComboBox *fluid_solver = new QComboBox;
    QComboBox *use_porosity = new QComboBox;
    QLineEdit *viscous_param = new QLineEdit;
    QLineEdit *inertial_param = new QLineEdit;
    QLineEdit *smooth_radius = new QLineEdit;
    QLineEdit *payload = new QLineEdit;
    QLineEdit *area_density = new QLineEdit;
    QLineEdit *sub_step_num = new QLineEdit;

    QLineEdit *fab_spring_const = new QLineEdit;
    QLineEdit *fab_damping_const = new QLineEdit;
    QLineEdit *fab_friction_const = new QLineEdit;
    QLineEdit *fab_point_mass = new QLineEdit;
    QLineEdit *fab_thickness = new QLineEdit;
    QLineEdit *fab_rounding_tol = new QLineEdit;

    QLineEdit *str_spring_const = new QLineEdit;
    QLineEdit *str_damping_const = new QLineEdit;
    QLineEdit *str_friction_const = new QLineEdit;
    QLineEdit *str_point_mass = new QLineEdit;
    QLineEdit *str_thickness = new QLineEdit;
    QLineEdit *str_rounding_tol ;

    QComboBox *lower_type_of_dirichlet = new QComboBox;
    QLineEdit *velocity1 = new QLineEdit;
    QLineEdit *velocity2 = new QLineEdit;
    QLineEdit *velocity3 = new QLineEdit;
    QLineEdit *pressure = new QLineEdit;
    QComboBox *upper_type_of_dirichlet = new QComboBox;

    QComboBox *yz_movie = new QComboBox;
    QComboBox *xz_movie = new QComboBox;
    QComboBox *xy_movie = new QComboBox;
    QComboBox *velocity_vector = new QComboBox;
    QComboBox *surface_stress = new QComboBox;

    QComboBox *debug = new QComboBox;
    QLineEdit *debug_string_space1 = new QLineEdit;
    QLineEdit *debug_string_space2 = new QLineEdit;
    QLineEdit *debug_string_space3 = new QLineEdit;
    QLineEdit *debug_string_space4 = new QLineEdit;
    QLineEdit *debug_string_space5 = new QLineEdit;
    QLineEdit *debug_string_space6 = new QLineEdit;
    QLineEdit *debug_string_space7 = new QLineEdit;
    QLineEdit *debug_string_space8 = new QLineEdit;
    QLineEdit *debug_string_space9 = new QLineEdit;
    QLineEdit *debug_string_space10 = new QLineEdit;
    QLineEdit *debug_string_space11 = new QLineEdit;
    QLineEdit *debug_string_space12 = new QLineEdit;
    QLineEdit *debug_string_space13 = new QLineEdit;

    QLineEdit *sample_line_type = new QLineEdit;
    QLineEdit *sample_line_coord1 = new QLineEdit;
    QLineEdit *sample_line_coord2 = new QLineEdit;
    QLineEdit *start_step = new QLineEdit;
    QLineEdit *end_step = new QLineEdit;

    //QSTRINGS


    QString *dom_lim_0_first = new QString;
    QString *dom_lim_0_last = new QString;

    QString *dom_lim_1_first = new QString;
    QString *dom_lim_1_last = new QString;
    QString *dom_lim_2_first = new QString;
    QString *dom_lim_2_last = new QString;

    QString *compgrid_1 = new QString;
    QString *compgrid_2 = new QString;
    QString *compgrid_3 = new QString;

    QString *lowerbound_0 = new QString;
    QString *upperbound_0 = new QString;
    QString *lowerbound_1 = new QString;
    QString *upperbound_1 = new QString;
    QString *lowerbound_2 = new QString;
    QString *upperbound_2 = new QString;

    QString *max_time_ = new QString;
    QString *max_step_ = new QString;

    QString *print_interval_ = new QString;
    QString *mv_frame_interval_ = new QString;
    QString *CFL_factor_ = new QString;
    QString *redistribution_interval_ = new QString;
    QString *turn_onoff_redist_int_ = new QString;

    QString *projection_ = new QString;
    QString *advection_order_ = new QString;
    QString *density_and_visc_1 = new QString;
    QString *density_and_visc_2 = new QString;
    QString *gravity_ = new QString;

    QString *add_rigbody_ = new QString;
    QString *num_rigbodies_ = new QString;
    QString *type_of_rigbody_ = new QString;
    QString *center_of_rigbody_1 = new QString;
    QString *center_of_rigbody_2 = new QString;
    QString *center_of_rigbody_3 = new QString;
    QString *radius_of_rigbody_1 = new QString;
    QString *radius_of_rigbody_2 = new QString;
    QString *radius_of_rigbody_3 = new QString;
    QString *preset_motion_ = new QString;
    QString *dynamic_motion_ = new QString;
    QString *direction_of_motion_1 = new QString;
    QString *direction_of_motion_2 = new QString;
    QString *direction_of_motion_3 = new QString;
    QString *total_mass_ = new QString;
    QString *init_center_mass_1 = new QString;
    QString *init_center_mass_2 = new QString;
    QString *init_center_mass_3 = new QString;
    QString *init_center_mass_vel_1 = new QString;
    QString *init_center_mass_vel_2 = new QString;
    QString *init_center_mass_vel_3 = new QString;

    QString *num_canopy_surfaces_ = new QString;
    QString *canopy_surf_type_ = new QString;
    QString *canopy_boundary_ = new QString;
    QString *height_of_plane_ = new QString;
    QString *circle_center_1 = new QString;
    QString *circle_center_2 = new QString;
    QString *circle_radius_ = new QString;
    QString *attach_gores_ = new QString;
    QString *cut_vent_ = new QString;
    QString *attach_strings_ = new QString;
    QString *num_chords_ = new QString;
    QString *init_pos_load_1 = new QString;
    QString *init_pos_load_2 = new QString;
    QString *init_pos_load_3 = new QString;
    QString *install_strings_toRGB_ = new QString;
    QString *body_index_ = new QString;

    QString *gpu_solver_ = new QString;
    QString *fluid_solver_ = new QString;
    QString *use_porosity_ = new QString;
    QString *viscous_param_ = new QString;
    QString *inertial_param_ = new QString;
    QString *smooth_radius_ = new QString;

    QString *payload_ = new QString;
    QString *sub_step_num_ = new QString;
    QString *area_density_ = new QString;

    QString *fab_spring_const_ = new QString;
    QString *fab_damping_const_ = new QString;
    QString *fab_friction_const_ = new QString;
    QString *fab_point_mass_ = new QString;
    QString *fab_thickness_ = new QString;
    QString *fab_rounding_tol_ = new QString;

    QString *str_spring_const_ = new QString;
    QString *str_damping_const_ = new QString;
    QString *str_friction_const_ = new QString;
    QString *str_point_mass_ = new QString;
    QString *str_thickness_ = new QString;
    QString *str_rounding_tol_ = new QString;

    QString *lower_type_of_dirichlet_ = new QString;
    QString *velocity_1 = new QString;
    QString *velocity_2 = new QString;
    QString *velocity_3 = new QString;
    QString *pressure_ = new QString;
    QString *upper_type_of_dirichlet_ = new QString;

    QString *yz_movie_ = new QString;
    QString *xz_movie_ = new QString;
    QString *xy_movie_ = new QString;
    QString *velocity_vector_ = new QString;
    QString *surface_stress_ = new QString;

    QString *debug_ = new QString;
    QString *debug_string_space1_ = new QString;
    QString *debug_string_space2_ = new QString;
    QString *debug_string_space3_ = new QString;
    QString *debug_string_space4_ = new QString;
    QString *debug_string_space5_ = new QString;
    QString *debug_string_space6_ = new QString;
    QString *debug_string_space7_ = new QString;
    QString *debug_string_space8_ = new QString;
    QString *debug_string_space9_ = new QString;
    QString *debug_string_space10_ = new QString;
    QString *debug_string_space11_ = new QString;
    QString *debug_string_space12_ = new QString;
    QString *debug_string_space13_ = new QString;


    QString *sample_line_type_ = new QString;
    QString *sample_line_coord_1 = new QString;
    QString *sample_line_coord_2 = new QString;
    QString *start_step_ = new QString;
    QString *end_step_ = new QString;



    *dom_lim_0_first = new QString;
    dom_lim_0_first = *first_bounds0->displayText();
    *dom_lim_0_last = new QString;
    dom_lim_0_last = last_bounds0->displayText();

    *dom_lim_1_first = new QString;
    *dom_lim_1_first = first_bounds1->displayText();
    dom_lim_1_last = new QString;
    *dom_lim_1_last = last_bounds1->displayText();
    dom_lim_2_first = new QString;
    *dom_lim_2_first = first_bounds2->displayText();
    dom_lim_2_last = new QString;
    *dom_lim_2_last = last_bounds2->displayText();

    compgrid_1 = new QString;
    *compgrid_1 = grid_coord1->displayText();
    compgrid_2 = new QString;
    *compgrid_2 = grid_coord2->displayText();
    compgrid_3 = new QString;
    *compgrid_3 = grid_coord3->displayText();

    lowerbound_0 = new QString;
    *lowerbound_0 = lowerbound0->currentText();
    upperbound_0 = new QString;
    *upperbound_0 = upperbound0->currentText();
    lowerbound_1 = new QString;
    *lowerbound_1 = lowerbound1->currentText();
    upperbound_1 = new QString;
    *upperbound_1 = upperbound1->currentText();
    lowerbound_2 = new QString;
    *lowerbound_2 = lowerbound2->currentText();
    upperbound_2 = new QString;
    *upperbound_2 = upperbound2->currentText();

    max_time_ = new QString;
    *max_time_ = max_time->displayText();
    max_step_ = new QString;
    *max_step_ = max_step->displayText();
    print_interval_ = new QString;
    *print_interval_ = print_interval->displayText();
    mv_frame_interval_ = new QString;
    *mv_frame_interval_ = mv_frame_interval->displayText();
    CFL_factor_ = new QString;
    *CFL_factor_ = CFL_factor->displayText();
    redistribution_interval_ = new QString;
    *redistribution_interval_ = redistribution_interval->displayText();
    turn_onoff_redist_int_ = new QString;
    *turn_onoff_redist_int_ = turn_onoff_redist_int->currentText();

    projection_ = new QString;
    *projection_ = projection->currentText();
    advection_order_ = new QString;
    *advection_order_ = advection_order->displayText();
    density_and_visc_1 = new QString;
    *density_and_visc_1 = density_and_visc1->displayText();
    density_and_visc_2 = new QString;
    *density_and_visc_2 = density_and_visc2->displayText();
    gravity_ = new QString;
    *gravity_ = gravity->displayText();

    add_rigbody_ = new QString;
    *add_rigbody_ = add_rigbody->currentText();
    num_rigbodies_ = new QString;
    *num_rigbodies_ = num_rigbodies->displayText();
    type_of_rigbody_ = new QString;
    *type_of_rigbody_ = type_of_rigbody->currentText();
    center_of_rigbody_1 = new QString;
    *center_of_rigbody_1 = center_of_rigbody1->displayText();
    center_of_rigbody_2 = new QString;
    *center_of_rigbody_2 = center_of_rigbody2->displayText();
    center_of_rigbody_3 = new QString;
    *center_of_rigbody_3 = center_of_rigbody3->displayText();
    radius_of_rigbody_1 = new QString;
    *radius_of_rigbody_1 = radius_of_rigbody1->displayText();
    radius_of_rigbody_2 = new QString;
    *radius_of_rigbody_2 = radius_of_rigbody2->displayText();
    radius_of_rigbody_3 = new QString;
    *radius_of_rigbody_3 = radius_of_rigbody3->displayText();
    preset_motion_ = new QString;
    *preset_motion_ = preset_motion->currentText();
    dynamic_motion_ = new QString;
    *dynamic_motion_ = dynamic_motion->currentText();
    direction_of_motion_1 = new QString;
    *direction_of_motion_1 = direction_of_motion1->displayText();
    direction_of_motion_2 = new QString;
    *direction_of_motion_2 = direction_of_motion2->displayText();
    direction_of_motion_3 = new QString;
    *direction_of_motion_3 = direction_of_motion3->displayText();
    total_mass_ = new QString;
    *total_mass_ = total_mass->displayText();
    init_center_mass_1 = new QString;
    *init_center_mass_1 = init_center_mass1->displayText();
    init_center_mass_2 = new QString;
    *init_center_mass_2 = init_center_mass2->displayText();
    init_center_mass_3 = new QString;
    *init_center_mass_3 = init_center_mass3->displayText();
    init_center_mass_vel_1 = new QString;
    *init_center_mass_vel_1 = init_center_mass_vel1->displayText();
    init_center_mass_vel_2 = new QString;
    *init_center_mass_vel_2 = init_center_mass_vel2->displayText();
    init_center_mass_vel_3 = new QString;
    *init_center_mass_vel_3 = init_center_mass_vel3->displayText();

    num_canopy_surfaces_ = new QString;
    *num_canopy_surfaces_ = num_canopy_surfaces->displayText();
    canopy_surf_type_ = new QString;
    *canopy_surf_type_ = canopy_surf_type->currentText();
    canopy_boundary_ = new QString;
    *canopy_boundary_ = canopy_boundary->currentText();
    height_of_plane_ = new QString;
    *height_of_plane_ = height_of_plane->displayText();
    circle_center_1 = new QString;
    *circle_center_1 = circle_center1->displayText();
    circle_center_2 = new QString;
    *circle_center_2 = circle_center2->displayText();
    circle_radius_ = new QString;
    *circle_radius_ = circle_radius->displayText();
    attach_gores_ = new QString;
    *attach_gores_ = attach_gores->currentText();
    cut_vent_ = new QString;
    *cut_vent_ = cut_vent->currentText();
    attach_strings_ = new QString;
    *attach_strings_ = attach_strings->currentText();
    num_chords_ = new QString;
    *num_chords_ = num_chords->displayText();
    init_pos_load_1 = new QString;
    *init_pos_load_1 = init_pos_load1->displayText();
    init_pos_load_2 = new QString;
    *init_pos_load_2 = init_pos_load2->displayText();
    init_pos_load_3 = new QString;
    *init_pos_load_3 = init_pos_load3->displayText();
    install_strings_toRGB_ = new QString;
    *install_strings_toRGB_ = install_strings_toRGB->currentText();
    body_index_ = new QString;
    *body_index_ = body_index->displayText();

    gpu_solver_ = new QString;
    *gpu_solver_ = gpu_solver->currentText();
    fluid_solver_ = new QString;
    *fluid_solver_ = fluid_solver->currentText();
    use_porosity_ = new QString;
    *use_porosity_ = use_porosity->currentText();
    viscous_param_ = new QString;
    *viscous_param_ = viscous_param->displayText();
    inertial_param_ = new QString;
    *inertial_param_ = inertial_param->displayText();
    smooth_radius_ = new QString;
    *smooth_radius_ = smooth_radius->displayText();

    payload_ = new QString;
    *payload_ = payload->displayText();
    sub_step_num_ = new QString;
    *sub_step_num_ = sub_step_num->displayText();
    area_density_ = new QString;
    *area_density_ = area_density->displayText();

    fab_spring_const_ = new QString;
    *fab_spring_const_ = fab_spring_const->displayText();
    fab_damping_const_ = new QString;
    *fab_damping_const_ = fab_damping_const->displayText();
    fab_friction_const_ = new QString;
    *fab_friction_const_ = fab_friction_const->displayText();
    fab_point_mass_ = new QString;
    *fab_point_mass_ = fab_point_mass->displayText();
    fab_thickness_ = new QString;
    *fab_thickness_ = fab_thickness->displayText();
    fab_rounding_tol_ = new QString;
    *fab_rounding_tol_ = fab_rounding_tol->displayText();

    str_spring_const_ = new QString;
    *str_spring_const_ = str_spring_const->displayText();
    str_damping_const_ = new QString;
    *str_damping_const_ = str_damping_const->displayText();
    str_friction_const_ = new QString;
    *str_friction_const_ = str_friction_const->displayText();
    str_point_mass_ = new QString;
    *str_point_mass_ = str_point_mass->displayText();
    str_thickness_ = new QString;
    *str_thickness_ = str_thickness->displayText();
    str_rounding_tol_ = new QString;
    *str_rounding_tol_ = str_rounding_tol->displayText();

    //STRAIN LIMIT NOT INCLUDED - WAITING FOR MORE DEVELOPED CODE

    lower_type_of_dirichlet_ = new QString;
    *lower_type_of_dirichlet_ = lower_type_of_dirichlet->currentText();
    velocity_1 = new QString;
    *velocity_1 = velocity1->displayText();
    velocity_2 = new QString;
    *velocity_2 = velocity2->displayText();
    velocity_3 = new QString;
    *velocity_3 = velocity3->displayText();
    pressure_ = new QString;
    *pressure_ = pressure->displayText();
    upper_type_of_dirichlet_ = new QString;
    *upper_type_of_dirichlet_ = upper_type_of_dirichlet->currentText();

    yz_movie_ = new QString;
    *yz_movie_ = yz_movie->currentText();
    xz_movie_ = new QString;
    *xz_movie_ = xz_movie->currentText();
    xy_movie_ = new QString;
    *xy_movie_ = xy_movie->currentText();
    velocity_vector_ = new QString;
    *velocity_vector_ = velocity_vector->currentText();
    surface_stress_ = new QString;
    *surface_stress_ = surface_stress->currentText();

    debug_ = new QString;
    *debug_ = debug->currentText();
    debug_string_space1_ = new QString;
    *debug_string_space1_ = debug_string_space1->displayText();
    debug_string_space2_ = new QString;
    *debug_string_space2_ = debug_string_space2->displayText();
    debug_string_space3_ = new QString;
    *debug_string_space3_ = debug_string_space3->displayText();
    debug_string_space4_ = new QString;
    *debug_string_space4_ = debug_string_space4->displayText();
    debug_string_space5_ = new QString;
    *debug_string_space5_ = debug_string_space5->displayText();
    debug_string_space6_ = new QString;
    *debug_string_space6_ = debug_string_space6->displayText();
    debug_string_space7_ = new QString;
    *debug_string_space7_ = debug_string_space7->displayText();
    debug_string_space8_ = new QString;
    *debug_string_space8_ = debug_string_space8->displayText();
    debug_string_space9_ = new QString;
    *debug_string_space9_ = debug_string_space9->displayText();
    debug_string_space10_ = new QString;
    *debug_string_space10_ = debug_string_space10->displayText();
    debug_string_space11_ = new QString;
    *debug_string_space11_ = debug_string_space11->displayText();
    debug_string_space12_ = new QString;
    *debug_string_space12_ = debug_string_space12->displayText();
    debug_string_space13_ = new QString;
    *debug_string_space13_ = debug_string_space13->displayText();

    sample_line_type_ = new QString;
    *sample_line_type_ = sample_line_type->displayText();
    sample_line_coord_1 = new QString;
    *sample_line_coord_1 = sample_line_coord1->displayText();
    sample_line_coord_2 = new QString;
    *sample_line_coord_2 = sample_line_coord2->displayText();
    start_step_ = new QString;
    *start_step_ = start_step->displayText();
    end_step_ = new QString;
    *end_step_ = end_step->displayText();







private slots:


    //QWizardPage* createmainpage();
    //void createmainpage();

    //QWizardPage* createfirstpage();
    //void createfirstpage();


    void Write()
    {
        QFile Output_txt_file("/Users/Kyle/Parachute_GUIs/Output_Files/input-file.txt"); //kyle's mac
        //QFile iFluidtext("./iFluid.txt"); //lambda

        if (!Output_txt_file.open(QIODevice::WriteOnly | QIODevice::Text))
        {
            qDebug() << "Could not open input-file.txt\n";
            return;
        }


        *dom_lim_0_first = first_bounds0->displayText();
        *dom_lim_0_last = last_bounds0->displayText();

        *dom_lim_1_first = first_bounds1->displayText();
        *dom_lim_1_last = last_bounds1->displayText();


        *dom_lim_2_first = first_bounds2->displayText();
        *dom_lim_2_last = last_bounds2->displayText();





        *compgrid_1 = grid_coord1->displayText();
        *compgrid_2 = grid_coord2->displayText();
        *compgrid_3 = grid_coord3->displayText();


        *lowerbound_0 = lowerbound0->currentText();
        *upperbound_0 = upperbound0->currentText();
        *lowerbound_1 = lowerbound1->currentText();
        *upperbound_1 = upperbound1->currentText();
        *lowerbound_2 = lowerbound2->currentText();
        *upperbound_2 = upperbound2->currentText();


        *max_time_ = max_time->displayText();
        *max_step_ = max_step->displayText();
        *print_interval_ = print_interval->displayText();
        *mv_frame_interval_ = mv_frame_interval->displayText();
        *CFL_factor_ = CFL_factor->displayText();
        *redistribution_interval_ = redistribution_interval->displayText();
        *turn_onoff_redist_int_ = turn_onoff_redist_int->currentText();


        *projection_ = projection->currentText();
        *advection_order_ = advection_order->displayText();
        *density_and_visc_1 = density_and_visc1->displayText();
        *density_and_visc_2 = density_and_visc2->displayText();
        *gravity_ = gravity->displayText();


        *add_rigbody_ = add_rigbody->currentText();

        *num_rigbodies_ = num_rigbodies->displayText();

        *type_of_rigbody_ = type_of_rigbody->currentText();

        *center_of_rigbody_1 = center_of_rigbody1->displayText();

        *center_of_rigbody_2 = center_of_rigbody2->displayText();

        *center_of_rigbody_3 = center_of_rigbody3->displayText();

        *radius_of_rigbody_1 = radius_of_rigbody1->displayText();

        *radius_of_rigbody_2 = radius_of_rigbody2->displayText();

        *radius_of_rigbody_3 = radius_of_rigbody3->displayText();

        *preset_motion_ = preset_motion->currentText();

        *dynamic_motion_ = dynamic_motion->currentText();

        *direction_of_motion_1 = direction_of_motion1->displayText();

        *direction_of_motion_2 = direction_of_motion2->displayText();

        *direction_of_motion_3 = direction_of_motion3->displayText();

        *total_mass_ = total_mass->displayText();

        *init_center_mass_1 = init_center_mass1->displayText();

        *init_center_mass_2 = init_center_mass2->displayText();

        *init_center_mass_3 = init_center_mass3->displayText();

        *init_center_mass_vel_1 = init_center_mass_vel1->displayText();

        *init_center_mass_vel_2 = init_center_mass_vel2->displayText();

        *init_center_mass_vel_3 = init_center_mass_vel3->displayText();


        *num_canopy_surfaces_ = num_canopy_surfaces->displayText();

        *canopy_surf_type_ = canopy_surf_type->currentText();

        *canopy_boundary_ = canopy_boundary->currentText();

        *height_of_plane_ = height_of_plane->displayText();

        *circle_center_1 = circle_center1->displayText();

        *circle_center_2 = circle_center2->displayText();

        *circle_radius_ = circle_radius->displayText();

        *attach_gores_ = attach_gores->currentText();

        *cut_vent_ = cut_vent->currentText();

        *attach_strings_ = attach_strings->currentText();

        *num_chords_ = num_chords->displayText();

        *init_pos_load_1 = init_pos_load1->displayText();

        *init_pos_load_2 = init_pos_load2->displayText();

        *init_pos_load_3 = init_pos_load3->displayText();

        *install_strings_toRGB_ = install_strings_toRGB->currentText();

        *body_index_ = body_index->displayText();


        *gpu_solver_ = gpu_solver->currentText();

        *fluid_solver_ = fluid_solver->currentText();

        *use_porosity_ = use_porosity->currentText();

        *viscous_param_ = viscous_param->displayText();

        *inertial_param_ = inertial_param->displayText();

        *smooth_radius_ = smooth_radius->displayText();


        *payload_ = payload->displayText();

        *sub_step_num_ = sub_step_num->displayText();

        *area_density_ = area_density->displayText();


        *fab_spring_const_ = fab_spring_const->displayText();

        *fab_damping_const_ = fab_damping_const->displayText();

        *fab_friction_const_ = fab_friction_const->displayText();

        *fab_point_mass_ = fab_point_mass->displayText();

        *fab_thickness_ = fab_thickness->displayText();

        *fab_rounding_tol_ = fab_rounding_tol->displayText();


        *str_spring_const_ = str_spring_const->displayText();

        *str_damping_const_ = str_damping_const->displayText();

        *str_friction_const_ = str_friction_const->displayText();

        *str_point_mass_ = str_point_mass->displayText();

        *str_thickness_ = str_thickness->displayText();

        *str_rounding_tol_ = str_rounding_tol->displayText();

        //STRAIN LIMIT NOT INCLUDED - WAITING FOR MORE DEVELOPED CODE


        *lower_type_of_dirichlet_ = lower_type_of_dirichlet->currentText();

        *velocity_1 = velocity1->displayText();

        *velocity_2 = velocity2->displayText();

        *velocity_3 = velocity3->displayText();

        *pressure_ = pressure->displayText();

        *upper_type_of_dirichlet_ = upper_type_of_dirichlet->currentText();


        *yz_movie_ = yz_movie->currentText();

        *xz_movie_ = xz_movie->currentText();

        *xy_movie_ = xy_movie->currentText();

        *velocity_vector_ = velocity_vector->currentText();

        *surface_stress_ = surface_stress->currentText();


        *debug_ = debug->currentText();

        *debug_string_space1_ = debug_string_space1->displayText();

        *debug_string_space2_ = debug_string_space2->displayText();

        *debug_string_space3_ = debug_string_space3->displayText();

        *debug_string_space4_ = debug_string_space4->displayText();

        *debug_string_space5_ = debug_string_space5->displayText();

        *debug_string_space6_ = debug_string_space6->displayText();

        *debug_string_space7_ = debug_string_space7->displayText();

        *debug_string_space8_ = debug_string_space8->displayText();

        *debug_string_space9_ = debug_string_space9->displayText();

        *debug_string_space10_ = debug_string_space10->displayText();

        *debug_string_space11_ = debug_string_space11->displayText();

        *debug_string_space12_ = debug_string_space12->displayText();

        *debug_string_space13_ = debug_string_space13->displayText();


        *sample_line_type_ = sample_line_type->displayText();

        *sample_line_coord_1 = sample_line_coord1->displayText();

        *sample_line_coord_2 = sample_line_coord2->displayText();

        *start_step_ = start_step->displayText();

        *end_step_ = end_step->displayText();





        //Output all
        QTextStream out(&Output_txt_file);

        out << "Domain limit in 0-th Dimension: " << *dom_lim_0_first << " " << *dom_lim_0_last << "\n";
        out << "Domain limit in 1-th Dimension: " << *dom_lim_1_first << " " << *dom_lim_1_last << "\n";
        out << "Domain limit in 2-th Dimension: " << *dom_lim_2_first << " " << *dom_lim_2_last << "\n";





        out << "Computational Grid: " << *compgrid_1 << " " << *compgrid_2 << " " << *compgrid_3 << "\n";
        out << "Lower boundary in 0-th dimension: " << *lowerbound_0 << "\n";
        out << "Upper boundary in 0-th dimension: " << *upperbound_0 << "\n";
        out << "Lower boundary in 1-th dimension: " << *lowerbound_1 << "\n";
        out << "Upper boundary in 1-th dimension: " << *upperbound_1 << "\n";
        out << "Lower boundary in 2-th dimension: " << *lowerbound_2 << "\n";
        out << "Upper boundary in 2-th dimension: " << *upperbound_2 << "\n";

        out << "\n";

        out << "Max time: " << *max_time_ << "\n";
        out << "Max step: " << *max_step_ << "\n";
        out << "Print interval: " << *print_interval_ << "\n";
        out << "Movie frame interval: " << *mv_frame_interval_ << "\n";
        out << "CFL factor: " << *CFL_factor_ << "\n";
        out << "Redistribution interval: " << *redistribution_interval_ << "\n";
        out << "Type yes to turn off auto-redistribution: " << *turn_onoff_redist_int_ << "\n";

        out << "\n";

        out <<"**************Fluid Parameters**************" << "\n";
        out << "Enter projection type: " << *projection_ << "\n";
        out << "Enter advection order: " << *advection_order_ << "\n";
        out << "Enter density and viscosity of the fluid: " << *density_and_visc_1 << " " << *density_and_visc_2 << "\n";
        out << "Enter gravity: " << "0" << " " << "0" << " " << *gravity_ << "\n";

        out << "\n";

        out <<"**************Rigid Body Parameters**************" << "\n";
        out << "Enter yes to add rigid body: " << *projection_ << "\n";              //IF STATEMENT HERE FOR BOX/BALL/HUMAN?
        out << "Enter the number of rigid bodies: " << *num_rigbodies_ << "\n";
        out << "For rigid body 1: " << "\n";
        out << "Enter type of rigid body: " << *type_of_rigbody_ << "\n";
        out << "Enter center of the sphere: " << *center_of_rigbody_1 << " " << *center_of_rigbody_2 << " " << *center_of_rigbody_3 << "\n";
        out << "Enter radius of the sphere: " << *radius_of_rigbody_1 << " " << *radius_of_rigbody_2 << " " << *radius_of_rigbody_3 << "\n";
        out << "Type yes if motion is preset: " << *preset_motion_ << "\n";
        out << "Enter type of dynamic motion: " << *dynamic_motion_ << "\n";
        out << "Enter the direction of motion: " << *direction_of_motion_1 << " " << *direction_of_motion_2 << " " << *direction_of_motion_3 << "\n";
        out << "Enter the total mass for rigid body: " << *total_mass_ << "\n";
        out << "Enter the initial center of mass for rigid body: " << *init_center_mass_1 << " " << *init_center_mass_2 << " " << *init_center_mass_3 << "\n";
        out << "Enter the initial center of mass velocity: " << *init_center_mass_vel_1 << " " << *init_center_mass_vel_2 << " " << *init_center_mass_vel_3 << "\n";

        out << "\n";

        out <<"**************Parachute Parameters**************" << "\n";
        out << "Enter number of canopy surfaces: " << *num_canopy_surfaces_ << "\n";
        out << "Enter canopy surface type: " << *canopy_surf_type_ << "\n";
        out << "Enter canopy surface type: " << *canopy_surf_type_ << "\n";
        out << "Enter type of canopy boundary: " << *canopy_boundary_ << "\n";
        out << "Enter the height of the plane: " << *height_of_plane_ << "\n";
        out << "Enter circle center: " << *circle_center_1 << " " << *circle_center_2 << "\n";
        out << "Enter circle radius: " << *circle_radius_ << "\n";
        out << "Enter yes to attach gores to canopy: " << *attach_gores_ << "\n";
        out << "Enter yes to cut a vent on canopy: " << *cut_vent_ << "\n";
        out << "Enter yes to attach strings to canopy: " << *attach_strings_ << "\n";
        out << "Enter number of chords: " << *num_chords_ << "\n";
        out << "Enter initial position of load: " << *init_pos_load_1 << " " << *init_pos_load_2 << " " << *init_pos_load_3 << "\n";
        out << "Enter yes to install the strings to RGB: " << *install_strings_toRGB_ << "\n";
        out << "Enter the body index of the target RGB: " << *body_index_ << "\n";

        out << "\n";

        out <<"**************Airfoil Parameters**************" << "\n";
        out << "Enter yes to use GPU solver: " << *gpu_solver_ << "\n";
        out << "Entering yes to turn off fluid solver: " << *fluid_solver_ << "\n";
        out << "Enter yes to use porosity: " << *use_porosity_ << "\n";
        out << "Enter viscous parameter: " << *viscous_param_ << "\n";
        out << "Enter inertial parameter: " << *inertial_param_ << "\n";
        out << "Enter factor of smoothing radius: " << *smooth_radius_ << "\n";
        out << "\n";
        out << "Enter payload: " << *payload_ << "\n";
        out << "Enter interior sub step number: " << *sub_step_num_ << "\n";
        out << "Enter area density of canopy: " << *area_density_ << "\n";
        out << "\n";
        out << "Enter fabric spring constant: " << *fab_spring_const_ << "\n";
        out << "Enter fabric damping constant: " << *fab_damping_const_ << "\n";
        out << "Enter fabric friction constant: " << *fab_friction_const_ << "\n";
        out << "Enter fabric point mass: " << *fab_point_mass_ << "\n";
        out << "Enter fabric thickness: " << *fab_thickness_ << "\n";
        out << "Enter fabric rounding tolerance: " << *fab_rounding_tol_ << "\n";
        out << "\n";
        out << "Enter string spring constant: " << *str_spring_const_ << "\n";
        out << "Enter string damping constant: " << *str_damping_const_ << "\n";
        out << "Enter string friction constant: " << *str_friction_const_ << "\n";
        out << "Enter string point mass: " << *str_point_mass_ << "\n";
        out << "Enter string thickness: " << *str_thickness_ << "\n";
        out << "Enter string rounding tolerance: " << *str_rounding_tol_ << "\n";

        out << "Enter strain limit: " << "0.3" << "\n";
        out << "Enter strain rate limit: " << "0.1" << "\n";

        out << "\n";

        out <<"**************Boundary Parameters**************" << "\n";
        out << "For lower boundary in 2-th dimension" << "\n";
        out << "Enter type of Dirichlet boundary: " << *lower_type_of_dirichlet_ << "\n";
        out << "Enter velocity: " << *velocity_1 << " " << *velocity_2 << " " << *velocity_3 << "\n";
        out << "Enter pressure: " << *pressure_ << "\n";
        out << "For upper boundary in 2-th dimension" << "\n";
        out << "Enter type of Dirichlet boundary: " << *upper_type_of_dirichlet_ << "\n";

        out << "\n";

        out <<"**************Movie Options**************" << "\n";
        out << "Type y to make yz cross section movie: " << *yz_movie_ << "\n";
        out << "Type y to make xz cross section movie: " << *xz_movie_ << "\n";
        out << "Type y to make xy cross section movie: " << *xy_movie_ << "\n";
        out << "Type y to make vector velocity field movie: " << *velocity_vector_ << "\n";
        out << "Type y to plot surface stress: " << *surface_stress_ << "\n";

        out << "\n";

        out <<"**************Debugging Options**************" << "\n";
        out << "Enter yes for debugging: " << *debug_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space1_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space2_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space3_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space4_ << "\n";
        out << "\n";
        out << "Enter the debugging string: " << *debug_string_space5_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space6_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space7_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space8_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space9_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space10_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space11_ << "\n";
        out << "Enter the debugging string: " << *debug_string_space12_ << "\n";
        out << "\n";
        out << "Enter the debugging string: " << *debug_string_space13_ << "\n";
        out << "Enter the sample line type: " << *sample_line_type_ << "\n";
        out << "Enter the sample line coordinate: " << *sample_line_coord_1 << " " << *sample_line_coord_2 << "\n";
        out << "Enter the start step for sample: " << *start_step_ << "\n";
        out << "Enter the end step for sample: " << *end_step_ << "\n";


    }

 */



#endif // C9_WIZARD_H