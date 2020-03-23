#include "c9_wizard.h"

C9_Wizard::C9_Wizard(QWidget *parent)
    : QWizard(parent)
{
    intro = new IntroPage;
    intro->initializePage();
    addPage(intro);

    first = new FirstPage;
    first->initializePage();
    addPage(first);


    second = new SecondPage;
    second->initializePage();
    C9_Wizard::addPage(second);

    third = new ThirdPage;
    third->initializePage();
    C9_Wizard::addPage(third);

    fourth = new FourthPage;
    fourth->initializePage();
    C9_Wizard::addPage(fourth);

    fifth = new FifthPage;
    fifth->initializePage();
    C9_Wizard::addPage(fifth);

    sixth = new SixthPage;
    sixth->initializePage();
    C9_Wizard::addPage(sixth);

    seventh = new SeventhPage;
    seventh->initializePage();
    C9_Wizard::addPage(seventh);

    DEBUG = new DebugPage;
    DEBUG->initializePage();
    C9_Wizard::addPage(DEBUG);



    //addPage(new IntroPage);
    //addPage(new FirstPage);
    //addPage(new SecondPage);
    //addPage(new ThirdPage);
    //addPage(new FourthPage);
    //addPage(new FifthPage);
    //addPage(new SixthPage);
    //addPage(new SeventhPage);
    //addPage(new DebugPage);


    connect(this->button(FinishButton),SIGNAL(clicked()), this, SLOT(Write()));


    //setPixmap(QWizard::BannerPixmap, QPixmap(":/images/banner.png"));
    //setPixmap(QWizard::BackgroundPixmap, QPixmap(":/images/background.png"));

    setWindowTitle(tr("C9 Wizard"));
}






IntroPage::IntroPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module");
    //setPixmap(QWizard::WatermarkPixmap, QPixmap(":/images/watermark1.png"));

    mainlabel = new QLabel("This wizard will help you write an in-file for the parachute type: C9");
    //label->setWordWrap(true);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(mainlabel);
    setLayout(layout);
}

//THE FIRST PAGE INCLUDES DOMAIN LIMITS AND LOWER/UPPER BOUNDARIES FOR DIMENSTIONS 0, 1 AND 2

FirstPage::FirstPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 1");


      //DOMAIN IN 0th DIMENSION
      QLabel *dom_lim_0 = new QLabel("Domain limit in the 0th Dimension");
      dom_lim_0->setText("Domain limit in the 0th Dimension");

      QHBoxLayout *hlayout1 = new QHBoxLayout;
      QLabel *bounds0 = new QLabel("Enter Bounds:");
      bounds0->setText("Enter Bounds:");

      first_bounds0 = new QLineEdit;
      first_bounds0->setText("-2");
      first_bounds0->setFixedWidth(50);

      last_bounds0 = new QLineEdit;
      last_bounds0->setText("14");
      last_bounds0->setFixedWidth(50);

      QSpacerItem *space1 = new QSpacerItem(500,1);

      hlayout1->addWidget(bounds0);
      hlayout1->addWidget(first_bounds0);
      hlayout1->addWidget(last_bounds0);
      hlayout1->addSpacerItem(space1);

      QVBoxLayout *vlayout1 = new QVBoxLayout;

      vlayout1->addWidget(dom_lim_0);
      vlayout1->addLayout(hlayout1);


      //DOMAIN IN 1st DIMENSION

      QLabel *dom_lim_1 = new QLabel("Domain limit in the 1st Dimension");
      dom_lim_1->setText("Domain limit in the 1st Dimension");

      QHBoxLayout *hlayout2 = new QHBoxLayout;
      QLabel *bounds1 = new QLabel("Enter Bounds:");
      bounds1->setText("Enter Bounds:");

      first_bounds1 = new QLineEdit;
      first_bounds1->setText("-2");
      first_bounds1->setFixedWidth(50);
      last_bounds1 = new QLineEdit;
      last_bounds1->setText("14");
      last_bounds1->setFixedWidth(50);

      //QSpacerItem *space2 = new QSpacerItem(500,1);

      hlayout2->addWidget(bounds1);
      hlayout2->addWidget(first_bounds1);
      hlayout2->addWidget(last_bounds1);
      hlayout2->addSpacerItem(space1);

      QVBoxLayout *vlayout2 = new QVBoxLayout;

      //QSpacerItem *space3 = new QSpacerItem(500,10);

      vlayout2->addWidget(dom_lim_1);
      vlayout2->addLayout(hlayout2);
      vlayout2->addSpacerItem(space1);


      //DOMAIN IN 2nd DIMENSION

      QLabel *dom_lim_2 = new QLabel("Domain limit in the 2nd Dimension");
      dom_lim_2->setText("Domain limit in the 2nd Dimension");

      QHBoxLayout *hlayout3 = new QHBoxLayout;
      QLabel *bounds2 = new QLabel("Enter Bounds:");
      bounds2->setText("Enter Bounds:");

      first_bounds2 = new QLineEdit;
      first_bounds2->setText("-12");
      first_bounds2->setFixedWidth(50);
      last_bounds2 = new QLineEdit;
      last_bounds2->setText("24");
      last_bounds2->setFixedWidth(50);

      //QSpacerItem *space4 = new QSpacerItem(500,1);

      hlayout3->addWidget(bounds2);
      hlayout3->addWidget(first_bounds2);
      hlayout3->addWidget(last_bounds2);
      hlayout3->addSpacerItem(space1);

      //QSpacerItem *space3 = new QSpacerItem(500,10);

      vlayout2->addWidget(dom_lim_2);
      vlayout2->addLayout(hlayout3);
      vlayout2->addSpacerItem(space1);

      //COMPUTATIONAL GRID

      QLabel *compgrid = new QLabel("Enter Computational Grid:");

      QHBoxLayout *hlayout4 = new QHBoxLayout;

      grid_coord1 = new QLineEdit;
      grid_coord1->setText("80");
      grid_coord1->setFixedWidth(50);
      grid_coord2 = new QLineEdit;
      grid_coord2->setText("80");
      grid_coord2->setFixedWidth(50);
      grid_coord3 = new QLineEdit;
      grid_coord3->setText("180");
      grid_coord3->setFixedWidth(50);

     // QSpacerItem *space4 = new QSpacerItem(500,20);

      hlayout4->addWidget(compgrid);
      hlayout4->addWidget(grid_coord1);
      hlayout4->addWidget(grid_coord2);
      hlayout4->addWidget(grid_coord3);
      hlayout4->addSpacerItem(space1);

      //UPPER AND LOWER BOUNDARIES

      QLabel *lowerbound_0 = new QLabel("Lower Boundary in 0th Dimension:");

      lowerbound0 = new QComboBox;
      lowerbound0->addItem("PERIODIC_BOUNDARY");
      lowerbound0->addItem("NEUMANN_BOUNDARY");
      lowerbound0->addItem("DIRICHLET_BOUNDARY");

      QHBoxLayout *lowerbox_0 = new QHBoxLayout;
      lowerbox_0->addWidget(lowerbound_0);
      lowerbox_0->addWidget(lowerbound0);

      QLabel *upperbound_0 = new QLabel("Upper Boundary in 0th Dimension:");

      upperbound0 = new QComboBox;
      upperbound0->addItem("PERIODIC_BOUNDARY");
      upperbound0->addItem("NEUMANN_BOUNDARY");
      upperbound0->addItem("DIRICHLET_BOUNDARY");

      QHBoxLayout *upperbox_0 = new QHBoxLayout;
      upperbox_0->addWidget(upperbound_0);
      upperbox_0->addWidget(upperbound0);

      QLabel *lowerbound_1 = new QLabel("Lower Boundary in 1st Dimension:");

      lowerbound1 = new QComboBox;
      lowerbound1->addItem("PERIODIC_BOUNDARY");
      lowerbound1->addItem("NEUMANN_BOUNDARY");
      lowerbound1->addItem("DIRICHLET_BOUNDARY");

      QHBoxLayout *lowerbox_1 = new QHBoxLayout;
      lowerbox_1->addWidget(lowerbound_1);
      lowerbox_1->addWidget(lowerbound1);

      QLabel *upperbound_1 = new QLabel("Upper Boundary in 1st Dimension:");

      upperbound1 = new QComboBox;
      upperbound1->addItem("PERIODIC_BOUNDARY");
      upperbound1->addItem("NEUMANN_BOUNDARY");
      upperbound1->addItem("DIRICHLET_BOUNDARY");

      QHBoxLayout *upperbox_1 = new QHBoxLayout;
      upperbox_1->addWidget(upperbound_1);
      upperbox_1->addWidget(upperbound1);




      QLabel *lowerbound_2 = new QLabel("Lower Boundary in 2nd Dimension and Type:");

      lowerbound2 = new QComboBox;
      lowerbound2->addItem("DIRICHLET_BOUNDARY");
      lowerbound2->addItem("NEUMANN_BOUNDARY");
      lowerbound2->addItem("PERIODIC_BOUNDARY");

      lowerbound2_type = new QComboBox;
      lowerbound2_type->addItem("CONSTANT_STATE");
      lowerbound2_type->addItem("FLOW_THROUGH");


      QHBoxLayout *lowerbox_2 = new QHBoxLayout;
      lowerbox_2->addWidget(lowerbound_2);
      lowerbox_2->addWidget(lowerbound2);
      lowerbox_2->addWidget(lowerbound2_type);

      QLabel *upperbound_2 = new QLabel("Upper Boundary in 2nd Dimension and Type:");

      upperbound2 = new QComboBox;
      upperbound2->addItem("DIRICHLET_BOUNDARY");
      upperbound2->addItem("NEUMANN_BOUNDARY");
      upperbound2->addItem("PERIODIC_BOUNDARY");

      upperbound2_type = new QComboBox;
      upperbound2_type->addItem("FLOW_THROUGH");
      upperbound2_type->addItem("CONSTANT_STATE");


      QHBoxLayout *upperbox_2 = new QHBoxLayout;
      upperbox_2->addWidget(upperbound_2);
      upperbox_2->addWidget(upperbound2);
      upperbox_2->addWidget(upperbound2_type);

      QVBoxLayout *vlayout3 = new QVBoxLayout;


      vlayout3->addSpacerItem(space1);
      vlayout3->addLayout(lowerbox_0);
      vlayout3->addLayout(upperbox_0);
      vlayout3->addLayout(lowerbox_1);
      vlayout3->addLayout(upperbox_1);
      vlayout3->addLayout(lowerbox_2);
      vlayout3->addLayout(upperbox_2);


      QVBoxLayout *page1layout = new QVBoxLayout;

      page1layout->addLayout(vlayout1);
      page1layout->addLayout(vlayout2);
      page1layout->addLayout(hlayout4);
      page1layout->addLayout(vlayout3);

      setLayout(page1layout);

}

//THE SECOND PAGE INCLUDES MAX TIME, MAX STEP, PRINT/MOVIE/REDIST. INTERVALS, AUTO-REDISTRIBUTION, CFL FACTOR AND FLUID PARAMETERS

SecondPage::SecondPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 2");

    QSpacerItem *space1 = new QSpacerItem(500,1);

    //MAX TIME

    QLabel *max_time_ = new QLabel("Max time:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    max_time = new QLineEdit;
    max_time->setText("4.0");
    max_time->setFixedWidth(50);

    hlayout1->addWidget(max_time_);
    hlayout1->addWidget(max_time);
    hlayout1->addSpacerItem(space1);

    //MAX STEP

    QLabel *max_step_ = new QLabel("Max step:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    max_step = new QLineEdit;
    max_step->setText("1000");
    max_step->setFixedWidth(50);

    hlayout2->addWidget(max_step_);
    hlayout2->addWidget(max_step);
    hlayout2->addSpacerItem(space1);

    //PRINT INTERVAL
    QLabel *print_interval_ = new QLabel("Print interval:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    print_interval = new QLineEdit;
    print_interval->setText("0.05");
    print_interval->setFixedWidth(50);

    hlayout3->addWidget(print_interval_);
    hlayout3->addWidget(print_interval);
    hlayout3->addSpacerItem(space1);

    //MOVIE FRAME INTERVAL
    QLabel *mv_frame_interval_ = new QLabel("Movie frame interval:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    mv_frame_interval = new QLineEdit;
    mv_frame_interval->setText("0.05");
    mv_frame_interval->setFixedWidth(50);

    hlayout4->addWidget(mv_frame_interval_);
    hlayout4->addWidget(mv_frame_interval);
    hlayout4->addSpacerItem(space1);

    //CFL FACTOR
    QLabel *CFL_factor_ = new QLabel("CFL factor:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    CFL_factor = new QLineEdit;
    CFL_factor->setText("0.5");
    CFL_factor->setFixedWidth(50);

    hlayout5->addWidget(CFL_factor_);
    hlayout5->addWidget(CFL_factor);
    hlayout5->addSpacerItem(space1);

    //REDISTRIBUTION INTERVAL
    QLabel *redistribution_interval_ = new QLabel("Redistribution interval:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    redistribution_interval = new QLineEdit;
    redistribution_interval->setText("10000000");
    redistribution_interval->setFixedWidth(100);

    hlayout6->addWidget(redistribution_interval_);
    hlayout6->addWidget(redistribution_interval);
    hlayout6->addSpacerItem(space1);

    //TURN OFF AUTOREDISTRIBUTION
    QLabel *turn_onoff_redist_int_ = new QLabel("Turn off auto-redistribution?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    turn_onoff_redist_int = new QComboBox;
    turn_onoff_redist_int->addItem("Yes");
    turn_onoff_redist_int->addItem("No");
    turn_onoff_redist_int->setFixedWidth(100);

    hlayout7->addWidget(turn_onoff_redist_int_);
    hlayout7->addWidget(turn_onoff_redist_int);
    hlayout7->addSpacerItem(space1);

    //iFLUID PARAMETERS
    QLabel *ifluid_ = new QLabel("iFluid Parameters");

    //PROJECTION TYPE
    QLabel *projection_ = new QLabel("Enter projection type:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    projection = new QComboBox;
    projection->addItem("SIMPLE");
    projection->addItem("BELL_COLELLA");
    projection->addItem("KIM_MOIN");
    projection->addItem("PEROT_BOTELLA");

    hlayout8->addWidget(projection_);
    hlayout8->addWidget(projection);
    hlayout8->addSpacerItem(space1);


    //ADVECTION ORDER
    QLabel *advection_order_ = new QLabel("Enter advection order:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    advection_order = new QLineEdit;
    advection_order->setText("4");
    advection_order->setFixedWidth(50);

    hlayout9->addWidget(advection_order_);
    hlayout9->addWidget(advection_order);
    hlayout9->addSpacerItem(space1);

    //DENSITY AND VISCOSITY
    QLabel *density_and_visc_ = new QLabel("Enter density and viscosity of fluid:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    density_and_visc1 = new QLineEdit;
    density_and_visc1->setText("1.29");
    density_and_visc1->setFixedWidth(50);

    density_and_visc2 = new QLineEdit;
    density_and_visc2->setText("0.00001813");
    density_and_visc2->setFixedWidth(100);

    hlayout10->addWidget(density_and_visc_);
    hlayout10->addWidget(density_and_visc1);
    hlayout10->addWidget(density_and_visc2);
    hlayout10->addSpacerItem(space1);


    //GRAVITY
    QLabel *gravity_ = new QLabel("Enter gravity:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    gravity = new QLineEdit;
    gravity->setText("-9.8");
    gravity->setFixedWidth(80);

    hlayout11->addWidget(gravity_);
    hlayout11->addWidget(gravity);
    hlayout11->addSpacerItem(space1);


    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addWidget(ifluid_);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);


    QVBoxLayout *page2layout = new QVBoxLayout;

    page2layout->addLayout(vlayout1);

    setLayout(page2layout);


}

//THIRD PAGE INCLUDES RIGID BODY PARAMETERS

ThirdPage::ThirdPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 3");


    QSpacerItem *space1 = new QSpacerItem(500,10);

    //ADD RIGID BODY
    QLabel *add_rigbody_ = new QLabel("Add a rigid body?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    add_rigbody = new QComboBox;
    add_rigbody->addItem("Yes");
    add_rigbody->addItem("No");
    add_rigbody->setFixedWidth(100);

    hlayout1->addWidget(add_rigbody_);
    hlayout1->addWidget(add_rigbody);
    hlayout1->addSpacerItem(space1);

    //NUMBER OF RIGID BODIES
    QLabel *num_rigbodies_ = new QLabel("Enter the number of rigid bodies:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    num_rigbodies = new QLineEdit;
    num_rigbodies->setText("1");
    num_rigbodies->setFixedWidth(50);

    hlayout2->addWidget(num_rigbodies_);
    hlayout2->addWidget(num_rigbodies);
    hlayout2->addSpacerItem(space1);

    //FOR RIGID BODY 1

    QLabel *rig_body1_ = new QLabel("For rigid body 1:");

    //TYPE OF RIGID BODY
    QLabel *type_of_rigbody_ = new QLabel("Enter type of rigid body:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    type_of_rigbody = new QComboBox;
    type_of_rigbody->addItem("Sphere");
    type_of_rigbody->addItem("Box");
    type_of_rigbody->addItem("Human");
    type_of_rigbody->setFixedWidth(150);

    hlayout3->addWidget(type_of_rigbody_);
    hlayout3->addWidget(type_of_rigbody);
    hlayout3->addSpacerItem(space1);

    //CENTER OF RIGID BODY-SPHERE
    QLabel *center_of_rigbody_ = new QLabel("Enter center of the sphere:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    center_of_rigbody1 = new QLineEdit;
    center_of_rigbody1->setText("6.01");
    center_of_rigbody1->setFixedWidth(100);

    center_of_rigbody2= new QLineEdit;
    center_of_rigbody2->setText("6.01");
    center_of_rigbody2->setFixedWidth(100);

    center_of_rigbody3 = new QLineEdit;
    center_of_rigbody3->setText("12");
    center_of_rigbody3->setFixedWidth(100);

    hlayout4->addWidget(center_of_rigbody_);
    hlayout4->addWidget(center_of_rigbody1);
    hlayout4->addWidget(center_of_rigbody2);
    hlayout4->addWidget(center_of_rigbody3);
    hlayout4->addSpacerItem(space1);

    //RADIUS OF RIGID BODY-SPHERE
    QLabel *radius_of_rigbody_ = new QLabel("Enter radius of the sphere:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    radius_of_rigbody1 = new QLineEdit;
    radius_of_rigbody1->setText("0.5");
    radius_of_rigbody1->setFixedWidth(100);

    radius_of_rigbody2= new QLineEdit;
    radius_of_rigbody2->setText("0.5");
    radius_of_rigbody2->setFixedWidth(100);

    radius_of_rigbody3 = new QLineEdit;
    radius_of_rigbody3->setText("0.5");
    radius_of_rigbody3->setFixedWidth(100);

    hlayout5->addWidget(radius_of_rigbody_);
    hlayout5->addWidget(radius_of_rigbody1);
    hlayout5->addWidget(radius_of_rigbody2);
    hlayout5->addWidget(radius_of_rigbody3);
    hlayout5->addSpacerItem(space1);

    //PRESET MOTION
    QLabel *preset_motion_ = new QLabel("Is the motion preset?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    preset_motion = new QComboBox;
    preset_motion->addItem("No");
    preset_motion->addItem("Yes");
    preset_motion->setFixedWidth(100);

    hlayout6->addWidget(preset_motion_);
    hlayout6->addWidget(preset_motion);
    hlayout6->addSpacerItem(space1);

    //DYNAMIC MOTION
    QLabel *dynamic_motion_ = new QLabel("Enter type of dynamic motion:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    dynamic_motion = new QComboBox;
    dynamic_motion->addItem("COM_MOTION");
    dynamic_motion->addItem("Other");
    dynamic_motion->setFixedWidth(150);

    hlayout7->addWidget(dynamic_motion_);
    hlayout7->addWidget(dynamic_motion);
    hlayout7->addSpacerItem(space1);

    //DIRECTION OF MOTION
    QLabel *direction_of_motion_ = new QLabel("Enter direction of the motion:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    direction_of_motion1 = new QLineEdit;
    direction_of_motion1->setText("0");
    direction_of_motion1->setFixedWidth(50);

    direction_of_motion2= new QLineEdit;
    direction_of_motion2->setText("0");
    direction_of_motion2->setFixedWidth(50);

    direction_of_motion3 = new QLineEdit;
    direction_of_motion3->setText("1");
    direction_of_motion3->setFixedWidth(50);

    hlayout8->addWidget(direction_of_motion_);
    hlayout8->addWidget(direction_of_motion1);
    hlayout8->addWidget(direction_of_motion2);
    hlayout8->addWidget(direction_of_motion3);
    hlayout8->addSpacerItem(space1);

    //TOTAL MASS OF RIGID BODY
    //DIRECTION OF MOTION
    QLabel *total_mass_ = new QLabel("Enter the total mass of the rigid body:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    total_mass = new QLineEdit;
    total_mass->setText("100");
    total_mass->setFixedWidth(100);

    hlayout9->addWidget(total_mass_);
    hlayout9->addWidget(total_mass);
    hlayout9->addSpacerItem(space1);

    //INITIAL CENTER OF MASS
    QSpacerItem *space2 = new QSpacerItem(200,10);

    QLabel *init_center_mass_ = new QLabel("Enter initial center of mass for rigid body:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    init_center_mass1 = new QLineEdit;
    init_center_mass1->setText("6");
    init_center_mass1->setFixedWidth(50);

    init_center_mass2= new QLineEdit;
    init_center_mass2->setText("6");
    init_center_mass2->setFixedWidth(50);

    init_center_mass3 = new QLineEdit;
    init_center_mass3->setText("11.591");
    init_center_mass3->setFixedWidth(50);

    hlayout10->addWidget(init_center_mass_);
    hlayout10->addWidget(init_center_mass1);
    hlayout10->addWidget(init_center_mass2);
    hlayout10->addWidget(init_center_mass3);
    hlayout10->addSpacerItem(space2);


    //INITIAL CENTER OF MASS VELOCITY

    QLabel *init_center_mass_vel_ = new QLabel("Enter initial center of mass velocity:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    init_center_mass_vel1 = new QLineEdit;
    init_center_mass_vel1->setText("0");
    init_center_mass_vel1->setFixedWidth(50);

    init_center_mass_vel2= new QLineEdit;
    init_center_mass_vel2->setText("0");
    init_center_mass_vel2->setFixedWidth(50);

    init_center_mass_vel3 = new QLineEdit;
    init_center_mass_vel3->setText("0");
    init_center_mass_vel3->setFixedWidth(50);

    hlayout11->addWidget(init_center_mass_vel_);
    hlayout11->addWidget(init_center_mass_vel1);
    hlayout11->addWidget(init_center_mass_vel2);
    hlayout11->addWidget(init_center_mass_vel3);
    hlayout11->addSpacerItem(space1);


    QVBoxLayout *page3layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addWidget(rig_body1_);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);


    page3layout->addLayout(vlayout1);

    setLayout(page3layout);


}

//FOURTH PAGE INCLUDES PARACHUTE PARAMETERS

FourthPage::FourthPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 4");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    num_canopy_surfaces = new QLineEdit;
    num_canopy_surfaces->setText("1");
    num_canopy_surfaces->setFixedWidth(50);

    hlayout1->addWidget(num_canopy_surfaces_);
    hlayout1->addWidget(num_canopy_surfaces);
    hlayout1->addSpacerItem(space1);

    //CANOPY SURFACE TYPE
    QLabel *canopy_surf_type_ = new QLabel("Enter canopy surface type:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    canopy_surf_type = new QComboBox;
    canopy_surf_type->setFixedWidth(100);
    canopy_surf_type->addItem("FLAT ");
    canopy_surf_type->addItem("Other");

    hlayout2->addWidget(canopy_surf_type_);
    hlayout2->addWidget(canopy_surf_type);
    hlayout2->addSpacerItem(space1);

    //CANOPY BOUNDARY
    QLabel *canopy_boundary_ = new QLabel("Enter type of canopy boundary:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    canopy_boundary = new QComboBox;
    canopy_boundary->setFixedWidth(100);
    canopy_boundary->addItem("Circle");
    canopy_boundary->addItem("Other");

    hlayout3->addWidget(canopy_boundary_);
    hlayout3->addWidget(canopy_boundary);
    hlayout3->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    height_of_plane = new QLineEdit;
    height_of_plane->setText("18");
    height_of_plane->setFixedWidth(50);

    hlayout4->addWidget(height_of_plane_);
    hlayout4->addWidget(height_of_plane);
    hlayout4->addSpacerItem(space1);

    //CIRCLE CENTER
    QLabel *circle_center_ = new QLabel("Enter circle center:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    circle_center1 = new QLineEdit;
    circle_center1->setText("6");
    circle_center1->setFixedWidth(100);

    circle_center2 = new QLineEdit;
    circle_center2->setText("6");
    circle_center2->setFixedWidth(100);

    hlayout5->addWidget(circle_center_);
    hlayout5->addWidget(circle_center1);
    hlayout5->addWidget(circle_center2);
    hlayout5->addSpacerItem(space1);

    //CIRCLE RADIUS

    QLabel *circle_radius_ = new QLabel("Enter circle radius:");

    QHBoxLayout *hlayout13 = new QHBoxLayout;

    circle_radius = new QLineEdit;
    circle_radius->setText("4.2672");
    circle_radius->setFixedWidth(100);

    hlayout13->addWidget(circle_radius_);
    hlayout13->addWidget(circle_radius);
    hlayout13->addSpacerItem(space1);


    //ATTACH GORES
    QLabel *attach_gores_ = new QLabel("Attach gores to canopy?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    attach_gores = new QComboBox;
    attach_gores->setFixedWidth(100);
    attach_gores->addItem("No");
    attach_gores->addItem("Yes");

    hlayout6->addWidget(attach_gores_);
    hlayout6->addWidget(attach_gores);
    hlayout6->addSpacerItem(space1);

    //CUT VENT
    QLabel *cut_vent_ = new QLabel("Cut a vent on the canopy?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    cut_vent = new QComboBox;
    cut_vent->setFixedWidth(100);
    cut_vent->addItem("No");
    cut_vent->addItem("Yes");

    hlayout7->addWidget(cut_vent_);
    hlayout7->addWidget(cut_vent);
    hlayout7->addSpacerItem(space1);

    //ATTACH STRINGS TO CANOPY
    QLabel *attach_strings_ = new QLabel("Attach strings to canopy?");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    attach_strings = new QComboBox;
    attach_strings->setFixedWidth(100);
    attach_strings->addItem("Yes");
    attach_strings->addItem("No");

    hlayout8->addWidget(attach_strings_);
    hlayout8->addWidget(attach_strings);
    hlayout8->addSpacerItem(space1);

    //NUMBER OF CHORDS
    QLabel *num_chords_ = new QLabel("Enter number of chords:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    num_chords = new QLineEdit;
    num_chords->setText("28");
    num_chords->setFixedWidth(50);

    hlayout9->addWidget(num_chords_);
    hlayout9->addWidget(num_chords);
    hlayout9->addSpacerItem(space1);

    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_ = new QLabel("Enter initial position of load:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    init_pos_load1 = new QLineEdit;
    init_pos_load1->setText("6");
    init_pos_load1->setFixedWidth(50);

    init_pos_load2= new QLineEdit;
    init_pos_load2->setText("6");
    init_pos_load2->setFixedWidth(50);

    init_pos_load3 = new QLineEdit;
    init_pos_load3->setText("12.451");
    init_pos_load3->setFixedWidth(50);

    hlayout10->addWidget(init_pos_load_);
    hlayout10->addWidget(init_pos_load1);
    hlayout10->addWidget(init_pos_load2);
    hlayout10->addWidget(init_pos_load3);
    hlayout10->addSpacerItem(space1);

    //INSTALL STRINGS TO RGB
    QLabel *install_strings_toRGB_ = new QLabel("Install the strings to RGB?");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    install_strings_toRGB = new QComboBox;
    install_strings_toRGB->setFixedWidth(100);
    install_strings_toRGB->addItem("Yes");
    install_strings_toRGB->addItem("No");

    hlayout11->addWidget(install_strings_toRGB_);
    hlayout11->addWidget(install_strings_toRGB);
    hlayout11->addSpacerItem(space1);

    //BODY INDEX
    QLabel *body_index_ = new QLabel("Enter the body index of the target RGB:");

    QHBoxLayout *hlayout12 = new QHBoxLayout;

    body_index = new QLineEdit;
    body_index->setText("1");
    body_index->setFixedWidth(50);

    hlayout12->addWidget(body_index_);
    hlayout12->addWidget(body_index);
    hlayout12->addSpacerItem(space1);


    QVBoxLayout *page4layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);
    vlayout1->addLayout(hlayout12);
    vlayout1->addLayout(hlayout13);


    page4layout->addLayout(vlayout1);


    setLayout(page4layout);

}


//FIFTH PAGE INCLUDES AIRFOIL PARAMETERS UP TO SPRING AND FABRIC OPTIONS

FifthPage::FifthPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 5");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //GPU SOLVER
    QLabel *gpu_solver_ = new QLabel("Use GPU Solver?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    gpu_solver = new QComboBox;
    gpu_solver->setFixedWidth(100);
    gpu_solver->addItem("No");
    gpu_solver->addItem("Yes");

    hlayout1->addWidget(gpu_solver_);
    hlayout1->addWidget(gpu_solver);
    hlayout1->addSpacerItem(space1);

    //FLUID SOLVER
    QLabel *fluid_solver_ = new QLabel("Turn off fluid solver?");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    fluid_solver = new QComboBox;
    fluid_solver->setFixedWidth(100);
    fluid_solver->addItem("No");
    fluid_solver->addItem("Yes");

    hlayout2->addWidget(fluid_solver_);
    hlayout2->addWidget(fluid_solver);
    hlayout2->addSpacerItem(space1);

    //USE POROSITY
    QLabel *use_porosity_ = new QLabel("Use porosity?");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    use_porosity = new QComboBox;
    use_porosity->setFixedWidth(100);
    use_porosity->addItem("Yes");
    use_porosity->addItem("No");

    hlayout3->addWidget(use_porosity_);
    hlayout3->addWidget(use_porosity);
    hlayout3->addSpacerItem(space1);

    //VISCOUS PARAMETER
    QLabel *viscous_param_ = new QLabel("Enter viscous parameter:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    viscous_param = new QLineEdit;
    viscous_param->setText("604.333");
    viscous_param->setFixedWidth(100);

    hlayout4->addWidget(viscous_param_);
    hlayout4->addWidget(viscous_param);
    hlayout4->addSpacerItem(space1);

    //INERTIAL PARAMETER
    QLabel *inertial_param_ = new QLabel("Enter inertial parameter:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    inertial_param = new QLineEdit;
    inertial_param->setText("0.0");
    inertial_param->setFixedWidth(100);

    hlayout5->addWidget(inertial_param_);
    hlayout5->addWidget(inertial_param);
    hlayout5->addSpacerItem(space1);

    //SMOOTHING RADIUS
    QLabel *smooth_radius_ = new QLabel("Enter factor of smoothing radius:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    smooth_radius = new QLineEdit;
    smooth_radius->setText("1.0");
    smooth_radius->setFixedWidth(100);

    hlayout6->addWidget(smooth_radius_);
    hlayout6->addWidget(smooth_radius);
    hlayout6->addSpacerItem(space1);

    //PAYLOAD
    QLabel *payload_ = new QLabel("Enter payload:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    payload = new QLineEdit;
    payload->setText("100");
    payload->setFixedWidth(100);

    hlayout7->addWidget(payload_);
    hlayout7->addWidget(payload);
    hlayout7->addSpacerItem(space1);

    //SUB STEP NUMBER
    QLabel *sub_step_num_ = new QLabel("Enter interior sub step number:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    sub_step_num = new QLineEdit;
    sub_step_num->setText("10");
    sub_step_num->setFixedWidth(100);

    hlayout8->addWidget(sub_step_num_);
    hlayout8->addWidget(sub_step_num);
    hlayout8->addSpacerItem(space1);

    //AREA DENSITY
    QLabel *area_density_ = new QLabel("Enter area density of canopy:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    area_density = new QLineEdit;
    area_density->setText("5.0");
    area_density->setFixedWidth(100);

    hlayout9->addWidget(area_density_);
    hlayout9->addWidget(area_density);
    hlayout9->addSpacerItem(space1);


    QVBoxLayout *page5layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);

    page5layout->addLayout(vlayout1);

    setLayout(page5layout);

}


//SIXTH PAGE INCLUDES ALL FABRIC AND STRING PARAMETERS...STRAIN LIMIT NOT ADDED IN YET

SixthPage::SixthPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 6");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //FABRIC SPRING CONSTANT
    QLabel *fab_spring_const_ = new QLabel("Enter fabric spring constant:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    fab_spring_const = new QLineEdit;
    fab_spring_const->setText("5000");
    fab_spring_const->setFixedWidth(100);

    hlayout1->addWidget(fab_spring_const_);
    hlayout1->addWidget(fab_spring_const);
    hlayout1->addSpacerItem(space1);

    //FABRIC DAMPING CONSTANT
    QLabel *fab_damping_const_ = new QLabel("Enter fabric damping constant:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    fab_damping_const = new QLineEdit;
    fab_damping_const->setText("0.01");
    fab_damping_const->setFixedWidth(100);

    hlayout2->addWidget(fab_damping_const_);
    hlayout2->addWidget(fab_damping_const);
    hlayout2->addSpacerItem(space1);

    //FABRIC FRICTION CONSTANT
    QLabel *fab_friction_const_ = new QLabel("Enter fabric friction constant:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    fab_friction_const = new QLineEdit;
    fab_friction_const->setText("0.15");
    fab_friction_const->setFixedWidth(100);

    hlayout3->addWidget(fab_friction_const_);
    hlayout3->addWidget(fab_friction_const);
    hlayout3->addSpacerItem(space1);

    //FABRIC POINT MASS
    QLabel *fab_point_mass_ = new QLabel("Enter fabric point mass:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    fab_point_mass = new QLineEdit;
    fab_point_mass->setText("0.001");
    fab_point_mass->setFixedWidth(100);

    hlayout4->addWidget(fab_point_mass_);
    hlayout4->addWidget(fab_point_mass);
    hlayout4->addSpacerItem(space1);

    //FABRIC THICKNESS
    QLabel *fab_thickness_ = new QLabel("Enter fabric thickness:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    fab_thickness = new QLineEdit;
    fab_thickness->setText("0.001");
    fab_thickness->setFixedWidth(100);

    hlayout5->addWidget(fab_thickness_);
    hlayout5->addWidget(fab_thickness);
    hlayout5->addSpacerItem(space1);

    //FABRIC ROUNDING TOLERANCE
    QLabel *fab_rounding_tol_ = new QLabel("Enter fabric rounding tolerance:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    fab_rounding_tol = new QLineEdit;
    fab_rounding_tol->setText("0.000001");
    fab_rounding_tol->setFixedWidth(100);

    hlayout6->addWidget(fab_rounding_tol_);
    hlayout6->addWidget(fab_rounding_tol);
    hlayout6->addSpacerItem(space1);

    //__________________________________________________________________//


    //STRING SPRING CONSTANT
    QLabel *str_spring_const_ = new QLabel("Enter string spring constant:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    str_spring_const = new QLineEdit;
    str_spring_const->setText("50000");
    str_spring_const->setFixedWidth(100);

    hlayout7->addWidget(str_spring_const_);
    hlayout7->addWidget(str_spring_const);
    hlayout7->addSpacerItem(space1);

    //STRING  DAMPING CONSTANT
    QLabel *str_damping_const_ = new QLabel("Enter string damping constant:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    str_damping_const = new QLineEdit;
    str_damping_const->setText("0.01");
    str_damping_const->setFixedWidth(100);

    hlayout8->addWidget(str_damping_const_);
    hlayout8->addWidget(str_damping_const);
    hlayout8->addSpacerItem(space1);

    //STRING  FRICTION CONSTANT
    QLabel *str_friction_const_ = new QLabel("Enter string friction constant:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    str_friction_const = new QLineEdit;
    str_friction_const->setText("0.15");
    str_friction_const->setFixedWidth(100);

    hlayout9->addWidget(str_friction_const_);
    hlayout9->addWidget(str_friction_const);
    hlayout9->addSpacerItem(space1);

    //STRING POINT MASS
    QLabel *str_point_mass_ = new QLabel("Enter string point mass:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    str_point_mass = new QLineEdit;
    str_point_mass->setText("0.0015");
    str_point_mass->setFixedWidth(100);

    hlayout10->addWidget(str_point_mass_);
    hlayout10->addWidget(str_point_mass);
    hlayout10->addSpacerItem(space1);

    //STRING THICKNESS
    QLabel *str_thickness_ = new QLabel("Enter string thickness:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    str_thickness = new QLineEdit;
    str_thickness->setText("0.004");
    str_thickness->setFixedWidth(100);

    hlayout11->addWidget(str_thickness_);
    hlayout11->addWidget(str_thickness);
    hlayout11->addSpacerItem(space1);

    //STRING ROUNDING TOLERANCE
    QLabel *str_rounding_tol_ = new QLabel("Enter string rounding tolerance:");

    QHBoxLayout *hlayout12 = new QHBoxLayout;

    str_rounding_tol = new QLineEdit;
    str_rounding_tol->setText("0.000004");
    str_rounding_tol->setFixedWidth(100);

    hlayout12->addWidget(str_rounding_tol_);
    hlayout12->addWidget(str_rounding_tol);
    hlayout12->addSpacerItem(space1);

    QVBoxLayout *page6layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);
    vlayout1->addLayout(hlayout12);


    page6layout->addLayout(vlayout1);


    setLayout(page6layout);


}


//SEVENTH PAGE INCLUDES VELOCITY, PRESSURE AND MOVIE OPTIONS


SeventhPage::SeventhPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 7");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //BOUNDARY PARAMETERS
    //QLabel *lower_boundary_ = new QLabel("For lower boundary in 2-th dimension:");

    //DIRICHLET TYPE
    //QLabel *lower_type_of_dirichlet_ = new QLabel("Enter type of Dirichlet boundary:");

    //QHBoxLayout *hlayout1 = new QHBoxLayout;

    //lower_type_of_dirichlet = new QComboBox;
    //lower_type_of_dirichlet->setFixedWidth(200);
    //lower_type_of_dirichlet->addItem("CONSTANT_STATE");
    //lower_type_of_dirichlet->addItem("FLOW_THROUGH");

    //hlayout1->addWidget(lower_type_of_dirichlet_);
    //hlayout1->addWidget(lower_type_of_dirichlet);
    //hlayout1->addSpacerItem(space1);

    //VELOCITY
    QLabel *velocity_ = new QLabel("Enter velocity:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    velocity1 = new QLineEdit;
    velocity1->setText("0");
    velocity1->setFixedWidth(50);

    velocity2= new QLineEdit;
    velocity2->setText("0");
    velocity2->setFixedWidth(50);

    velocity3 = new QLineEdit;
    velocity3->setText("5.0");
    velocity3->setFixedWidth(50);

    hlayout2->addWidget(velocity_);
    hlayout2->addWidget(velocity1);
    hlayout2->addWidget(velocity2);
    hlayout2->addWidget(velocity3);
    hlayout2->addSpacerItem(space1);

    //PRESSURE
    QLabel *pressure_ = new QLabel("Enter pressure:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    pressure = new QLineEdit;
    pressure->setText("0");
    pressure->setFixedWidth(50);

    hlayout3->addWidget(pressure_);
    hlayout3->addWidget(pressure);
    hlayout3->addSpacerItem(space1);

    //QLabel *upper_boundary_ = new QLabel("For upper boundary in 2-th dimension:");

    //DIRICHLET TYPE
    //QLabel *upper_type_of_dirichlet_ = new QLabel("Enter type of Dirichlet boundary:");

    //QHBoxLayout *hlayout4 = new QHBoxLayout;

    //upper_type_of_dirichlet = new QComboBox;
    //upper_type_of_dirichlet->setFixedWidth(200);
    //upper_type_of_dirichlet->addItem("FLOW_THROUGH");
    //upper_type_of_dirichlet->addItem("CONSTANT_STATE");

    //hlayout4->addWidget(upper_type_of_dirichlet_);
    //hlayout4->addWidget(upper_type_of_dirichlet);
    //hlayout4->addSpacerItem(space1);


    //__________________________________________//
    //MOVIE OPTIONS

    //YZ CROSS-SECTION MOVIE
    QLabel *yz_movie_ = new QLabel("Make a yz cross-section movie?");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    yz_movie = new QComboBox;
    yz_movie->setFixedWidth(100);
    yz_movie->addItem("No");
    yz_movie->addItem("Yes");

    hlayout5->addWidget(yz_movie_);
    hlayout5->addWidget(yz_movie);
    hlayout5->addSpacerItem(space1);

    //XZ CROSS-SECTION MOVIE
    QLabel *xz_movie_ = new QLabel("Make a xz cross-section movie?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    xz_movie = new QComboBox;
    xz_movie->setFixedWidth(100);
    xz_movie->addItem("No");
    xz_movie->addItem("Yes");

    hlayout6->addWidget(xz_movie_);
    hlayout6->addWidget(xz_movie);
    hlayout6->addSpacerItem(space1);

    //XY CROSS-SECTION MOVIE
    QLabel *xy_movie_ = new QLabel("Make a xy cross-section movie?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    xy_movie = new QComboBox;
    xy_movie->setFixedWidth(100);
    xy_movie->addItem("No");
    xy_movie->addItem("Yes");

    hlayout7->addWidget(xy_movie_);
    hlayout7->addWidget(xy_movie);
    hlayout7->addSpacerItem(space1);

    //VELOCITY VECTOR MOVIE
    QLabel *velocity_vector_ = new QLabel("Make a velocity vector field movie?");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    velocity_vector = new QComboBox;
    velocity_vector->setFixedWidth(100);
    velocity_vector->addItem("Yes");
    velocity_vector->addItem("No");

    hlayout8->addWidget(velocity_vector_);
    hlayout8->addWidget(velocity_vector);
    hlayout8->addSpacerItem(space1);

    //SURFACE STRESS
    QLabel *surface_stress_ = new QLabel("Plot surface stress?");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    surface_stress = new QComboBox;
    surface_stress->setFixedWidth(100);
    surface_stress->addItem("No");
    surface_stress->addItem("Yes");

    hlayout9->addWidget(surface_stress_);
    hlayout9->addWidget(surface_stress);
    hlayout9->addSpacerItem(space1);


    QVBoxLayout *page7layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    //vlayout1->addWidget(lower_boundary_);
    //vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    //vlayout1->addWidget(upper_boundary_);
    //vlayout1->addLayout(hlayout4);
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);

    page7layout->addLayout(vlayout1);

    setLayout(page7layout);


}


//DEBUG PAGE INCLUDES ALL OF THE DEBUGGING OPTIONS


DebugPage::DebugPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Debug Page");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //DEBUGGING ON OR OFF
    QLabel *debug_ = new QLabel("Use debugging?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    debug = new QComboBox;
    debug->setFixedWidth(100);
    debug->addItem("Yes");
    debug->addItem("No");

    hlayout1->addWidget(debug_);
    hlayout1->addWidget(debug);
    hlayout1->addSpacerItem(space1);

    //DEBUGGING STRINGS
    QLabel *debug_strings_ = new QLabel("Enter the debugging strings:");

    debug_string_space1 = new QLineEdit;
    debug_string_space1->setFixedWidth(200);
    debug_string_space1->setText("max_speed");

    debug_string_space2 = new QLineEdit;
    debug_string_space2->setFixedWidth(200);
    debug_string_space2->setText("proximity");

    debug_string_space3 = new QLineEdit;
    debug_string_space3->setFixedWidth(200);
    debug_string_space3->setText("collision");

    debug_string_space4 = new QLineEdit;
    debug_string_space4->setFixedWidth(200);
    debug_string_space4->setText("strain_limiting");

    debug_string_space5 = new QLineEdit;
    debug_string_space5->setFixedWidth(200);
    debug_string_space5->setText("Xtrace");

    debug_string_space6 = new QLineEdit;
    debug_string_space6->setFixedWidth(200);
    debug_string_space6->setText("XCLOCK");

    debug_string_space7 = new QLineEdit;
    debug_string_space7->setFixedWidth(200);
    debug_string_space7->setText("Xstep_size");

    debug_string_space8 = new QLineEdit;
    debug_string_space8->setFixedWidth(200);
    debug_string_space8->setText("XPETSc");

    debug_string_space9 = new QLineEdit;
    debug_string_space9->setFixedWidth(200);
    debug_string_space9->setText("Xcoat_comp");

    debug_string_space10 = new QLineEdit;
    debug_string_space10->setFixedWidth(200);
    debug_string_space10->setText("Xdirichlet_bdry");

    debug_string_space11 = new QLineEdit;
    debug_string_space11->setFixedWidth(200);
    debug_string_space11->setText("Xflow_through");

    debug_string_space12 = new QLineEdit;
    debug_string_space12->setFixedWidth(200);
    debug_string_space12->setText("Xcollision_off");

    debug_string_space13 = new QLineEdit;
    debug_string_space13->setFixedWidth(200);
    debug_string_space13->setText("Xsample_velocity");

    QVBoxLayout *vlayout_debug_string = new QVBoxLayout;
    vlayout_debug_string->addWidget(debug_strings_);
    vlayout_debug_string->addWidget(debug_string_space1);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space2);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space3);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space4);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space5);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space6);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space7);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space8);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space9);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space10);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space11);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space12);
    //vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space13);

    //SAMPLE LINE TYPE
    QLabel *sample_line_type_ = new QLabel("Enter the sample line type:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    sample_line_type = new QLineEdit;
    sample_line_type->setText("2");
    sample_line_type->setFixedWidth(100);

    hlayout2->addWidget(sample_line_type_);
    hlayout2->addWidget(sample_line_type);
    hlayout2->addSpacerItem(space1);

    //SAMPLE LINE COORDINATE
    QLabel *sample_line_coord_ = new QLabel("Enter the sample line coordinate:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    sample_line_coord1 = new QLineEdit;
    sample_line_coord1->setText("6.0");
    sample_line_coord1->setFixedWidth(100);

    sample_line_coord2 = new QLineEdit;
    sample_line_coord2->setText("6.0");
    sample_line_coord2->setFixedWidth(100);

    hlayout3->addWidget(sample_line_coord_);
    hlayout3->addWidget(sample_line_coord1);
    hlayout3->addWidget(sample_line_coord2);
    hlayout3->addSpacerItem(space1);

    //START STEP
    QLabel *start_step_ = new QLabel("Enter the start step for sample:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    start_step = new QLineEdit;
    start_step->setText("0");
    start_step->setFixedWidth(100);

    hlayout4->addWidget(start_step_);
    hlayout4->addWidget(start_step);
    hlayout4->addSpacerItem(space1);

    //END STEP
    QLabel *end_step_ = new QLabel("Enter the end step for sample:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    end_step = new QLineEdit;
    end_step->setText("10");
    end_step->setFixedWidth(100);

    hlayout5->addWidget(end_step_);
    hlayout5->addWidget(end_step);
    hlayout5->addSpacerItem(space1);

    QVBoxLayout *page_debug_layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(vlayout_debug_string);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);

    page_debug_layout->addLayout(vlayout1);

    setLayout(page_debug_layout);

}






void C9_Wizard::Write()
{

    dom_lim_0_first = new QString;
    *dom_lim_0_first = first->first_bounds0->displayText();
    dom_lim_0_last = new QString;
    *dom_lim_0_last = first->last_bounds0->displayText();

    dom_lim_1_first = new QString;
    *dom_lim_1_first = first->first_bounds1->displayText();
    dom_lim_1_last = new QString;
    *dom_lim_1_last = first->last_bounds1->displayText();
    dom_lim_2_first = new QString;
    *dom_lim_2_first = first->first_bounds2->displayText();
    dom_lim_2_last = new QString;
    *dom_lim_2_last = first->last_bounds2->displayText();

    compgrid_1 = new QString;
    *compgrid_1 = first->grid_coord1->displayText();
    compgrid_2 = new QString;
    *compgrid_2 = first->grid_coord2->displayText();
    compgrid_3 = new QString;
    *compgrid_3 = first->grid_coord3->displayText();

    lowerbound_0 = new QString;
    *lowerbound_0 = first->lowerbound0->currentText();
    upperbound_0 = new QString;
    *upperbound_0 = first->upperbound0->currentText();
    lowerbound_1 = new QString;
    *lowerbound_1 = first->lowerbound1->currentText();
    upperbound_1 = new QString;
    *upperbound_1 = first->upperbound1->currentText();
    lowerbound_2 = new QString;
    *lowerbound_2 = first->lowerbound2->currentText();
    upperbound_2 = new QString;
    *upperbound_2 = first->upperbound2->currentText();

    max_time_ = new QString;
    *max_time_ = second->max_time->displayText();
    max_step_ = new QString;
    *max_step_ = second->max_step->displayText();
    print_interval_ = new QString;
    *print_interval_ = second->print_interval->displayText();
    mv_frame_interval_ = new QString;
    *mv_frame_interval_ = second->mv_frame_interval->displayText();
    CFL_factor_ = new QString;
    *CFL_factor_ = second->CFL_factor->displayText();
    redistribution_interval_ = new QString;
    *redistribution_interval_ = second->redistribution_interval->displayText();
    turn_onoff_redist_int_ = new QString;
    *turn_onoff_redist_int_ = second->turn_onoff_redist_int->currentText();

    projection_ = new QString;
    *projection_ = second->projection->currentText();
    advection_order_ = new QString;
    *advection_order_ = second->advection_order->displayText();
    density_and_visc_1 = new QString;
    *density_and_visc_1 = second->density_and_visc1->displayText();
    density_and_visc_2 = new QString;
    *density_and_visc_2 = second->density_and_visc2->displayText();
    gravity_ = new QString;
    *gravity_ = second->gravity->displayText();

    add_rigbody_ = new QString;
    *add_rigbody_ = third->add_rigbody->currentText();
    num_rigbodies_ = new QString;
    *num_rigbodies_ = third->num_rigbodies->displayText();
    type_of_rigbody_ = new QString;
    *type_of_rigbody_ = third->type_of_rigbody->currentText();
    center_of_rigbody_1 = new QString;
    *center_of_rigbody_1 = third->center_of_rigbody1->displayText();
    center_of_rigbody_2 = new QString;
    *center_of_rigbody_2 = third->center_of_rigbody2->displayText();
    center_of_rigbody_3 = new QString;
    *center_of_rigbody_3 = third->center_of_rigbody3->displayText();
    radius_of_rigbody_1 = new QString;
    *radius_of_rigbody_1 = third->radius_of_rigbody1->displayText();
    radius_of_rigbody_2 = new QString;
    *radius_of_rigbody_2 = third->radius_of_rigbody2->displayText();
    radius_of_rigbody_3 = new QString;
    *radius_of_rigbody_3 = third->radius_of_rigbody3->displayText();
    preset_motion_ = new QString;
    *preset_motion_ = third->preset_motion->currentText();
    dynamic_motion_ = new QString;
    *dynamic_motion_ = third->dynamic_motion->currentText();
    direction_of_motion_1 = new QString;
    *direction_of_motion_1 = third->direction_of_motion1->displayText();
    direction_of_motion_2 = new QString;
    *direction_of_motion_2 = third->direction_of_motion2->displayText();
    direction_of_motion_3 = new QString;
    *direction_of_motion_3 = third->direction_of_motion3->displayText();
    total_mass_ = new QString;
    *total_mass_ = third->total_mass->displayText();
    init_center_mass_1 = new QString;
    *init_center_mass_1 = third->init_center_mass1->displayText();
    init_center_mass_2 = new QString;
    *init_center_mass_2 = third->init_center_mass2->displayText();
    init_center_mass_3 = new QString;
    *init_center_mass_3 = third->init_center_mass3->displayText();
    init_center_mass_vel_1 = new QString;
    *init_center_mass_vel_1 = third->init_center_mass_vel1->displayText();
    init_center_mass_vel_2 = new QString;
    *init_center_mass_vel_2 = third->init_center_mass_vel2->displayText();
    init_center_mass_vel_3 = new QString;
    *init_center_mass_vel_3 = third->init_center_mass_vel3->displayText();

    num_canopy_surfaces_ = new QString;
    *num_canopy_surfaces_ = fourth->num_canopy_surfaces->displayText();
    canopy_surf_type_ = new QString;
    *canopy_surf_type_ = fourth->canopy_surf_type->currentText();
    canopy_boundary_ = new QString;
    *canopy_boundary_ = fourth->canopy_boundary->currentText();
    height_of_plane_ = new QString;
    *height_of_plane_ = fourth->height_of_plane->displayText();
    circle_center_1 = new QString;
    *circle_center_1 = fourth->circle_center1->displayText();
    circle_center_2 = new QString;
    *circle_center_2 = fourth->circle_center2->displayText();
    circle_radius_ = new QString;
    *circle_radius_ = fourth->circle_radius->displayText();
    attach_gores_ = new QString;
    *attach_gores_ = fourth->attach_gores->currentText();
    cut_vent_ = new QString;
    *cut_vent_ = fourth->cut_vent->currentText();
    attach_strings_ = new QString;
    *attach_strings_ = fourth->attach_strings->currentText();
    num_chords_ = new QString;
    *num_chords_ = fourth->num_chords->displayText();
    init_pos_load_1 = new QString;
    *init_pos_load_1 = fourth->init_pos_load1->displayText();
    init_pos_load_2 = new QString;
    *init_pos_load_2 = fourth->init_pos_load2->displayText();
    init_pos_load_3 = new QString;
    *init_pos_load_3 = fourth->init_pos_load3->displayText();
    install_strings_toRGB_ = new QString;
    *install_strings_toRGB_ = fourth->install_strings_toRGB->currentText();
    body_index_ = new QString;
    *body_index_ = fourth->body_index->displayText();

    gpu_solver_ = new QString;
    *gpu_solver_ = fifth->gpu_solver->currentText();
    fluid_solver_ = new QString;
    *fluid_solver_ = fifth->fluid_solver->currentText();
    use_porosity_ = new QString;
    *use_porosity_ = fifth->use_porosity->currentText();
    viscous_param_ = new QString;
    *viscous_param_ = fifth->viscous_param->displayText();
    inertial_param_ = new QString;
    *inertial_param_ = fifth->inertial_param->displayText();
    smooth_radius_ = new QString;
    *smooth_radius_ = fifth->smooth_radius->displayText();

    payload_ = new QString;
    *payload_ = fifth->payload->displayText();
    sub_step_num_ = new QString;
    *sub_step_num_ = fifth->sub_step_num->displayText();
    area_density_ = new QString;
    *area_density_ = fifth->area_density->displayText();

    fab_spring_const_ = new QString;
    *fab_spring_const_ = sixth->fab_spring_const->displayText();
    fab_damping_const_ = new QString;
    *fab_damping_const_ = sixth->fab_damping_const->displayText();
    fab_friction_const_ = new QString;
    *fab_friction_const_ = sixth->fab_friction_const->displayText();
    fab_point_mass_ = new QString;
    *fab_point_mass_ = sixth->fab_point_mass->displayText();
    fab_thickness_ = new QString;
    *fab_thickness_ = sixth->fab_thickness->displayText();
    fab_rounding_tol_ = new QString;
    *fab_rounding_tol_ = sixth->fab_rounding_tol->displayText();

    str_spring_const_ = new QString;
    *str_spring_const_ = sixth->str_spring_const->displayText();
    str_damping_const_ = new QString;
    *str_damping_const_ = sixth->str_damping_const->displayText();
    str_friction_const_ = new QString;
    *str_friction_const_ = sixth->str_friction_const->displayText();
    str_point_mass_ = new QString;
    *str_point_mass_ = sixth->str_point_mass->displayText();
    str_thickness_ = new QString;
    *str_thickness_ = sixth->str_thickness->displayText();
    str_rounding_tol_ = new QString;
    *str_rounding_tol_ = sixth->str_rounding_tol->displayText();

    //STRAIN LIMIT NOT INCLUDED - WAITING FOR MORE DEVELOPED CODE

    lower_type_of_dirichlet_ = new QString;
    //*lower_type_of_dirichlet_ = seventh->lower_type_of_dirichlet->currentText();
    *lower_type_of_dirichlet_ = first->lowerbound2_type->currentText();
    velocity_1 = new QString;
    *velocity_1 = seventh->velocity1->displayText();
    velocity_2 = new QString;
    *velocity_2 = seventh->velocity2->displayText();
    velocity_3 = new QString;
    *velocity_3 = seventh->velocity3->displayText();
    pressure_ = new QString;
    *pressure_ = seventh->pressure->displayText();
    upper_type_of_dirichlet_ = new QString;
    //*upper_type_of_dirichlet_ = seventh->upper_type_of_dirichlet->currentText();
    *upper_type_of_dirichlet_ = first->upperbound2_type->currentText();

    yz_movie_ = new QString;
    *yz_movie_ = seventh->yz_movie->currentText();
    xz_movie_ = new QString;
    *xz_movie_ = seventh->xz_movie->currentText();
    xy_movie_ = new QString;
    *xy_movie_ = seventh->xy_movie->currentText();
    velocity_vector_ = new QString;
    *velocity_vector_ = seventh->velocity_vector->currentText();
    surface_stress_ = new QString;
    *surface_stress_ = seventh->surface_stress->currentText();

    debug_ = new QString;
    *debug_ = DEBUG->debug->currentText();
    debug_string_space1_ = new QString;
    *debug_string_space1_ = DEBUG->debug_string_space1->displayText();
    debug_string_space2_ = new QString;
    *debug_string_space2_ = DEBUG->debug_string_space2->displayText();
    debug_string_space3_ = new QString;
    *debug_string_space3_ = DEBUG->debug_string_space3->displayText();
    debug_string_space4_ = new QString;
    *debug_string_space4_ = DEBUG->debug_string_space4->displayText();
    debug_string_space5_ = new QString;
    *debug_string_space5_ = DEBUG->debug_string_space5->displayText();
    debug_string_space6_ = new QString;
    *debug_string_space6_ = DEBUG->debug_string_space6->displayText();
    debug_string_space7_ = new QString;
    *debug_string_space7_ = DEBUG->debug_string_space7->displayText();
    debug_string_space8_ = new QString;
    *debug_string_space8_ = DEBUG->debug_string_space8->displayText();
    debug_string_space9_ = new QString;
    *debug_string_space9_ = DEBUG->debug_string_space9->displayText();
    debug_string_space10_ = new QString;
    *debug_string_space10_ = DEBUG->debug_string_space10->displayText();
    debug_string_space11_ = new QString;
    *debug_string_space11_ = DEBUG->debug_string_space11->displayText();
    debug_string_space12_ = new QString;
    *debug_string_space12_ = DEBUG->debug_string_space12->displayText();
    debug_string_space13_ = new QString;
    *debug_string_space13_ = DEBUG->debug_string_space13->displayText();

    sample_line_type_ = new QString;
    *sample_line_type_ = DEBUG->sample_line_type->displayText();
    sample_line_coord_1 = new QString;
    *sample_line_coord_1 = DEBUG->sample_line_coord1->displayText();
    sample_line_coord_2 = new QString;
    *sample_line_coord_2 = DEBUG->sample_line_coord2->displayText();
    start_step_ = new QString;
    *start_step_ = DEBUG->start_step->displayText();
    end_step_ = new QString;
    *end_step_ = DEBUG->end_step->displayText();

    QFile Output_txt_file("/Users/Kyle/Parachute_GUIs/Output_Files/input-file.txt"); //kyle's mac
    //QFile iFluidtext("./iFluid.txt"); //lambda

    if (!Output_txt_file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Could not open input-file.txt\n";
        return;
    }


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

    out << "\n";

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
















/*



//C9_Wizard::C9_Wizard()
    //: QWizard()

//C9_Wizard::C9_Wizard()
C9_Wizard::C9_Wizard()
{

    //this->addPage(createmainpage());
    C9_Wizard::createmainpage();


    //this->addPage(createfirstpage());
    C9_Wizard::createfirstpage();


    //this->addPage(createsecondpage());

    //this->addPage(createthirdpage());

    //this->addPage(createfourthpage());

    //this->addPage(createfifthpage());

    //this->addPage(createsixthpage());

    //this->addPage(createseventhpage());

    //this->addPage(createdebuggingpage());

    //connect(this->button(FinishButton),SIGNAL(clicked()), this, SLOT(Write()));

    //connect(this->button(QWizard::NextButton),
    //SIGNAL(clicked()),this,SLOT(onNextButtonCliked()));


}


C9_Wizard::~C9_Wizard()
{

}


//QWizardPage* C9_Wizard::createmainpage()
//C9_Wizard::createmainpage()
//QWizardPage* C9_Wizard::createmainpage()

void C9_Wizard::createmainpage()
{
    QWizardPage *mainpage = new QWizardPage;
    mainpage->setTitle("C9 Parachute Initialization Module");

    //QLabel *mainlabel = new QLabel("This wizard will help you write an in-file for the parachute type: C9");
    mainlabel->setText("This wizard will help you write an in-file for the parachute type: C9");

    //QHBoxLayout *mainlayout = new QHBoxLayout;
    mainlayout->addWidget(mainlabel);

    mainpage->setLayout(mainlayout);

    C9_Wizard::addPage(mainpage);
    //return mainpage;

}



//QWizardPage* C9_Wizard::createfirstpage()
//C9_Wizard::createfirstpage()
//QWizardPage* C9_Wizard::createfirstpage()
void C9_Wizard::createfirstpage()
{
    QWizardPage *page1 = new QWizardPage;
    page1->setTitle("C9 Parameters: Page 1 --> Domain Limits and Boundaries");


  //DOMAIN IN 0th DIMENSION
    //QLabel *dom_lim_0 = new QLabel("Domain limit in the 0th Dimension");
    dom_lim_0->setText("Domain limit in the 0th Dimension");

    //QHBoxLayout *hlayout1 = new QHBoxLayout;
    //QLabel *bounds0 = new QLabel("Enter Bounds:");
    bounds0->setText("Enter Bounds:");

    //first_bounds0 = new QLineEdit;
    first_bounds0->setText("-4");
    first_bounds0->setFixedWidth(50);

    //last_bounds0 = new QLineEdit;
    last_bounds0->setText("18");
    last_bounds0->setFixedWidth(50);

    //QSpacerItem *space1 = new QSpacerItem(500,1);

    hlayout1->addWidget(bounds0);
    hlayout1->addWidget(first_bounds0);
    hlayout1->addWidget(last_bounds0);
    hlayout1->addSpacerItem(space1);

    //QVBoxLayout *vlayout1 = new QVBoxLayout;

    vlayout1->addWidget(dom_lim_0);
    vlayout1->addLayout(hlayout1);


//DOMAIN IN 1st DIMENSION

    //QLabel *dom_lim_1 = new QLabel("Domain limit in the 1st Dimension");
    dom_lim_1->setText("Domain limit in the 1st Dimension");

    //QHBoxLayout *hlayout2 = new QHBoxLayout;
    //QLabel *bounds1 = new QLabel("Enter Bounds:");
    bounds1->setText("Enter Bounds:");

    //first_bounds1 = new QLineEdit;
    first_bounds1->setText("-4");
    first_bounds1->setFixedWidth(50);
    //last_bounds1 = new QLineEdit;
    last_bounds1->setText("18");
    last_bounds1->setFixedWidth(50);

    //QSpacerItem *space2 = new QSpacerItem(500,1);

    hlayout2->addWidget(bounds1);
    hlayout2->addWidget(first_bounds1);
    hlayout2->addWidget(last_bounds1);
    hlayout2->addSpacerItem(space1);

    //QVBoxLayout *vlayout2 = new QVBoxLayout;

    //QSpacerItem *space3 = new QSpacerItem(500,10);

    vlayout2->addWidget(dom_lim_1);
    vlayout2->addLayout(hlayout2);
    vlayout2->addSpacerItem(space1);


 //DOMAIN IN 2nd DIMENSION

    //QLabel *dom_lim_2 = new QLabel("Domain limit in the 2nd Dimension");
    dom_lim_2->setText("Domain limit in the 2nd Dimension");

    //QHBoxLayout *hlayout3 = new QHBoxLayout;
    //QLabel *bounds2 = new QLabel("Enter Bounds:");
    bounds2->setText("Enter Bounds:");

    //first_bounds2 = new QLineEdit;
    first_bounds2->setText("-36");
    first_bounds2->setFixedWidth(50);
    //last_bounds2 = new QLineEdit;
    last_bounds2->setText("28");
    last_bounds2->setFixedWidth(50);

    //QSpacerItem *space4 = new QSpacerItem(500,1);

    hlayout3->addWidget(bounds2);
    hlayout3->addWidget(first_bounds2);
    hlayout3->addWidget(last_bounds2);
    hlayout3->addSpacerItem(space1);

    //QSpacerItem *space3 = new QSpacerItem(500,10);

    vlayout2->addWidget(dom_lim_2);
    vlayout2->addLayout(hlayout3);
    vlayout2->addSpacerItem(space1);










 //COMPUTATIONAL GRID

    QLabel *compgrid = new QLabel("Enter Computational Grid:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //grid_coord1 = new QLineEdit;
    grid_coord1->setText("60");
    grid_coord1->setFixedWidth(50);
    //grid_coord2 = new QLineEdit;
    grid_coord2->setText("60");
    grid_coord2->setFixedWidth(50);
    //grid_coord3 = new QLineEdit;
    grid_coord3->setText("240");
    grid_coord3->setFixedWidth(50);

   // QSpacerItem *space4 = new QSpacerItem(500,20);

    hlayout4->addWidget(compgrid);
    hlayout4->addWidget(grid_coord1);
    hlayout4->addWidget(grid_coord2);
    hlayout4->addWidget(grid_coord3);
    hlayout4->addSpacerItem(space3);

 //UPPER AND LOWER BOUNDARIES

    QLabel *lowerbound_0 = new QLabel("Lower Boundary in 0th Dimension:");

    //lowerbound0 = new QComboBox;
    lowerbound0->addItem("PERIODIC_BOUNDARY");
    lowerbound0->addItem("NEUMANN_BOUNDARY");
    lowerbound0->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *lowerbox_0 = new QHBoxLayout;
    lowerbox_0->addWidget(lowerbound_0);
    lowerbox_0->addWidget(lowerbound0);

    QLabel *upperbound_0 = new QLabel("Upper Boundary in 0th Dimension:");

    //upperbound0 = new QComboBox;
    upperbound0->addItem("PERIODIC_BOUNDARY");
    upperbound0->addItem("NEUMANN_BOUNDARY");
    upperbound0->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *upperbox_0 = new QHBoxLayout;
    upperbox_0->addWidget(upperbound_0);
    upperbox_0->addWidget(upperbound0);

    QLabel *lowerbound_1 = new QLabel("Lower Boundary in 1st Dimension:");

    //lowerbound1 = new QComboBox;
    lowerbound1->addItem("PERIODIC_BOUNDARY");
    lowerbound1->addItem("NEUMANN_BOUNDARY");
    lowerbound1->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *lowerbox_1 = new QHBoxLayout;
    lowerbox_1->addWidget(lowerbound_1);
    lowerbox_1->addWidget(lowerbound1);

    QLabel *upperbound_1 = new QLabel("Upper Boundary in 1st Dimension:");

    //upperbound1 = new QComboBox;
    upperbound1->addItem("PERIODIC_BOUNDARY");
    upperbound1->addItem("NEUMANN_BOUNDARY");
    upperbound1->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *upperbox_1 = new QHBoxLayout;
    upperbox_1->addWidget(upperbound_1);
    upperbox_1->addWidget(upperbound1);

    QLabel *lowerbound_2 = new QLabel("Lower Boundary in 2nd Dimension:");

    //lowerbound2 = new QComboBox;
    lowerbound2->addItem("PERIODIC_BOUNDARY");
    lowerbound2->addItem("NEUMANN_BOUNDARY");
    lowerbound2->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *lowerbox_2 = new QHBoxLayout;
    lowerbox_2->addWidget(lowerbound_2);
    lowerbox_2->addWidget(lowerbound2);

    QLabel *upperbound_2 = new QLabel("Upper Boundary in 2nd Dimension:");

    //upperbound2 = new QComboBox;
    upperbound2->addItem("PERIODIC_BOUNDARY");
    upperbound2->addItem("NEUMANN_BOUNDARY");
    upperbound2->addItem("DIRICHLET_BOUNDARY");

    QHBoxLayout *upperbox_2 = new QHBoxLayout;
    upperbox_2->addWidget(upperbound_2);
    upperbox_2->addWidget(upperbound2);

    QVBoxLayout *vlayout3 = new QVBoxLayout;


    vlayout3->addSpacerItem(space3);
    vlayout3->addLayout(lowerbox_0);
    vlayout3->addLayout(upperbox_0);
    vlayout3->addLayout(lowerbox_1);
    vlayout3->addLayout(upperbox_1);
    vlayout3->addLayout(lowerbox_2);
    vlayout3->addLayout(upperbox_2);

*/

/*

    QVBoxLayout *page1layout = new QVBoxLayout;

    page1layout->addLayout(vlayout1);
    page1layout->addLayout(vlayout2);
    //page1layout->addLayout(hlayout4);
    //page1layout->addLayout(vlayout3);



    page1->setLayout(page1layout);

    //return page1;

    C9_Wizard::addPage(page1);

}

*/

/*

QWizardPage* C9_Wizard::createsecondpage()
{
    QWizardPage *page2 = new QWizardPage;
    page2->setTitle("C9 Parameters: Page 2 --> Time, Steps, Intervals and Fluid Parameters");

    QSpacerItem *space1 = new QSpacerItem(500,1);

    //MAX TIME

    QLabel *max_time_ = new QLabel("Max time:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //max_time = new QLineEdit;
    max_time->setText("4.0");
    max_time->setFixedWidth(50);

    hlayout1->addWidget(max_time_);
    hlayout1->addWidget(max_time);
    hlayout1->addSpacerItem(space1);

    //MAX STEP

    QLabel *max_step_ = new QLabel("Max step:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //max_step = new QLineEdit;
    max_step->setText("2000");
    max_step->setFixedWidth(50);

    hlayout2->addWidget(max_step_);
    hlayout2->addWidget(max_step);
    hlayout2->addSpacerItem(space1);

    //PRINT INTERVAL
    QLabel *print_interval_ = new QLabel("Print interval:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //print_interval = new QLineEdit;
    print_interval->setText("0.5");
    print_interval->setFixedWidth(50);

    hlayout3->addWidget(print_interval_);
    hlayout3->addWidget(print_interval);
    hlayout3->addSpacerItem(space1);

    //MOVIE FRAME INTERVAL
    QLabel *mv_frame_interval_ = new QLabel("Movie frame interval:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //mv_frame_interval = new QLineEdit;
    mv_frame_interval->setText("0.05");
    mv_frame_interval->setFixedWidth(50);

    hlayout4->addWidget(mv_frame_interval_);
    hlayout4->addWidget(mv_frame_interval);
    hlayout4->addSpacerItem(space1);

    //CFL FACTOR
    QLabel *CFL_factor_ = new QLabel("CFL factor:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //CFL_factor = new QLineEdit;
    CFL_factor->setText("0.5");
    CFL_factor->setFixedWidth(50);

    hlayout5->addWidget(CFL_factor_);
    hlayout5->addWidget(CFL_factor);
    hlayout5->addSpacerItem(space1);

    //REDISTRIBUTION INTERVAL
    QLabel *redistribution_interval_ = new QLabel("Redistribution interval:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //redistribution_interval = new QLineEdit;
    redistribution_interval->setText("10000000");
    redistribution_interval->setFixedWidth(100);

    hlayout6->addWidget(redistribution_interval_);
    hlayout6->addWidget(redistribution_interval);
    hlayout6->addSpacerItem(space1);

    //TURN OFF AUTOREDISTRIBUTION
    QLabel *turn_onoff_redist_int_ = new QLabel("Turn off auto-redistribution?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //turn_onoff_redist_int = new QComboBox;
    turn_onoff_redist_int->addItem("Yes");
    turn_onoff_redist_int->addItem("No");

    hlayout7->addWidget(turn_onoff_redist_int_);
    hlayout7->addWidget(turn_onoff_redist_int);
    hlayout7->addSpacerItem(space1);

    //iFLUID PARAMETERS
    QLabel *ifluid_ = new QLabel("iFluid Parameters");

    //PROJECTION TYPE
    QLabel *projection_ = new QLabel("Enter projection type:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //projection = new QComboBox;
    projection->addItem("SIMPLE");
    projection->addItem("BELL_COLELLA");
    projection->addItem("KIM_MOIN");
    projection->addItem("PEROT_BOTELLA");

    hlayout8->addWidget(projection_);
    hlayout8->addWidget(projection);
    hlayout8->addSpacerItem(space1);


    //ADVECTION ORDER
    QLabel *advection_order_ = new QLabel("Enter advection order:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //advection_order = new QLineEdit;
    advection_order->setText("4");
    advection_order->setFixedWidth(50);

    hlayout9->addWidget(advection_order_);
    hlayout9->addWidget(advection_order);
    hlayout9->addSpacerItem(space1);

    //DENSITY AND VISCOSITY
    QLabel *density_and_visc_ = new QLabel("Enter density and viscosity of fluid:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    //density_and_visc1 = new QLineEdit;
    density_and_visc1->setText("1.29");
    density_and_visc1->setFixedWidth(50);

    //density_and_visc2 = new QLineEdit;
    density_and_visc2->setText("0.00001813");
    density_and_visc2->setFixedWidth(100);

    hlayout10->addWidget(density_and_visc_);
    hlayout10->addWidget(density_and_visc1);
    hlayout10->addWidget(density_and_visc2);
    hlayout10->addSpacerItem(space1);


    //GRAVITY
    QLabel *gravity_ = new QLabel("Enter gravity:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    //gravity = new QLineEdit;
    gravity->setText("-9.8");
    gravity->setFixedWidth(50);

    hlayout11->addWidget(gravity_);
    hlayout11->addWidget(gravity);
    hlayout11->addSpacerItem(space1);


    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addWidget(ifluid_);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);


    QVBoxLayout *page2layout = new QVBoxLayout;

    page2layout->addLayout(vlayout1);

    page2->setLayout(page2layout);

    return page2;

}



QWizardPage* C9_Wizard::createthirdpage()
{
    QWizardPage *page3 = new QWizardPage;
    page3->setTitle("C9 Parameters: Page 3 --> Rigid Body Parameters");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //ADD RIGID BODY
    QLabel *add_rigbody_ = new QLabel("Add a rigid body?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //add_rigbody = new QComboBox;
    add_rigbody->addItem("Yes");
    add_rigbody->addItem("No");

    hlayout1->addWidget(add_rigbody_);
    hlayout1->addWidget(add_rigbody);
    hlayout1->addSpacerItem(space1);

    //NUMBER OF RIGID BODIES
    QLabel *num_rigbodies_ = new QLabel("Enter the number of rigid bodies:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //num_rigbodies = new QLineEdit;
    num_rigbodies->setText("1");
    num_rigbodies->setFixedWidth(50);

    hlayout2->addWidget(num_rigbodies_);
    hlayout2->addWidget(num_rigbodies);
    hlayout2->addSpacerItem(space1);

    //FOR RIGID BODY 1

    QLabel *rig_body1_ = new QLabel("For rigid body 1:");

    //TYPE OF RIGID BODY
    QLabel *type_of_rigbody_ = new QLabel("Enter type of rigid body:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //type_of_rigbody = new QComboBox;
    type_of_rigbody->addItem("Sphere");
    type_of_rigbody->addItem("Box");
    type_of_rigbody->addItem("Human");

    hlayout3->addWidget(type_of_rigbody_);
    hlayout3->addWidget(type_of_rigbody);
    hlayout3->addSpacerItem(space1);

    //CENTER OF RIGID BODY-SPHERE
    QLabel *center_of_rigbody_ = new QLabel("Enter center of the sphere:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //center_of_rigbody1 = new QLineEdit;
    center_of_rigbody1->setText("6.01");
    center_of_rigbody1->setFixedWidth(100);

    //center_of_rigbody2= new QLineEdit;
    center_of_rigbody2->setText("6.01");
    center_of_rigbody2->setFixedWidth(100);

    //center_of_rigbody3 = new QLineEdit;
    center_of_rigbody3->setText("12");
    center_of_rigbody3->setFixedWidth(100);

    hlayout4->addWidget(center_of_rigbody_);
    hlayout4->addWidget(center_of_rigbody1);
    hlayout4->addWidget(center_of_rigbody2);
    hlayout4->addWidget(center_of_rigbody3);
    hlayout4->addSpacerItem(space1);

    //RADIUS OF RIGID BODY-SPHERE
    QLabel *radius_of_rigbody_ = new QLabel("Enter radius of the sphere:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //radius_of_rigbody1 = new QLineEdit;
    radius_of_rigbody1->setText("0.5");
    radius_of_rigbody1->setFixedWidth(100);

    //radius_of_rigbody2= new QLineEdit;
    radius_of_rigbody2->setText("0.5");
    radius_of_rigbody2->setFixedWidth(100);

    //radius_of_rigbody3 = new QLineEdit;
    radius_of_rigbody3->setText("0.5");
    radius_of_rigbody3->setFixedWidth(100);

    hlayout5->addWidget(radius_of_rigbody_);
    hlayout5->addWidget(radius_of_rigbody1);
    hlayout5->addWidget(radius_of_rigbody2);
    hlayout5->addWidget(radius_of_rigbody3);
    hlayout5->addSpacerItem(space1);

    //PRESET MOTION
    QLabel *preset_motion_ = new QLabel("Is the motion preset?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //preset_motion = new QComboBox;
    preset_motion->addItem("Yes");
    preset_motion->addItem("No");

    hlayout6->addWidget(preset_motion_);
    hlayout6->addWidget(preset_motion);
    hlayout6->addSpacerItem(space1);

    //DYNAMIC MOTION
    QLabel *dynamic_motion_ = new QLabel("Enter type of dynamic motion:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //dynamic_motion = new QComboBox;
    dynamic_motion->addItem("COM_MOTION");
    dynamic_motion->addItem("Other");

    hlayout7->addWidget(dynamic_motion_);
    hlayout7->addWidget(dynamic_motion);
    hlayout7->addSpacerItem(space1);

    //DIRECTION OF MOTION
    QLabel *direction_of_motion_ = new QLabel("Enter direction of the motion:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //direction_of_motion1 = new QLineEdit;
    direction_of_motion1->setText("0");
    direction_of_motion1->setFixedWidth(50);

    //direction_of_motion2= new QLineEdit;
    direction_of_motion2->setText("0");
    direction_of_motion2->setFixedWidth(50);

    //direction_of_motion3 = new QLineEdit;
    direction_of_motion3->setText("1");
    direction_of_motion3->setFixedWidth(50);

    hlayout8->addWidget(direction_of_motion_);
    hlayout8->addWidget(direction_of_motion1);
    hlayout8->addWidget(direction_of_motion2);
    hlayout8->addWidget(direction_of_motion3);
    hlayout8->addSpacerItem(space1);

    //TOTAL MASS OF RIGID BODY
    //DIRECTION OF MOTION
    QLabel *total_mass_ = new QLabel("Enter the total mass of the rigid body:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //total_mass = new QLineEdit;
    total_mass->setText("100");
    total_mass->setFixedWidth(100);

    hlayout9->addWidget(total_mass_);
    hlayout9->addWidget(total_mass);
    hlayout9->addSpacerItem(space1);

    //INITIAL CENTER OF MASS
    QSpacerItem *space2 = new QSpacerItem(200,10);

    QLabel *init_center_mass_ = new QLabel("Enter initial center of mass for rigid body:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    //init_center_mass1 = new QLineEdit;
    init_center_mass1->setText("6.01");
    init_center_mass1->setFixedWidth(50);

    //init_center_mass2= new QLineEdit;
    init_center_mass2->setText("6.01");
    init_center_mass2->setFixedWidth(50);

    //init_center_mass3 = new QLineEdit;
    init_center_mass3->setText("12");
    init_center_mass3->setFixedWidth(50);

    hlayout10->addWidget(init_center_mass_);
    hlayout10->addWidget(init_center_mass1);
    hlayout10->addWidget(init_center_mass2);
    hlayout10->addWidget(init_center_mass3);
    hlayout10->addSpacerItem(space2);


    //INITIAL CENTER OF MASS VELOCITY

    QLabel *init_center_mass_vel_ = new QLabel("Enter initial center of mass velocity:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    //init_center_mass_vel1 = new QLineEdit;
    init_center_mass_vel1->setText("0");
    init_center_mass_vel1->setFixedWidth(50);

    //init_center_mass_vel2= new QLineEdit;
    init_center_mass_vel2->setText("0");
    init_center_mass_vel2->setFixedWidth(50);

    //init_center_mass_vel3 = new QLineEdit;
    init_center_mass_vel3->setText("0");
    init_center_mass_vel3->setFixedWidth(50);

    hlayout11->addWidget(init_center_mass_vel_);
    hlayout11->addWidget(init_center_mass_vel1);
    hlayout11->addWidget(init_center_mass_vel2);
    hlayout11->addWidget(init_center_mass_vel3);
    hlayout11->addSpacerItem(space1);


    QVBoxLayout *page3layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addWidget(rig_body1_);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);


    page3layout->addLayout(vlayout1);

    page3->setLayout(page3layout);

    return page3;

}



QWizardPage* C9_Wizard::createfourthpage()
{
    QWizardPage *page4 = new QWizardPage;
    page4->setTitle("C9 Parameters: Page 4 --> Parachute Parameters");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //num_canopy_surfaces = new QLineEdit;
    num_canopy_surfaces->setText("1");
    num_canopy_surfaces->setFixedWidth(50);

    hlayout1->addWidget(num_canopy_surfaces_);
    hlayout1->addWidget(num_canopy_surfaces);
    hlayout1->addSpacerItem(space1);

    //CANOPY SURFACE TYPE
    QLabel *canopy_surf_type_ = new QLabel("Enter canopy surface type:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //canopy_surf_type = new QComboBox;
    canopy_surf_type->setFixedWidth(100);
    canopy_surf_type->addItem("FLAT ");
    canopy_surf_type->addItem("Other");

    hlayout2->addWidget(canopy_surf_type_);
    hlayout2->addWidget(canopy_surf_type);
    hlayout2->addSpacerItem(space1);

    //CANOPY BOUNDARY
    QLabel *canopy_boundary_ = new QLabel("Enter type of canopy boundary:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //canopy_boundary = new QComboBox;
    canopy_boundary->setFixedWidth(100);
    canopy_boundary->addItem("C");
    canopy_boundary->addItem("Other");

    hlayout3->addWidget(canopy_boundary_);
    hlayout3->addWidget(canopy_boundary);
    hlayout3->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //height_of_plane = new QLineEdit;
    height_of_plane->setText("18");
    height_of_plane->setFixedWidth(50);

    hlayout4->addWidget(height_of_plane_);
    hlayout4->addWidget(height_of_plane);
    hlayout4->addSpacerItem(space1);

    //CIRCLE CENTER
    QLabel *circle_center_ = new QLabel("Enter circle center:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //circle_center1 = new QLineEdit;
    circle_center1->setText("6");
    circle_center1->setFixedWidth(50);

    //circle_center2 = new QLineEdit;
    circle_center2->setText("6");
    circle_center2->setFixedWidth(50);

    hlayout5->addWidget(circle_center_);
    hlayout5->addWidget(circle_center1);
    hlayout5->addWidget(circle_center2);
    hlayout5->addSpacerItem(space1);

    //CIRCLE RADIUS

    QLabel *circle_radius_ = new QLabel("Enter circle radius:");

    QHBoxLayout *hlayout13 = new QHBoxLayout;

    //circle_radius = new QLineEdit;
    circle_radius->setText("4.2672");
    circle_radius->setFixedWidth(50);

    hlayout13->addWidget(circle_radius_);
    hlayout13->addWidget(circle_radius);
    hlayout13->addSpacerItem(space1);


    //ATTACH GORES
    QLabel *attach_gores_ = new QLabel("Attach gores to canopy?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //attach_gores = new QComboBox;
    attach_gores->setFixedWidth(100);
    attach_gores->addItem("No");
    attach_gores->addItem("Yes");

    hlayout6->addWidget(attach_gores_);
    hlayout6->addWidget(attach_gores);
    hlayout6->addSpacerItem(space1);

    //CUT VENT
    QLabel *cut_vent_ = new QLabel("Cut a vent on the canopy?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //cut_vent = new QComboBox;
    cut_vent->setFixedWidth(100);
    cut_vent->addItem("No");
    cut_vent->addItem("Yes");

    hlayout7->addWidget(cut_vent_);
    hlayout7->addWidget(cut_vent);
    hlayout7->addSpacerItem(space1);

    //ATTACH STRINGS TO CANOPY
    QLabel *attach_strings_ = new QLabel("Attach strings to canopy?");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //attach_strings = new QComboBox;
    attach_strings->setFixedWidth(100);
    attach_strings->addItem("Yes");
    attach_strings->addItem("No");

    hlayout8->addWidget(attach_strings_);
    hlayout8->addWidget(attach_strings);
    hlayout8->addSpacerItem(space1);

    //NUMBER OF CHORDS
    QLabel *num_chords_ = new QLabel("Enter number of chords:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //num_chords = new QLineEdit;
    num_chords->setText("28");
    num_chords->setFixedWidth(50);

    hlayout9->addWidget(num_chords_);
    hlayout9->addWidget(num_chords);
    hlayout9->addSpacerItem(space1);

    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_ = new QLabel("Enter initial position of load:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    //init_pos_load1 = new QLineEdit;
    init_pos_load1->setText("6");
    init_pos_load1->setFixedWidth(50);

    //init_pos_load2= new QLineEdit;
    init_pos_load2->setText("6");
    init_pos_load2->setFixedWidth(50);

    //init_pos_load3 = new QLineEdit;
    init_pos_load3->setText("12.451");
    init_pos_load3->setFixedWidth(50);

    hlayout10->addWidget(init_pos_load_);
    hlayout10->addWidget(init_pos_load1);
    hlayout10->addWidget(init_pos_load2);
    hlayout10->addWidget(init_pos_load3);
    hlayout10->addSpacerItem(space1);

    //INSTALL STRINGS TO RGB
    QLabel *install_strings_toRGB_ = new QLabel("Install the strings to RGB?");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    //install_strings_toRGB = new QComboBox;
    install_strings_toRGB->setFixedWidth(100);
    install_strings_toRGB->addItem("Yes");
    install_strings_toRGB->addItem("No");

    hlayout11->addWidget(install_strings_toRGB_);
    hlayout11->addWidget(install_strings_toRGB);
    hlayout11->addSpacerItem(space1);

    //BODY INDEX
    QLabel *body_index_ = new QLabel("Enter the body index of the target RGB:");

    QHBoxLayout *hlayout12 = new QHBoxLayout;

    //body_index = new QLineEdit;
    body_index->setText("1");
    body_index->setFixedWidth(50);

    hlayout12->addWidget(body_index_);
    hlayout12->addWidget(body_index);
    hlayout12->addSpacerItem(space1);


    QVBoxLayout *page4layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);
    vlayout1->addLayout(hlayout12);
    vlayout1->addLayout(hlayout13);


    page4layout->addLayout(vlayout1);

    page4->setLayout(page4layout);

    return page4;

}

QWizardPage* C9_Wizard::createfifthpage()
{
    QWizardPage *page5 = new QWizardPage;
    page5->setTitle("C9 Parameters: Page 5 --> Airfoil Parameters (1)");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //GPU SOLVER
    QLabel *gpu_solver_ = new QLabel("Use GPU Solver?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //gpu_solver = new QComboBox;
    gpu_solver->setFixedWidth(100);
    gpu_solver->addItem("No");
    gpu_solver->addItem("Yes");

    hlayout1->addWidget(gpu_solver_);
    hlayout1->addWidget(gpu_solver);
    hlayout1->addSpacerItem(space1);

    //FLUID SOLVER

    //GPU SOLVER
    QLabel *fluid_solver_ = new QLabel("Turn off fluid solver?");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //fluid_solver = new QComboBox;
    fluid_solver->setFixedWidth(100);
    fluid_solver->addItem("No");
    fluid_solver->addItem("Yes");

    hlayout2->addWidget(fluid_solver_);
    hlayout2->addWidget(fluid_solver);
    hlayout2->addSpacerItem(space1);

    //USE POROSITY
    QLabel *use_porosity_ = new QLabel("Use porosity?");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //use_porosity = new QComboBox;
    use_porosity->setFixedWidth(100);
    use_porosity->addItem("Yes");
    use_porosity->addItem("No");

    hlayout3->addWidget(use_porosity_);
    hlayout3->addWidget(use_porosity);
    hlayout3->addSpacerItem(space1);

    //VISCOUS PARAMETER
    QLabel *viscous_param_ = new QLabel("Enter viscous parameter:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //viscous_param = new QLineEdit;
    viscous_param->setText("604.333");
    viscous_param->setFixedWidth(100);

    hlayout4->addWidget(viscous_param_);
    hlayout4->addWidget(viscous_param);
    hlayout4->addSpacerItem(space1);

    //INERTIAL PARAMETER
    QLabel *inertial_param_ = new QLabel("Enter inertial parameter:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //inertial_param = new QLineEdit;
    inertial_param->setText("0.0");
    inertial_param->setFixedWidth(100);

    hlayout5->addWidget(inertial_param_);
    hlayout5->addWidget(inertial_param);
    hlayout5->addSpacerItem(space1);

    //SMOOTHING RADIUS
    QLabel *smooth_radius_ = new QLabel("Enter factor of smoothing radius:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //smooth_radius = new QLineEdit;
    smooth_radius->setText("1.0");
    smooth_radius->setFixedWidth(100);

    hlayout6->addWidget(smooth_radius_);
    hlayout6->addWidget(smooth_radius);
    hlayout6->addSpacerItem(space1);

    //PAYLOAD
    QLabel *payload_ = new QLabel("Enter payload:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //payload = new QLineEdit;
    payload->setText("100");
    payload->setFixedWidth(100);

    hlayout7->addWidget(payload_);
    hlayout7->addWidget(payload);
    hlayout7->addSpacerItem(space1);

    //SUB STEP NUMBER
    QLabel *sub_step_num_ = new QLabel("Enter interior sub step number:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //sub_step_num = new QLineEdit;
    sub_step_num->setText("10");
    sub_step_num->setFixedWidth(100);

    hlayout8->addWidget(sub_step_num_);
    hlayout8->addWidget(sub_step_num);
    hlayout8->addSpacerItem(space1);

    //AREA DENSITY
    QLabel *area_density_ = new QLabel("Enter area density of canopy:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //area_density = new QLineEdit;
    area_density->setText("5.0");
    area_density->setFixedWidth(100);

    hlayout9->addWidget(area_density_);
    hlayout9->addWidget(area_density);
    hlayout9->addSpacerItem(space1);


    QVBoxLayout *page5layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    //vlayout1->addLayout(hlayout10);
    //vlayout1->addLayout(hlayout11);
    //vlayout1->addLayout(hlayout12);
    //vlayout1->addLayout(hlayout13);


    page5layout->addLayout(vlayout1);

    page5->setLayout(page5layout);

    return page5;

}


QWizardPage* C9_Wizard::createsixthpage()
{
    QWizardPage *page6 = new QWizardPage;
    page6->setTitle("C9 Parameters: Page 6 --> Airfoil Parameters (2)");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //FABRIC SPRING CONSTANT
    QLabel *fab_spring_const_ = new QLabel("Enter fabric spring constant:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //fab_spring_const = new QLineEdit;
    fab_spring_const->setText("5000");
    fab_spring_const->setFixedWidth(100);

    hlayout1->addWidget(fab_spring_const_);
    hlayout1->addWidget(fab_spring_const);
    hlayout1->addSpacerItem(space1);

    //FABRIC DAMPING CONSTANT
    QLabel *fab_damping_const_ = new QLabel("Enter fabric damping constant:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //fab_damping_const = new QLineEdit;
    fab_damping_const->setText("0.01");
    fab_damping_const->setFixedWidth(100);

    hlayout2->addWidget(fab_damping_const_);
    hlayout2->addWidget(fab_damping_const);
    hlayout2->addSpacerItem(space1);

    //FABRIC FRICTION CONSTANT
    QLabel *fab_friction_const_ = new QLabel("Enter fabric friction constant:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //fab_friction_const = new QLineEdit;
    fab_friction_const->setText("0.15");
    fab_friction_const->setFixedWidth(100);

    hlayout3->addWidget(fab_friction_const_);
    hlayout3->addWidget(fab_friction_const);
    hlayout3->addSpacerItem(space1);

    //FABRIC POINT MASS
    QLabel *fab_point_mass_ = new QLabel("Enter fabric point mass:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //fab_point_mass = new QLineEdit;
    fab_point_mass->setText("0.001");
    fab_point_mass->setFixedWidth(100);

    hlayout4->addWidget(fab_point_mass_);
    hlayout4->addWidget(fab_point_mass);
    hlayout4->addSpacerItem(space1);

    //FABRIC THICKNESS
    QLabel *fab_thickness_ = new QLabel("Enter fabric thickness:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //fab_thickness = new QLineEdit;
    fab_thickness->setText("0.001");
    fab_thickness->setFixedWidth(100);

    hlayout5->addWidget(fab_thickness_);
    hlayout5->addWidget(fab_thickness);
    hlayout5->addSpacerItem(space1);

    //FABRIC ROUNDING TOLERANCE
    QLabel *fab_rounding_tol_ = new QLabel("Enter fabric rounding tolerance:");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //fab_rounding_tol = new QLineEdit;
    fab_rounding_tol->setText("0.000001");
    fab_rounding_tol->setFixedWidth(100);

    hlayout6->addWidget(fab_rounding_tol_);
    hlayout6->addWidget(fab_rounding_tol);
    hlayout6->addSpacerItem(space1);

    //______________________________________________//


    //STRING SPRING CONSTANT
    QLabel *str_spring_const_ = new QLabel("Enter string spring constant:");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //str_spring_const = new QLineEdit;
    str_spring_const->setText("5000");
    str_spring_const->setFixedWidth(100);

    hlayout7->addWidget(str_spring_const_);
    hlayout7->addWidget(str_spring_const);
    hlayout7->addSpacerItem(space1);

    //STRING  DAMPING CONSTANT
    QLabel *str_damping_const_ = new QLabel("Enter string damping constant:");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //str_damping_const = new QLineEdit;
    str_damping_const->setText("0.01");
    str_damping_const->setFixedWidth(100);

    hlayout8->addWidget(str_damping_const_);
    hlayout8->addWidget(str_damping_const);
    hlayout8->addSpacerItem(space1);

    //STRING  FRICTION CONSTANT
    QLabel *str_friction_const_ = new QLabel("Enter string friction constant:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //str_friction_const = new QLineEdit;
    str_friction_const->setText("0.15");
    str_friction_const->setFixedWidth(100);

    hlayout9->addWidget(str_friction_const_);
    hlayout9->addWidget(str_friction_const);
    hlayout9->addSpacerItem(space1);

    //STRING POINT MASS
    QLabel *str_point_mass_ = new QLabel("Enter string point mass:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    //str_point_mass = new QLineEdit;
    str_point_mass->setText("0.0015");
    str_point_mass->setFixedWidth(100);

    hlayout10->addWidget(str_point_mass_);
    hlayout10->addWidget(str_point_mass);
    hlayout10->addSpacerItem(space1);

    //STRING THICKNESS
    QLabel *str_thickness_ = new QLabel("Enter string thickness:");

    QHBoxLayout *hlayout11 = new QHBoxLayout;

    //str_thickness = new QLineEdit;
    str_thickness->setText("0.004");
    str_thickness->setFixedWidth(100);

    hlayout11->addWidget(str_thickness_);
    hlayout11->addWidget(str_thickness);
    hlayout11->addSpacerItem(space1);

    //STRING ROUNDING TOLERANCE
    QLabel *str_rounding_tol_ = new QLabel("Enter string rounding tolerance:");

    QHBoxLayout *hlayout12 = new QHBoxLayout;

    //str_rounding_tol = new QLineEdit;
    str_rounding_tol->setText("0.000004");
    str_rounding_tol->setFixedWidth(100);

    hlayout12->addWidget(str_rounding_tol_);
    hlayout12->addWidget(str_rounding_tol);
    hlayout12->addSpacerItem(space1);

    QVBoxLayout *page6layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);
    vlayout1->addLayout(hlayout12);
    //vlayout1->addLayout(hlayout13);


    page6layout->addLayout(vlayout1);

    page6->setLayout(page6layout);

    return page6;

}


QWizardPage* C9_Wizard::createseventhpage()
{
    QWizardPage *page7 = new QWizardPage;
    page7->setTitle("C9 Parameters: Page 7 --> Boundary Parameters and Movie Options");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //BOUNDARY PARAMETERS
    QLabel *lower_boundary_ = new QLabel("For lower boundary in 2-th dimension:");

    //DIRICHLET TYPE
    QLabel *lower_type_of_dirichlet_ = new QLabel("Enter type of Dirichlet boundary:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //lower_type_of_dirichlet = new QComboBox;
    lower_type_of_dirichlet->setFixedWidth(200);
    lower_type_of_dirichlet->addItem("CONSTANT_STATE");
    lower_type_of_dirichlet->addItem("FLOW_THROUGH");

    hlayout1->addWidget(lower_type_of_dirichlet_);
    hlayout1->addWidget(lower_type_of_dirichlet);
    hlayout1->addSpacerItem(space1);

    //VELOCITY
    QLabel *velocity_ = new QLabel("Enter velocity:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //velocity1 = new QLineEdit;
    velocity1->setText("0");
    velocity1->setFixedWidth(50);

    //velocity2= new QLineEdit;
    velocity2->setText("0");
    velocity2->setFixedWidth(50);

    //velocity3 = new QLineEdit;
    velocity3->setText("3");
    velocity3->setFixedWidth(50);

    hlayout2->addWidget(velocity_);
    hlayout2->addWidget(velocity1);
    hlayout2->addWidget(velocity2);
    hlayout2->addWidget(velocity3);
    hlayout2->addSpacerItem(space1);

    //PRESSURE
    QLabel *pressure_ = new QLabel("Enter pressure:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //pressure = new QLineEdit;
    pressure->setText("0");
    pressure->setFixedWidth(50);

    hlayout3->addWidget(pressure_);
    hlayout3->addWidget(pressure);
    hlayout3->addSpacerItem(space1);

    QLabel *upper_boundary_ = new QLabel("For upper boundary in 2-th dimension:");

    //DIRICHLET TYPE
    QLabel *upper_type_of_dirichlet_ = new QLabel("Enter type of Dirichlet boundary:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //upper_type_of_dirichlet = new QComboBox;
    upper_type_of_dirichlet->setFixedWidth(200);
    upper_type_of_dirichlet->addItem("FLOW_THROUGH");
    upper_type_of_dirichlet->addItem("CONSTANT_STATE");

    hlayout4->addWidget(upper_type_of_dirichlet_);
    hlayout4->addWidget(upper_type_of_dirichlet);
    hlayout4->addSpacerItem(space1);


    //__________________________________________//
    //MOVIE OPTIONS

    //YZ CROSS-SECTION MOVIE
    QLabel *yz_movie_ = new QLabel("Make a yz cross-section movie?");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //yz_movie = new QComboBox;
    yz_movie->setFixedWidth(100);
    yz_movie->addItem("No");
    yz_movie->addItem("Yes");

    hlayout5->addWidget(yz_movie_);
    hlayout5->addWidget(yz_movie);
    hlayout5->addSpacerItem(space1);

    //XZ CROSS-SECTION MOVIE
    QLabel *xz_movie_ = new QLabel("Make a xz cross-section movie?");

    QHBoxLayout *hlayout6 = new QHBoxLayout;

    //xz_movie = new QComboBox;
    xz_movie->setFixedWidth(100);
    xz_movie->addItem("No");
    xz_movie->addItem("Yes");

    hlayout6->addWidget(xz_movie_);
    hlayout6->addWidget(xz_movie);
    hlayout6->addSpacerItem(space1);

    //XY CROSS-SECTION MOVIE
    QLabel *xy_movie_ = new QLabel("Make a xy cross-section movie?");

    QHBoxLayout *hlayout7 = new QHBoxLayout;

    //xy_movie = new QComboBox;
    xy_movie->setFixedWidth(100);
    xy_movie->addItem("No");
    xy_movie->addItem("Yes");

    hlayout7->addWidget(xy_movie_);
    hlayout7->addWidget(xy_movie);
    hlayout7->addSpacerItem(space1);

    //VELOCITY VECTOR MOVIE
    QLabel *velocity_vector_ = new QLabel("Make a velocity vector field movie?");

    QHBoxLayout *hlayout8 = new QHBoxLayout;

    //velocity_vector = new QComboBox;
    velocity_vector->setFixedWidth(100);
    velocity_vector->addItem("Yes");
    velocity_vector->addItem("No");

    hlayout8->addWidget(velocity_vector_);
    hlayout8->addWidget(velocity_vector);
    hlayout8->addSpacerItem(space1);

    //SURFACE STRESS
    QLabel *surface_stress_ = new QLabel("Plot surface stress?");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    //surface_stress = new QComboBox;
    surface_stress->setFixedWidth(100);
    surface_stress->addItem("No");
    surface_stress->addItem("Yes");

    hlayout9->addWidget(surface_stress_);
    hlayout9->addWidget(surface_stress);
    hlayout9->addSpacerItem(space1);


    QVBoxLayout *page7layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    vlayout1->addWidget(lower_boundary_);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(hlayout2);
    vlayout1->addLayout(hlayout3);
    vlayout1->addWidget(upper_boundary_);
    vlayout1->addLayout(hlayout4);
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout5);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);

    page7layout->addLayout(vlayout1);

    page7->setLayout(page7layout);

    return page7;

}


QWizardPage* C9_Wizard::createdebuggingpage()
{
    QWizardPage *page_debug = new QWizardPage;
    page_debug->setTitle("C9 Parameters: Page 8 --> Debugging");

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //DEBUGGING ON OR OFF
    QLabel *debug_ = new QLabel("Use debugging?");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    //debug = new QComboBox;
    debug->setFixedWidth(100);
    debug->addItem("No");
    debug->addItem("Yes");

    hlayout1->addWidget(debug_);
    hlayout1->addWidget(debug);
    hlayout1->addSpacerItem(space1);

    //DEBUGGING STRINGS
    QLabel *debug_strings_ = new QLabel("Enter the debugging strings:");

    //debug_string_space1 = new QLineEdit;
    debug_string_space1->setFixedWidth(200);

    //debug_string_space2 = new QLineEdit;
    debug_string_space2->setFixedWidth(200);

    //debug_string_space3 = new QLineEdit;
    debug_string_space3->setFixedWidth(200);

    //debug_string_space4 = new QLineEdit;
    debug_string_space4->setFixedWidth(200);

    //debug_string_space5 = new QLineEdit;
    debug_string_space5->setFixedWidth(200);

    //debug_string_space6 = new QLineEdit;
    debug_string_space6->setFixedWidth(200);

    //debug_string_space7 = new QLineEdit;
    debug_string_space7->setFixedWidth(200);

    //debug_string_space8 = new QLineEdit;
    debug_string_space8->setFixedWidth(200);

    //debug_string_space9 = new QLineEdit;
    debug_string_space9->setFixedWidth(200);

    //debug_string_space10 = new QLineEdit;
    debug_string_space10->setFixedWidth(200);

    //debug_string_space11 = new QLineEdit;
    debug_string_space11->setFixedWidth(200);

    //debug_string_space12 = new QLineEdit;
    debug_string_space12->setFixedWidth(200);

    QVBoxLayout *vlayout_debug_string = new QVBoxLayout;
    vlayout_debug_string->addWidget(debug_strings_);
    vlayout_debug_string->addWidget(debug_string_space1);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space2);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space3);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space4);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space5);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space6);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space7);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space8);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space9);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space10);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space11);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space12);
    vlayout_debug_string->addSpacerItem(space1);
    vlayout_debug_string->addWidget(debug_string_space13);

    //SAMPLE LINE TYPE
    QLabel *sample_line_type_ = new QLabel("Enter the sample line type:");

    QHBoxLayout *hlayout2 = new QHBoxLayout;

    //sample_line_type = new QLineEdit;
    sample_line_type->setText("2");
    sample_line_type->setFixedWidth(100);

    hlayout2->addWidget(sample_line_type_);
    hlayout2->addWidget(sample_line_type);
    hlayout2->addSpacerItem(space1);

    //SAMPLE LINE COORDINATE
    QLabel *sample_line_coord_ = new QLabel("Enter the sample line coordinate:");

    QHBoxLayout *hlayout3 = new QHBoxLayout;

    //sample_line_coord1 = new QLineEdit;
    sample_line_coord1->setText("6.0");
    sample_line_coord1->setFixedWidth(100);

    //sample_line_coord2 = new QLineEdit;
    sample_line_coord2->setText("6.0");
    sample_line_coord2->setFixedWidth(100);

    hlayout3->addWidget(sample_line_coord_);
    hlayout3->addWidget(sample_line_coord1);
    hlayout3->addWidget(sample_line_coord2);
    hlayout3->addSpacerItem(space1);

    //START STEP
    QLabel *start_step_ = new QLabel("Enter the start step for sample:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    //start_step = new QLineEdit;
    start_step->setText("0");
    start_step->setFixedWidth(100);

    hlayout4->addWidget(start_step_);
    hlayout4->addWidget(start_step);
    hlayout4->addSpacerItem(space1);

    //END STEP
    QLabel *end_step_ = new QLabel("Enter the end step for sample:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    //end_step = new QLineEdit;
    end_step->setText("10");
    end_step->setFixedWidth(100);

    hlayout5->addWidget(end_step_);
    hlayout5->addWidget(end_step);
    hlayout5->addSpacerItem(space1);

    QVBoxLayout *page_debug_layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    //vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout1);
    vlayout1->addLayout(vlayout_debug_string);
    vlayout1->addLayout(hlayout3);
    vlayout1->addLayout(hlayout4);
    vlayout1->addLayout(hlayout5);

    page_debug_layout->addLayout(vlayout1);

    page_debug->setLayout(page_debug_layout);

    return page_debug;

}

*/

/*
{
dom_lim_0_first = new QString;
dom_lim_0_first = first_bounds0->displayText();
dom_lim_0_last = new QString;
dom_lim_0_last = last_bounds0->displayText();
dom_lim_1_first = new QString;
dom_lim_1_first = first_bounds1->displayText();
dom_lim_1_last = new QString;
dom_lim_1_last = last_bounds1->displayText();
dom_lim_2_first = new QString;
dom_lim_2_first = first_bounds2->displayText();
dom_lim_2_last = new QString;
dom_lim_2_last = last_bounds2->displayText();

compgrid_1 = new QString;
compgrid_1 = grid_coord1->displayText();
compgrid_2 = new QString;
compgrid_2 = grid_coord2->displayText();
compgrid_3 = new QString;
compgrid_3 = grid_coord3->displayText();

lowerbound_0 = new QString;
lowerbound_0 = lowerbound0->currentText();
upperbound_0 = new QString;
upperbound_0 = upperbound0->currentText();
lowerbound_1 = new QString;
lowerbound_1 = lowerbound1->currentText();
upperbound_1 = new QString;
upperbound_1 = upperbound1->currentText();
lowerbound_2 = new QString;
lowerbound_2 = lowerbound2->currentText();
upperbound_2 = new QString;
upperbound_2 = upperbound2->currentText();

max_time_ = new QString;
max_time_ = max_time->displayText();
max_step_ = new QString;
max_step_ = max_step->displayText();
print_interval_ = new QString;
print_interval_ = print_interval->displayText();
mv_frame_interval_ = new QString;
mv_frame_interval_ = mv_frame_interval->displayText();
CFL_factor_ = new QString;
CFL_factor_ = CFL_factor->displayText();
redistribution_interval_ = new QString;
redistribution_interval_ = redistribution_interval->displayText();
turn_onoff_redist_int_ = new QString;
turn_onoff_redist_int_ = turn_onoff_redist_int->currentText();

projection_ = new QString;
projection_ = projection->currentText();
advection_order_ = new QString;
advection_order_ = advection_order->displayText();
density_and_visc_1 = new QString;
density_and_visc_1 = density_and_visc1->displayText();
density_and_visc_2 = new QString;
density_and_visc_2 = density_and_visc2->displayText();
gravity_ = new QString;
gravity_ = gravity->displayText();

add_rigbody_ = new QString;
add_rigbody_ = add_rigbody->currentText();
num_rigbodies_ = new QString;
num_rigbodies_ = num_rigbodies->displayText();
type_of_rigbody_ = new QString;
type_of_rigbody_ = type_of_rigbody->currentText();
center_of_rigbody_1 = new QString;
center_of_rigbody_1 = center_of_rigbody1->displayText();
center_of_rigbody_2 = new QString;
center_of_rigbody_2 = center_of_rigbody2->displayText();
center_of_rigbody_3 = new QString;
center_of_rigbody_3 = center_of_rigbody3->displayText();
radius_of_rigbody_1 = new QString;
radius_of_rigbody_1 = radius_of_rigbody1->displayText();
radius_of_rigbody_2 = new QString;
radius_of_rigbody_2 = radius_of_rigbody2->displayText();
radius_of_rigbody_3 = new QString;
radius_of_rigbody_3 = radius_of_rigbody3->displayText();
preset_motion_ = new QString;
preset_motion_ = preset_motion->currentText();
dynamic_motion_ = new QString;
dynamic_motion_ = dynamic_motion->currentText();
direction_of_motion_1 = new QString;
direction_of_motion_1 = direction_of_motion1->displayText();
direction_of_motion_2 = new QString;
direction_of_motion_2 = direction_of_motion2->displayText();
direction_of_motion_3 = new QString;
direction_of_motion_3 = direction_of_motion3->displayText();
total_mass_ = new QString;
total_mass_ = total_mass->displayText();
init_center_mass_1 = new QString;
init_center_mass_1 = init_center_mass1->displayText();
init_center_mass_2 = new QString;
init_center_mass_2 = init_center_mass2->displayText();
init_center_mass_3 = new QString;
init_center_mass_3 = init_center_mass3->displayText();
init_center_mass_vel_1 = new QString;
init_center_mass_vel_1 = init_center_mass_vel1->displayText();
init_center_mass_vel_2 = new QString;
init_center_mass_vel_2 = init_center_mass_vel2->displayText();
init_center_mass_vel_3 = new QString;
init_center_mass_vel_3 = init_center_mass_vel3->displayText();

num_canopy_surfaces_ = new QString;
num_canopy_surfaces_ = num_canopy_surfaces->displayText();
canopy_surf_type_ = new QString;
canopy_surf_type_ = canopy_surf_type->currentText();
canopy_boundary_ = new QString;
canopy_boundary_ = canopy_boundary->currentText();
height_of_plane_ = new QString;
height_of_plane_ = height_of_plane->displayText();
circle_center_1 = new QString;
circle_center_1 = circle_center1->displayText();
circle_center_2 = new QString;
circle_center_2 = circle_center2->displayText();
circle_radius_ = new QString;
circle_radius_ = circle_radius->displayText();
attach_gores_ = new QString;
attach_gores_ = attach_gores->currentText();
cut_vent_ = new QString;
cut_vent_ = cut_vent->currentText();
attach_strings_ = new QString;
attach_strings_ = attach_strings->currentText();
num_chords_ = new QString;
num_chords_ = num_chords->displayText();
init_pos_load_1 = new QString;
init_pos_load_1 = init_pos_load1->displayText();
init_pos_load_2 = new QString;
init_pos_load_2 = init_pos_load2->displayText();
init_pos_load_3 = new QString;
init_pos_load_3 = init_pos_load3->displayText();
install_strings_toRGB_ = new QString;
install_strings_toRGB_ = install_strings_toRGB->currentText();
body_index_ = new QString;
body_index_ = body_index->displayText();

gpu_solver_ = new QString;
gpu_solver_ = gpu_solver->currentText();
fluid_solver_ = new QString;
fluid_solver_ = fluid_solver->currentText();
use_porosity_ = new QString;
use_porosity_ = use_porosity->currentText();
viscous_param_ = new QString;
viscous_param_ = viscous_param->displayText();
inertial_param_ = new QString;
inertial_param_ = inertial_param->displayText();
smooth_radius_ = new QString;
smooth_radius_ = smooth_radius->displayText();

payload_ = new QString;
payload_ = payload->displayText();
sub_step_num_ = new QString;
sub_step_num_ = sub_step_num->displayText();
area_density_ = new QString;
area_density_ = area_density->displayText();

fab_spring_const_ = new QString;
fab_spring_const_ = fab_spring_const->displayText();
fab_damping_const_ = new QString;
fab_damping_const_ = fab_damping_const->displayText();
fab_friction_const_ = new QString;
fab_friction_const_ = fab_friction_const->displayText();
fab_point_mass_ = new QString;
fab_point_mass_ = fab_point_mass->displayText();
fab_thickness_ = new QString;
fab_thickness_ = fab_thickness->displayText();
fab_rounding_tol_ = new QString;
fab_rounding_tol_ = fab_rounding_tol->displayText();

str_spring_const_ = new QString;
str_spring_const_ = str_spring_const->displayText();
str_damping_const_ = new QString;
str_damping_const_ = str_damping_const->displayText();
str_friction_const_ = new QString;
str_friction_const_ = str_friction_const->displayText();
str_point_mass_ = new QString;
str_point_mass_ = str_point_mass->displayText();
str_thickness_ = new QString;
str_thickness_ = str_thickness->displayText();
str_rounding_tol_ = new QString;
str_rounding_tol_ = str_rounding_tol->displayText();

//STRAIN LIMIT NOT INCLUDED - WAITING FOR MORE DEVELOPED CODE

lower_type_of_dirichlet_ = new QString;
lower_type_of_dirichlet_ = lower_type_of_dirichlet->currentText();
velocity_1 = new QString;
velocity_1 = velocity1->displayText();
velocity_2 = new QString;
velocity_2 = velocity2->displayText();
velocity_3 = new QString;
velocity_3 = velocity3->displayText();
pressure_ = new QString;
pressure_ = pressure->displayText();
upper_type_of_dirichlet_ = new QString;
upper_type_of_dirichlet_ = upper_type_of_dirichlet->currentText();

yz_movie_ = new QString;
yz_movie_ = yz_movie->currentText();
xz_movie_ = new QString;
xz_movie_ = xz_movie->currentText();
xy_movie_ = new QString;
xy_movie_ = xy_movie->currentText();
velocity_vector_ = new QString;
velocity_vector_ = velocity_vector->currentText();
surface_stress_ = new QString;
surface_stress_ = surface_stress->currentText();

debug_ = new QString;
debug_ = debug->currentText();
debug_string_space1_ = new QString;
debug_string_space1_ = debug_string_space1->displayText();
debug_string_space2_ = new QString;
debug_string_space2_ = debug_string_space2->displayText();
debug_string_space3_ = new QString;
debug_string_space3_ = debug_string_space3->displayText();
debug_string_space4_ = new QString;
debug_string_space4_ = debug_string_space4->displayText();
debug_string_space5_ = new QString;
debug_string_space5_ = debug_string_space5->displayText();
debug_string_space6_ = new QString;
debug_string_space6_ = debug_string_space6->displayText();
debug_string_space7_ = new QString;
debug_string_space7_ = debug_string_space7->displayText();
debug_string_space8_ = new QString;
debug_string_space8_ = debug_string_space8->displayText();
debug_string_space9_ = new QString;
debug_string_space9_ = debug_string_space9->displayText();
debug_string_space10_ = new QString;
debug_string_space10_ = debug_string_space10->displayText();
debug_string_space11_ = new QString;
debug_string_space11_ = debug_string_space11->displayText();
debug_string_space12_ = new QString;
debug_string_space12_ = debug_string_space12->displayText();
debug_string_space13_ = new QString;
debug_string_space13_ = debug_string_space13->displayText();

sample_line_type_ = new QString;
sample_line_type_ = sample_line_type->displayText();
sample_line_coord_1 = new QString;
sample_line_coord_1 = sample_line_coord1->displayText();
sample_line_coord_2 = new QString;
sample_line_coord_2 = sample_line_coord2->displayText();
start_step_ = new QString;
start_step_ = start_step->displayText();
end_step_ = new QString;
end_step_ = end_step->displayText();

}


*/
