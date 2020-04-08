#include "c9_wizard.h"

C9_Wizard::C9_Wizard(QWidget *parent)
    : QWizard(parent)
{


    intro = new IntroPage;
    //intro->initializePage();
    addPage(intro);

    first = new FirstPage;
    //first->initializePage();
    addPage(first);

    second = new SecondPage;
    //second->initializePage();
    C9_Wizard::addPage(second);

    third = new ThirdPage;
    //third->initializePage();
    C9_Wizard::addPage(third);

    fourth = new FourthPage;
    //fourth->initializePage();
    C9_Wizard::addPage(fourth);

    fifth = new FifthPage;
    //fifth->initializePage();
    C9_Wizard::addPage(fifth);

    sixth = new SixthPage;
    //sixth->initializePage();
    C9_Wizard::addPage(sixth);

    seventh = new SeventhPage;
    //seventh->initializePage();
    C9_Wizard::addPage(seventh);

    DEBUG = new DebugPage;
    //DEBUG->initializePage();
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

    //connect(this->button(BackButton),SIGNAL(clicked()), this, SLOT(Refresh()));
    //connect(this->button(BackButton),SIGNAL(clicked()), this, SLOT(cleanupPage())) ;



    connect(this->button(FinishButton),SIGNAL(clicked()), this, SLOT(Write()));


    setWindowTitle(tr("C9 Wizard"));
}



IntroPage::IntroPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module");

    mainlabel = new QLabel("This wizard will help you write an in-file for the parachute type: C9");

    QVBoxLayout *vlayout_directory = new QVBoxLayout;

    directory_label = new QLabel("How would you like to save the input file?");


    directory_name = new QLineEdit;
    directory_name->setText("/Users/Kyle/Parachute_GUIs/Output_Files/input-file.txt");
    directory_name->setFixedWidth(500);
    directory_name->setStyleSheet("color: blue; background-color: yellow");

    QSpacerItem *space1 = new QSpacerItem(500,1);

    vlayout_directory->addWidget(directory_label);
    vlayout_directory->addSpacerItem(space1);
    vlayout_directory->addWidget(directory_name);
    vlayout_directory->addSpacerItem(space1);




    //MOVE TO PAGE 3 *******************************************************************************************************************//



    //CHECKBOX DISPLAY FOR RIGID BODY PARAMETERS

    //rigid_body_label = new QLabel("Will you be using a rigid body for this initializaion?");

    //rigid_body_decision = new QComboBox;
    //rigid_body_decision->addItem("Yes");
    //rigid_body_decision->addItem("No");
    //rigid_body_decision->setFixedWidth(150);

    //rigid_body_decision_layout = new QHBoxLayout;
    //rigid_body_decision_layout->addWidget(rigid_body_label);
    //rigid_body_decision_layout->addWidget(rigid_body_decision);


    /*

    rigid_body_check = new QCheckBox(this);
    rigid_body_check->setText("Check here if you will be using a rigid body for this initializaion.");

    rigid_body_sphere = new QCheckBox();
    rigid_body_sphere->setText("Sphere");

    rigid_body_box = new QCheckBox();
    rigid_body_box->setText("Box");

    rigid_body_human = new QCheckBox();
    rigid_body_human->setText("Human");
*/

    finallayout  = new QVBoxLayout;
    finallayout->addWidget(mainlabel);
    finallayout->addLayout(vlayout_directory);
    //finallayout->addLayout(rigid_body_decision_layout);
    //finallayout->addWidget(rigid_body_check);

    setLayout(finallayout);

/*
    connect(rigid_body_check, SIGNAL(clicked(bool)), this, SLOT(rigid_body_toggled(bool)));
    connect(rigid_body_sphere, SIGNAL(clicked(bool)), this, SLOT(spheretoggled(bool)));
    connect(rigid_body_box, SIGNAL(clicked(bool)), this, SLOT(boxtoggled(bool)));
    connect(rigid_body_human, SIGNAL(clicked(bool)), this, SLOT(humantoggled(bool)));


    //FOR SUBSEQUENT LAYOUTS

    //SPHERE

    //CENTER OF RIGID BODY-SPHERE
    QLabel *center_of_sphere_ = new QLabel("Enter center of the sphere:");

    hlayout4 = new QHBoxLayout;

    center_of_sphere1 = new QLineEdit;
    center_of_sphere1->setText("6.01");
    center_of_sphere1->setFixedWidth(100);
    center_of_sphere1->setStyleSheet("color: blue; background-color: yellow");

    center_of_sphere2= new QLineEdit;
    center_of_sphere2->setText("6.01");
    center_of_sphere2->setFixedWidth(100);
    center_of_sphere2->setStyleSheet("color: blue; background-color: yellow");

    center_of_sphere3 = new QLineEdit;
    center_of_sphere3->setText("12");
    center_of_sphere3->setFixedWidth(100);
    center_of_sphere3->setStyleSheet("color: blue; background-color: yellow");

    hlayout4->addWidget(center_of_sphere_);
    hlayout4->addWidget(center_of_sphere1);
    hlayout4->addWidget(center_of_sphere2);
    hlayout4->addWidget(center_of_sphere3);
    hlayout4->addSpacerItem(space1);

    //RADIUS OF RIGID BODY-SPHERE
    QLabel *radius_of_rigbody_ = new QLabel("Enter radius of the sphere:");

    hlayout5 = new QHBoxLayout;

    radius_of_sphere1 = new QLineEdit;
    radius_of_sphere1->setText("0.5");
    radius_of_sphere1->setFixedWidth(100);
    radius_of_sphere1->setStyleSheet("color: blue; background-color: yellow");

    radius_of_sphere2= new QLineEdit;
    radius_of_sphere2->setText("0.5");
    radius_of_sphere2->setFixedWidth(100);
    radius_of_sphere2->setStyleSheet("color: blue; background-color: yellow");

    radius_of_sphere3 = new QLineEdit;
    radius_of_sphere3->setText("0.5");
    radius_of_sphere3->setFixedWidth(100);
    radius_of_sphere3->setStyleSheet("color: blue; background-color: yellow");

    hlayout5->addWidget(radius_of_rigbody_);
    hlayout5->addWidget(radius_of_sphere1);
    hlayout5->addWidget(radius_of_sphere2);
    hlayout5->addWidget(radius_of_sphere3);
    hlayout5->addSpacerItem(space1);

    */

    //**************************************//

    //BOX

    /*

    //CENTER OF RIGID BODY-BOX
        QLabel *center_of_box_ = new QLabel("Enter center of the box:");

        hlayout1 = new QHBoxLayout;

        center_of_box1 = new QLineEdit;
        center_of_box1->setText("6");
        center_of_box1->setFixedWidth(100);
        center_of_box1->setStyleSheet("color: blue; background-color: yellow");

        center_of_box2= new QLineEdit;
        center_of_box2->setText("6");
        center_of_box2->setFixedWidth(100);
        center_of_box2->setStyleSheet("color: blue; background-color: yellow");

        center_of_box3 = new QLineEdit;
        center_of_box3->setText("11.951");
        center_of_box3->setFixedWidth(100);
        center_of_box3->setStyleSheet("color: blue; background-color: yellow");

        hlayout1->addWidget(center_of_box_);
        hlayout1->addWidget(center_of_box1);
        hlayout1->addWidget(center_of_box2);
        hlayout1->addWidget(center_of_box3);
        hlayout1->addSpacerItem(space1);

        //EDGES OF BOX
        QLabel *edges_of_rigbody_ = new QLabel("Enter edges of the box:");

        hlayout2 = new QHBoxLayout;

        edge_of_box1 = new QLineEdit;
        edge_of_box1->setText("0.5");
        edge_of_box1->setFixedWidth(100);
        edge_of_box1->setStyleSheet("color: blue; background-color: yellow");

        edge_of_box2= new QLineEdit;
        edge_of_box2->setText("0.5");
        edge_of_box2->setFixedWidth(100);
        edge_of_box2->setStyleSheet("color: blue; background-color: yellow");

        edge_of_box3 = new QLineEdit;
        edge_of_box3->setText("0.5");
        edge_of_box3->setFixedWidth(100);
        edge_of_box3->setStyleSheet("color: blue; background-color: yellow");

        hlayout2->addWidget(edges_of_rigbody_);
        hlayout2->addWidget(edge_of_box1);
        hlayout2->addWidget(edge_of_box2);
        hlayout2->addWidget(edge_of_box3);
        hlayout2->addSpacerItem(space1);


        */

    //*************************************//

        //HUMAN
/*

        QLabel *vtk_human_ = new QLabel("Enter vtk file directory:");

        hlayout_human0 = new QHBoxLayout;

        human_vtk_directory = new QLineEdit;
        human_vtk_directory->setText("input-vtk/human_body.vtk");
        human_vtk_directory->setFixedWidth(200);
        human_vtk_directory->setStyleSheet("color: blue; background-color: yellow");

        hlayout_human0->addWidget(vtk_human_);
        hlayout_human0->addWidget(human_vtk_directory);
        hlayout_human0->addSpacerItem(space1);



        //CENTER OF THE BODY-HUMAN


        QLabel *center_of_human_ = new QLabel("Enter center of the human:");

        hlayout_human1 = new QHBoxLayout;

        center_of_human1 = new QLineEdit;
        center_of_human1->setText("6");
        center_of_human1->setFixedWidth(100);
        center_of_human1->setStyleSheet("color: blue; background-color: yellow");

        center_of_human2= new QLineEdit;
        center_of_human2->setText("6");
        center_of_human2->setFixedWidth(100);
        center_of_human2->setStyleSheet("color: blue; background-color: yellow");

        center_of_human3 = new QLineEdit;
        center_of_human3->setText("11");
        center_of_human3->setFixedWidth(100);
        center_of_human3->setStyleSheet("color: blue; background-color: yellow");

        hlayout_human1->addWidget(center_of_human_);
        hlayout_human1->addWidget(center_of_human1);
        hlayout_human1->addWidget(center_of_human2);
        hlayout_human1->addWidget(center_of_human3);
        hlayout_human1->addSpacerItem(space1);

        //ENLARGEMENT COEFF
        QLabel *enlargement_coeff_ = new QLabel("Enter enlargement coefficient:");

        hlayout_human2 = new QHBoxLayout;

        enlargement_coeff = new QLineEdit;
        enlargement_coeff->setText("1.5");
        enlargement_coeff->setFixedWidth(100);
        enlargement_coeff->setStyleSheet("color: blue; background-color: yellow");


        hlayout_human2->addWidget(enlargement_coeff_);
        hlayout_human2->addWidget(enlargement_coeff);
        hlayout_human2->addSpacerItem(space1);


   */

        //************************************************************************************************************//

}

/*

void IntroPage::rigid_body_toggled(bool clicked)
{

    if (clicked) {
        finallayout->addWidget(rigid_body_sphere);
        finallayout->addWidget(rigid_body_box);
        finallayout->addWidget(rigid_body_human);
    } else {

        //finallayout->removeWidget(rigid_body_sphere);
        //finallayout->removeWidget(rigid_body_box);
        //finallayout->removeWidget(rigid_body_human);

        //rigid_body_sphere->hide();
        //rigid_body_box->hide();
        //rigid_body_human->hide();

    }

    //finallayout->addWidget(rigid_body_sphere);
    //finallayout->addWidget(rigid_body_box);
    //finallayout->addWidget(rigid_body_human);

}


void  IntroPage::spheretoggled(bool clicked)
{

    if (clicked) {
        finallayout->addLayout(hlayout4);
        finallayout->addLayout(hlayout5);
    } else {

        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);

    }


    //finallayout->addLayout(hlayout4);
    //finallayout->addLayout(hlayout5);

}

void  IntroPage::boxtoggled(bool clicked)
{

    if (clicked) {
        finallayout->addLayout(hlayout1);
        finallayout->addLayout(hlayout2);
    } else {

        //finallayout->removeItem(hlayout1);
        //finallayout->removeItem(hlayout2);

    }


    //finallayout->addLayout(hlayout1);
    //finallayout->addLayout(hlayout2);

}


void  IntroPage::humantoggled(bool clicked)
{

    if (clicked) {
        finallayout->addLayout(hlayout_human0);
        finallayout->addLayout(hlayout_human1);
        finallayout->addLayout(hlayout_human2);
    } else {

        //finallayout->removeItem(hlayout_human0);
        //finallayout->removeItem(hlayout_human1);
        //finallayout->removeItem(hlayout_human2);

    }



   //finallayout->addLayout(hlayout_human0);
   //finallayout->addLayout(hlayout_human1);
   //finallayout->addLayout(hlayout_human2);

}

*/


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
      //bounds0->setText("Enter Bounds:");

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
      //bounds1->setText("Enter Bounds:");

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
      //bounds2->setText("Enter Bounds:");

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


    //***********************************************************************************************************************//

}

//THIRD PAGE INCLUDES RIGID BODY PARAMETERS

ThirdPage::ThirdPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 3");


    QSpacerItem *space1 = new QSpacerItem(500,10);



    //USING RIGID BODY??? IF NOT, GO TO NEXT PAGE


    //PRESET MOTION
    QLabel *GO_TO_NEXT_PAGE = new QLabel("IF YOU ARE NOT USING A RIGID BODY....GO TO THE NEXT PAGE ==>");


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




    //********************************** MOVED FROM INTRO PAGE \/ *************************************************** //

    rigid_body_check = new QCheckBox(this);
    rigid_body_check->setText("Check here if you will be using a rigid body for this initializaion.");

    rigid_body_sphere = new QCheckBox();
    rigid_body_sphere->setText("Sphere");

    rigid_body_box = new QCheckBox();
    rigid_body_box->setText("Box");

    rigid_body_human = new QCheckBox();
    rigid_body_human->setText("Human");


    finallayout  = new QVBoxLayout;
    //finallayout->addWidget(mainlabel);
    //finallayout->addLayout(vlayout_directory);
    //finallayout->addLayout(rigid_body_decision_layout);
    finallayout->addWidget(rigid_body_check);

    //setLayout(finallayout);


    connect(rigid_body_check, SIGNAL(clicked(bool)), this, SLOT(rigid_body_toggled(bool)));
    connect(rigid_body_sphere, SIGNAL(clicked(bool)), this, SLOT(spheretoggled(bool)));
    connect(rigid_body_box, SIGNAL(clicked(bool)), this, SLOT(boxtoggled(bool)));
    connect(rigid_body_human, SIGNAL(clicked(bool)), this, SLOT(humantoggled(bool)));


    //FOR SUBSEQUENT LAYOUTS

    //SPHERE

    //CENTER OF RIGID BODY-SPHERE
    QLabel *center_of_sphere_ = new QLabel("Enter center of the sphere (must match above):");

    for_show_widget_hlayout4 = new QWidget();


    hlayout4 = new QHBoxLayout(for_show_widget_hlayout4);

    center_of_sphere1 = new QLineEdit;
    center_of_sphere1->setText("6.01");
    center_of_sphere1->setFixedWidth(100);
    center_of_sphere1->setStyleSheet("color: blue; background-color: yellow");

    center_of_sphere2= new QLineEdit;
    center_of_sphere2->setText("6.01");
    center_of_sphere2->setFixedWidth(100);
    center_of_sphere2->setStyleSheet("color: blue; background-color: yellow");

    center_of_sphere3 = new QLineEdit;
    center_of_sphere3->setText("12");
    center_of_sphere3->setFixedWidth(100);
    center_of_sphere3->setStyleSheet("color: blue; background-color: yellow");

    hlayout4->addWidget(center_of_sphere_);
    hlayout4->addWidget(center_of_sphere1);
    hlayout4->addWidget(center_of_sphere2);
    hlayout4->addWidget(center_of_sphere3);
    //hlayout4->addSpacerItem(space1);

    //RADIUS OF RIGID BODY-SPHERE
    QLabel *radius_of_rigbody_ = new QLabel("Enter radius of the sphere:");

    for_show_widget_hlayout5 = new QWidget();

    hlayout5 = new QHBoxLayout(for_show_widget_hlayout5);

    radius_of_sphere1 = new QLineEdit;
    radius_of_sphere1->setText("0.5");
    radius_of_sphere1->setFixedWidth(100);
    radius_of_sphere1->setStyleSheet("color: blue; background-color: yellow");

    radius_of_sphere2= new QLineEdit;
    radius_of_sphere2->setText("0.5");
    radius_of_sphere2->setFixedWidth(100);
    radius_of_sphere2->setStyleSheet("color: blue; background-color: yellow");

    radius_of_sphere3 = new QLineEdit;
    radius_of_sphere3->setText("0.5");
    radius_of_sphere3->setFixedWidth(100);
    radius_of_sphere3->setStyleSheet("color: blue; background-color: yellow");

    hlayout5->addWidget(radius_of_rigbody_);
    hlayout5->addWidget(radius_of_sphere1);
    hlayout5->addWidget(radius_of_sphere2);
    hlayout5->addWidget(radius_of_sphere3);
    hlayout5->addSpacerItem(space1);

    //**************************************//

    //BOX

    //CENTER OF RIGID BODY-BOX
        QLabel *center_of_box_ = new QLabel("Enter center of the box (must match above):");

        for_show_widget_hlayout1 = new QWidget();

        hlayout1 = new QHBoxLayout(for_show_widget_hlayout1);

        center_of_box1 = new QLineEdit;
        center_of_box1->setText("6");
        center_of_box1->setFixedWidth(100);
        center_of_box1->setStyleSheet("color: blue; background-color: yellow");

        center_of_box2= new QLineEdit;
        center_of_box2->setText("6");
        center_of_box2->setFixedWidth(100);
        center_of_box2->setStyleSheet("color: blue; background-color: yellow");

        center_of_box3 = new QLineEdit;
        center_of_box3->setText("11.951");
        center_of_box3->setFixedWidth(100);
        center_of_box3->setStyleSheet("color: blue; background-color: yellow");

        hlayout1->addWidget(center_of_box_);
        hlayout1->addWidget(center_of_box1);
        hlayout1->addWidget(center_of_box2);
        hlayout1->addWidget(center_of_box3);
        //hlayout1->addSpacerItem(space1);

        //EDGES OF BOX
        QLabel *edges_of_rigbody_ = new QLabel("Enter edges of the box:");

        for_show_widget_hlayout2 = new QWidget();

        hlayout2 = new QHBoxLayout(for_show_widget_hlayout2);

        edge_of_box1 = new QLineEdit;
        edge_of_box1->setText("0.5");
        edge_of_box1->setFixedWidth(100);
        edge_of_box1->setStyleSheet("color: blue; background-color: yellow");

        edge_of_box2= new QLineEdit;
        edge_of_box2->setText("0.5");
        edge_of_box2->setFixedWidth(100);
        edge_of_box2->setStyleSheet("color: blue; background-color: yellow");

        edge_of_box3 = new QLineEdit;
        edge_of_box3->setText("0.5");
        edge_of_box3->setFixedWidth(100);
        edge_of_box3->setStyleSheet("color: blue; background-color: yellow");

        hlayout2->addWidget(edges_of_rigbody_);
        hlayout2->addWidget(edge_of_box1);
        hlayout2->addWidget(edge_of_box2);
        hlayout2->addWidget(edge_of_box3);
        hlayout2->addSpacerItem(space1);


    //*************************************//

        //HUMAN


        QLabel *vtk_human_ = new QLabel("Enter vtk file directory:");

        for_show_widget_hlayout_human0 = new QWidget();

        hlayout_human0 = new QHBoxLayout(for_show_widget_hlayout_human0);

        human_vtk_directory = new QLineEdit;
        human_vtk_directory->setText("input-vtk/human_body.vtk");
        human_vtk_directory->setFixedWidth(200);
        human_vtk_directory->setStyleSheet("color: blue; background-color: yellow");

        hlayout_human0->addWidget(vtk_human_);
        hlayout_human0->addWidget(human_vtk_directory);
        hlayout_human0->addSpacerItem(space1);



        //CENTER OF THE BODY-HUMAN


        QLabel *center_of_human_ = new QLabel("Enter center of the human (must match above):");

        for_show_widget_hlayout_human1 = new QWidget();

        hlayout_human1 = new QHBoxLayout(for_show_widget_hlayout_human1);

        center_of_human1 = new QLineEdit;
        center_of_human1->setText("6");
        center_of_human1->setFixedWidth(100);
        center_of_human1->setStyleSheet("color: blue; background-color: yellow");

        center_of_human2= new QLineEdit;
        center_of_human2->setText("6");
        center_of_human2->setFixedWidth(100);
        center_of_human2->setStyleSheet("color: blue; background-color: yellow");

        center_of_human3 = new QLineEdit;
        center_of_human3->setText("11");
        center_of_human3->setFixedWidth(100);
        center_of_human3->setStyleSheet("color: blue; background-color: yellow");

        hlayout_human1->addWidget(center_of_human_);
        hlayout_human1->addWidget(center_of_human1);
        hlayout_human1->addWidget(center_of_human2);
        hlayout_human1->addWidget(center_of_human3);
        //hlayout_human1->addSpacerItem(space1);

        //ENLARGEMENT COEFF
        QLabel *enlargement_coeff_ = new QLabel("Enter enlargement coefficient:");

        for_show_widget_hlayout_human2 = new QWidget();

        hlayout_human2 = new QHBoxLayout(for_show_widget_hlayout_human2);

        enlargement_coeff = new QLineEdit;
        enlargement_coeff->setText("1.5");
        enlargement_coeff->setFixedWidth(100);
        enlargement_coeff->setStyleSheet("color: blue; background-color: yellow");


        hlayout_human2->addWidget(enlargement_coeff_);
        hlayout_human2->addWidget(enlargement_coeff);
        hlayout_human2->addSpacerItem(space1);







    //********************************** MOVED FROM INTRO PAGE /\ *************************************************** //






    QVBoxLayout *page3layout = new QVBoxLayout;

    QVBoxLayout *vlayout1 = new QVBoxLayout;
    vlayout1->addSpacerItem(space1);
    vlayout1->addSpacerItem(space1);
    vlayout1->addWidget(GO_TO_NEXT_PAGE);
    vlayout1->addSpacerItem(space1);
    vlayout1->addSpacerItem(space1);
    vlayout1->addLayout(hlayout6);
    vlayout1->addLayout(hlayout7);
    vlayout1->addLayout(hlayout8);
    vlayout1->addLayout(hlayout9);
    vlayout1->addLayout(hlayout10);
    vlayout1->addLayout(hlayout11);

    //NEW
    vlayout1->addLayout(finallayout);


    page3layout->addLayout(vlayout1);

    setLayout(page3layout);


}






void ThirdPage::rigid_body_toggled(bool clicked)
{

    if (clicked) {
        rigid_body_sphere->show();
        rigid_body_box->show();
        rigid_body_human->show();

        finallayout->addWidget(rigid_body_sphere);
        finallayout->addWidget(rigid_body_box);
        finallayout->addWidget(rigid_body_human);
    } else {

        //finallayout->removeWidget(rigid_body_sphere);
        //finallayout->removeWidget(rigid_body_box);
        //finallayout->removeWidget(rigid_body_human);

        rigid_body_sphere->hide();
        rigid_body_box->hide();
        rigid_body_human->hide();

    }

    //finallayout->addWidget(rigid_body_sphere);
    //finallayout->addWidget(rigid_body_box);
    //finallayout->addWidget(rigid_body_human);

}


void  ThirdPage::spheretoggled(bool clicked)
{

    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_widget_hlayout4->show();
        for_show_widget_hlayout5->show();

        finallayout->addWidget(for_show_widget_hlayout4);
        finallayout->addWidget(for_show_widget_hlayout5);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_widget_hlayout4->hide();
        for_show_widget_hlayout5->hide();

    }


}

void  ThirdPage::boxtoggled(bool clicked)
{

    if (clicked) {
        for_show_widget_hlayout1->show();
        for_show_widget_hlayout2->show();

        finallayout->addWidget(for_show_widget_hlayout1);
        finallayout->addWidget(for_show_widget_hlayout2);
    } else {

        for_show_widget_hlayout1->hide();
        for_show_widget_hlayout2->hide();
        //finallayout->removeItem(hlayout1);
        //finallayout->removeItem(hlayout2);

    }


    //finallayout->addLayout(hlayout1);
    //finallayout->addLayout(hlayout2);

}


void  ThirdPage::humantoggled(bool clicked)
{

    if (clicked) {
        for_show_widget_hlayout_human0->show();
        for_show_widget_hlayout_human1->show();
        for_show_widget_hlayout_human2->show();

        finallayout->addWidget(for_show_widget_hlayout_human0);
        finallayout->addWidget(for_show_widget_hlayout_human1);
        finallayout->addWidget(for_show_widget_hlayout_human2);
    } else {

        for_show_widget_hlayout_human0->hide();
        for_show_widget_hlayout_human1->hide();
        for_show_widget_hlayout_human2->hide();

        //finallayout->removeItem(hlayout_human0);
        //finallayout->removeItem(hlayout_human1);
        //finallayout->removeItem(hlayout_human2);

    }


  }












//TRY TO USE CHECKBOXES TO CHOOSE OTHER PARACHUTE TYPES FOR DIFFERENT INITIALIZATIONS

//FOURTH PAGE INCLUDES PARACHUTE PARAMETERS

FourthPage::FourthPage(QWidget *parent)
    : QWizardPage(parent)
{
    setTitle("C9 Parachute Initialization Module: Page 4");

    main_label = new QLabel("Check the type of parachute for this initializaion.");

    //parachute_type_check = new QCheckBox(this);
    //parachute_type_check->setText("Check the type of parachute for this initializaion.");

    C9_parachute = new QCheckBox();
    C9_parachute->setText("C9");

    DGB_parachute = new QCheckBox();
    DGB_parachute->setText("DGB");

    G11_parachute = new QCheckBox();
    G11_parachute->setText("G11");

    intruder_parachute = new QCheckBox();
    intruder_parachute->setText("Intruder");

    hlayout_parachutes = new QHBoxLayout;
    hlayout_parachutes->addWidget(C9_parachute);
    hlayout_parachutes->addWidget(DGB_parachute);
    hlayout_parachutes->addWidget(G11_parachute);
    hlayout_parachutes->addWidget(intruder_parachute);

    finallayout  = new QVBoxLayout;
    finallayout->addWidget(main_label);
    finallayout->addLayout(hlayout_parachutes);
    //finallayout->addLayout(rigid_body_decision_layout);
    //finallayout->addWidget(rigid_body_check);

    setLayout(finallayout);

    connect(C9_parachute, SIGNAL(clicked(bool)), this, SLOT(C9_toggled(bool)));
    connect(DGB_parachute, SIGNAL(clicked(bool)), this, SLOT(DGB_toggled(bool)));
    connect(G11_parachute, SIGNAL(clicked(bool)), this, SLOT(G11_toggled(bool)));
    connect(intruder_parachute, SIGNAL(clicked(bool)), this, SLOT(intruder_toggled(bool)));


    //***********THIS IS FOR THE C9 PARACHUTE OPTION***************//

    QSpacerItem *space1 = new QSpacerItem(500,10);

    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1 = new QHBoxLayout;

    num_canopy_surfaces = new QLineEdit;
    num_canopy_surfaces->setText("1");
    num_canopy_surfaces->setFixedWidth(50);
    num_canopy_surfaces->setStyleSheet("color: blue; background-color: yellow");

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
    canopy_surf_type->setStyleSheet("color: blue; background-color: yellow");


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
    canopy_boundary->setStyleSheet("color: blue; background-color: yellow");

    hlayout3->addWidget(canopy_boundary_);
    hlayout3->addWidget(canopy_boundary);
    hlayout3->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout4 = new QHBoxLayout;

    height_of_plane = new QLineEdit;
    height_of_plane->setText("18");
    height_of_plane->setFixedWidth(50);
    height_of_plane->setStyleSheet("color: blue; background-color: yellow");

    hlayout4->addWidget(height_of_plane_);
    hlayout4->addWidget(height_of_plane);
    hlayout4->addSpacerItem(space1);

    //CIRCLE CENTER
    QLabel *circle_center_ = new QLabel("Enter circle center:");

    QHBoxLayout *hlayout5 = new QHBoxLayout;

    circle_center1 = new QLineEdit;
    circle_center1->setText("6");
    circle_center1->setFixedWidth(100);
    circle_center1->setStyleSheet("color: blue; background-color: yellow");

    circle_center2 = new QLineEdit;
    circle_center2->setText("6");
    circle_center2->setFixedWidth(100);
    circle_center2->setStyleSheet("color: blue; background-color: yellow");

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
    circle_radius->setStyleSheet("color: blue; background-color: yellow");

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
    attach_gores->setStyleSheet("color: blue; background-color: yellow");

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
    cut_vent->setStyleSheet("color: blue; background-color: yellow");

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
    attach_strings->setStyleSheet("color: blue; background-color: yellow");

    hlayout8->addWidget(attach_strings_);
    hlayout8->addWidget(attach_strings);
    hlayout8->addSpacerItem(space1);

    //NUMBER OF CHORDS
    QLabel *num_chords_ = new QLabel("Enter number of chords:");

    QHBoxLayout *hlayout9 = new QHBoxLayout;

    num_chords = new QLineEdit;
    num_chords->setText("28");
    num_chords->setFixedWidth(50);
    num_chords->setStyleSheet("color: blue; background-color: yellow");

    hlayout9->addWidget(num_chords_);
    hlayout9->addWidget(num_chords);
    hlayout9->addSpacerItem(space1);

    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_ = new QLabel("Enter initial position of load:");

    QHBoxLayout *hlayout10 = new QHBoxLayout;

    init_pos_load1 = new QLineEdit;
    init_pos_load1->setText("6");
    init_pos_load1->setFixedWidth(50);
    init_pos_load1->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load2= new QLineEdit;
    init_pos_load2->setText("6");
    init_pos_load2->setFixedWidth(50);
    init_pos_load2->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load3 = new QLineEdit;
    init_pos_load3->setText("12.451");
    init_pos_load3->setFixedWidth(50);
    init_pos_load3->setStyleSheet("color: blue; background-color: yellow");

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
    install_strings_toRGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout11->addWidget(install_strings_toRGB_);
    hlayout11->addWidget(install_strings_toRGB);
    hlayout11->addSpacerItem(space1);

    //BODY INDEX
    QLabel *body_index_ = new QLabel("Enter the body index of the target RGB:");

    QHBoxLayout *hlayout12 = new QHBoxLayout;

    body_index = new QLineEdit;
    body_index->setText("1");
    body_index->setFixedWidth(50);
    body_index->setStyleSheet("color: blue; background-color: yellow");

    hlayout12->addWidget(body_index_);
    hlayout12->addWidget(body_index);
    hlayout12->addSpacerItem(space1);


    //QVBoxLayout *page4layout = new QVBoxLayout;

    for_show_vlayout_C9 = new QWidget();

    vlayout_C9 = new QVBoxLayout(for_show_vlayout_C9);
    vlayout_C9->addSpacerItem(space1);
    vlayout_C9->addLayout(hlayout1);
    vlayout_C9->addLayout(hlayout2);
    vlayout_C9->addLayout(hlayout3);
    vlayout_C9->addLayout(hlayout4);
    vlayout_C9->addLayout(hlayout5);
    vlayout_C9->addLayout(hlayout13);
    vlayout_C9->addLayout(hlayout6);
    vlayout_C9->addLayout(hlayout7);
    vlayout_C9->addLayout(hlayout8);
    vlayout_C9->addLayout(hlayout9);
    vlayout_C9->addLayout(hlayout10);
    vlayout_C9->addLayout(hlayout11);
    vlayout_C9->addLayout(hlayout12);


    //page4layout->addLayout(vlayout1);


    //setLayout(page4layout);


     //***********THIS IS FOR THE DGB0 PARACHUTE OPTION***************//


    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_DGB_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1_DGB = new QHBoxLayout;

    num_canopy_surfaces_DGB = new QLineEdit;
    num_canopy_surfaces_DGB->setText("1");
    num_canopy_surfaces_DGB->setFixedWidth(80);
    num_canopy_surfaces_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout1_DGB->addWidget(num_canopy_surfaces_DGB_);
    hlayout1_DGB->addWidget(num_canopy_surfaces_DGB);
    //hlayout1_DGB->addSpacerItem(space1);

    //COMPLEX CONNECTION

    QLabel *complex_connection_DGB_ = new QLabel("Use complex connection?");

    //QHBoxLayout *hlayout2_DGB = new QHBoxLayout;

    complex_connection_DGB = new QComboBox;
    complex_connection_DGB->addItem("No");
    complex_connection_DGB->addItem("Yes");
    complex_connection_DGB->setFixedWidth(150);
    complex_connection_DGB->setStyleSheet("color: blue; background-color: yellow");


    hlayout1_DGB->addWidget(complex_connection_DGB_);
    hlayout1_DGB->addWidget(complex_connection_DGB);
    //hlayout1_DGB->addSpacerItem(space1);

    //FOR MODULE 1
    QLabel *module_1_DGB = new QLabel("For module 1:");

    //CANOPY SURFACE TYPE
    QLabel *canopy_surf_type_DGB_ = new QLabel("Enter canopy surface type:");

    QHBoxLayout *hlayout2_DGB = new QHBoxLayout;

    //QHBoxLayout *hlayout3_DGB = new QHBoxLayout;

    canopy_surf_type_DGB = new QComboBox;
    canopy_surf_type_DGB->setFixedWidth(100);
    canopy_surf_type_DGB->addItem("FLAT");
    canopy_surf_type_DGB->addItem("Other");
    canopy_surf_type_DGB->setStyleSheet("color: blue; background-color: yellow");


    hlayout2_DGB->addWidget(canopy_surf_type_DGB_);
    hlayout2_DGB->addWidget(canopy_surf_type_DGB);
    //hlayout2_DGB->addSpacerItem(space1);

    //CANOPY BOUNDARY

    QLabel *canopy_boundary_DGB_ = new QLabel("Enter type of canopy boundary:");

    //QHBoxLayout *hlayout4_DGB = new QHBoxLayout;

    canopy_boundary_DGB = new QComboBox;
    canopy_boundary_DGB->setFixedWidth(100);
    canopy_boundary_DGB->addItem("S");      //WHAT DOES THE S STAND FOR
    canopy_boundary_DGB->addItem("Other");
    canopy_boundary_DGB->setStyleSheet("color: blue; background-color: yellow");


    hlayout2_DGB->addWidget(canopy_boundary_DGB_);
    hlayout2_DGB->addWidget(canopy_boundary_DGB);
    //hlayout2_DGB->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_DGB_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout3_DGB = new QHBoxLayout;
    //QHBoxLayout *hlayout5_DGB = new QHBoxLayout;

    height_of_plane_DGB = new QLineEdit;
    height_of_plane_DGB->setText("3.324");
    height_of_plane_DGB->setFixedWidth(50);
    height_of_plane_DGB->setStyleSheet("color: blue; background-color: yellow");


    hlayout3_DGB->addWidget(height_of_plane_DGB_);
    hlayout3_DGB->addWidget(height_of_plane_DGB);
    //hlayout3_DGB->addSpacerItem(space1);

    //CIRCLE CENTER
    QLabel *circle_center_DGB_ = new QLabel("Enter circle center:");

    //QHBoxLayout *hlayout6_DGB = new QHBoxLayout;

    circle_center1_DGB = new QLineEdit;
    circle_center1_DGB->setText("0.5");
    circle_center1_DGB->setFixedWidth(100);
    circle_center1_DGB->setStyleSheet("color: blue; background-color: yellow");

    circle_center2_DGB = new QLineEdit;
    circle_center2_DGB->setText("0.5");
    circle_center2_DGB->setFixedWidth(100);
    circle_center2_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout3_DGB->addWidget(circle_center_DGB_);
    hlayout3_DGB->addWidget(circle_center1_DGB);
    hlayout3_DGB->addWidget(circle_center2_DGB);
    //hlayout3_DGB->addSpacerItem(space1);

    //CIRCLE RADIUS

    QLabel *circle_radius_DGB_ = new QLabel("Enter circle radius:");

    //QHBoxLayout *hlayout7_DGB = new QHBoxLayout;
    QHBoxLayout *hlayout4_DGB = new QHBoxLayout;

    circle_radius_DGB = new QLineEdit;
    circle_radius_DGB->setText("0.28");
    circle_radius_DGB->setFixedWidth(100);
    circle_radius_DGB->setStyleSheet("color: blue; background-color: yellow");

    QSpacerItem *space2 = new QSpacerItem(80,10);

    hlayout4_DGB->addWidget(circle_radius_DGB_);
    hlayout4_DGB->addWidget(circle_radius_DGB);
    hlayout4_DGB->addSpacerItem(space2);


    //ATTACH GORES
    QLabel *attach_gores_DGB_ = new QLabel("Attach gores to canopy?");

    //QHBoxLayout *hlayout8_DGB = new QHBoxLayout;

    attach_gores_DGB = new QComboBox;
    attach_gores_DGB->setFixedWidth(100);
    attach_gores_DGB->addItem("No");
    attach_gores_DGB->addItem("Yes");
    attach_gores_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout4_DGB->addWidget(attach_gores_DGB_);
    hlayout4_DGB->addWidget(attach_gores_DGB);
    //hlayout4_DGB->addSpacerItem(space1);

    //CUT VENT
    QLabel *cut_vent_DGB_ = new QLabel("Cut a vent on the canopy?");

    //QHBoxLayout *hlayout9_DGB = new QHBoxLayout;
    QHBoxLayout *hlayout5_DGB = new QHBoxLayout;

    cut_vent_DGB = new QComboBox;
    cut_vent_DGB->setFixedWidth(100);
    cut_vent_DGB->addItem("No");
    cut_vent_DGB->addItem("Yes");
    cut_vent_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout5_DGB->addWidget(cut_vent_DGB_);
    hlayout5_DGB->addWidget(cut_vent_DGB);
    hlayout5_DGB->addSpacerItem(space2);
    //hlayout9_DGB->addSpacerItem(space1);

    //RADIUS OF VENT
    QLabel *radius_vent_DGB_ = new QLabel("Enter radius of vent:");

    //QHBoxLayout *hlayout10_DGB = new QHBoxLayout;

    radius_vent_DGB = new QLineEdit;
    radius_vent_DGB->setFixedWidth(100);
    radius_vent_DGB->setText("0.05");
    radius_vent_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout5_DGB->addWidget(radius_vent_DGB_);
    hlayout5_DGB->addWidget(radius_vent_DGB);
    //hlayout5_DGB->addSpacerItem(space1);
    //hlayout9_DGB->addSpacerItem(space1);

    //ATTACH STRINGS TO CANOPY
    QLabel *attach_strings_DGB_ = new QLabel("Attach strings to canopy?");

    QHBoxLayout *hlayout6_DGB = new QHBoxLayout;
    //QHBoxLayout *hlayout11_DGB = new QHBoxLayout;

    attach_strings_DGB = new QComboBox;
    attach_strings_DGB->setFixedWidth(100);
    attach_strings_DGB->addItem("Yes");
    attach_strings_DGB->addItem("No");
    attach_strings_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout6_DGB->addWidget(attach_strings_DGB_);
    hlayout6_DGB->addWidget(attach_strings_DGB);
    hlayout6_DGB->addSpacerItem(space2);
    //hlayout10_DGB->addSpacerItem(space1);

    //NUMBER OF CHORDS
    QLabel *num_chords_DGB_ = new QLabel("Enter number of chords:");

    //QHBoxLayout *hlayout9 = new QHBoxLayout;

    num_chords_DGB = new QLineEdit;
    num_chords_DGB->setText("24");
    num_chords_DGB->setFixedWidth(80);
    num_chords_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout6_DGB->addWidget(num_chords_DGB_);
    hlayout6_DGB->addWidget(num_chords_DGB);
    //hlayout10_DGB->addSpacerItem(space1);

    //LENGTH OF THE DRAPE
    QLabel *length_drape_DGB_ = new QLabel("Enter the length of the drape:");

    //QHBoxLayout *hlayout11_DGB = new QHBoxLayout;
    QHBoxLayout *hlayout7_DGB = new QHBoxLayout;

    length_drape_DGB = new QLineEdit;
    length_drape_DGB->setText("0.1016");
    length_drape_DGB->setFixedWidth(80);
    length_drape_DGB->setStyleSheet("color: blue; background-color: yellow");

    QSpacerItem *space3 = new QSpacerItem(40,10);

    hlayout7_DGB->addWidget(length_drape_DGB_);
    hlayout7_DGB->addWidget(length_drape_DGB);
    hlayout7_DGB->addSpacerItem(space3);
    //add space?

    //GAP BETWEEN CANOPY AND DRAPE
    QLabel *gap_canopy_drape_DGB_ = new QLabel("Enter the gap between canopy and drape:");

    //QHBoxLayout *hlayout11_DGB = new QHBoxLayout;

    gap_canopy_drape_DGB = new QLineEdit;
    gap_canopy_drape_DGB->setText("0.1016");
    gap_canopy_drape_DGB->setFixedWidth(80);
    gap_canopy_drape_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout7_DGB->addWidget(gap_canopy_drape_DGB_);
    hlayout7_DGB->addWidget(gap_canopy_drape_DGB);

    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_DGB_ = new QLabel("Enter initial position of load:");

    //QHBoxLayout *hlayout12_DGB = new QHBoxLayout;
    QHBoxLayout *hlayout8_DGB = new QHBoxLayout;

    init_pos_load1_DGB = new QLineEdit;
    init_pos_load1_DGB->setText("0.5");
    init_pos_load1_DGB->setFixedWidth(50);
    init_pos_load1_DGB->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load2_DGB= new QLineEdit;
    init_pos_load2_DGB->setText("0.5");
    init_pos_load2_DGB->setFixedWidth(50);
    init_pos_load2_DGB->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load3_DGB = new QLineEdit;
    init_pos_load3_DGB->setText("1.9076");
    init_pos_load3_DGB->setFixedWidth(50);
    init_pos_load3_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout8_DGB->addWidget(init_pos_load_DGB_);
    hlayout8_DGB->addWidget(init_pos_load1_DGB);
    hlayout8_DGB->addWidget(init_pos_load2_DGB);
    hlayout8_DGB->addWidget(init_pos_load3_DGB);
    hlayout8_DGB->addSpacerItem(space1);

    //FIX LOAD NODE
    QLabel *fix_load_node_DGB_ = new QLabel("Fix the load node?");

    QHBoxLayout *hlayout9_DGB = new QHBoxLayout;
    //QHBoxLayout *hlayout11_DGB = new QHBoxLayout;

    fix_load_node_DGB = new QComboBox;
    fix_load_node_DGB->setFixedWidth(100);
    fix_load_node_DGB->addItem("No");
    fix_load_node_DGB->addItem("Yes");
    fix_load_node_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout9_DGB->addWidget(fix_load_node_DGB_);
    hlayout9_DGB->addWidget(fix_load_node_DGB);
    hlayout9_DGB->addSpacerItem(space2);
    //hlayout10_DGB->addSpacerItem(space1);


    //INSTALL STRINGS TO RGB
    QLabel *install_strings_toRGB_DGB_ = new QLabel("Install the strings to RGB?");

    //QHBoxLayout *hlayout10_DGB = new QHBoxLayout;

    install_strings_toRGB_DGB = new QComboBox;
    install_strings_toRGB_DGB->setFixedWidth(100);
    install_strings_toRGB_DGB->addItem("No");
    install_strings_toRGB_DGB->addItem("Yes");
    install_strings_toRGB_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout9_DGB->addWidget(install_strings_toRGB_DGB_);
    hlayout9_DGB->addWidget(install_strings_toRGB_DGB);
    //hlayout10->addSpacerItem(space1);

    //MODIFY INITIALIZATION
    QLabel *modify_initialization_DGB_ = new QLabel("Modify initialization?");

    QHBoxLayout *hlayout10_DGB = new QHBoxLayout;

    modify_initialization_DGB = new QComboBox;
    modify_initialization_DGB->setFixedWidth(100);
    modify_initialization_DGB->addItem("Yes");
    modify_initialization_DGB->addItem("No");
    modify_initialization_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout10_DGB->addWidget(modify_initialization_DGB_);
    hlayout10_DGB->addWidget(modify_initialization_DGB);
    hlayout10_DGB->addSpacerItem(space2);

    //ROTATE CANOPY
    QLabel *rotate_canopy_DGB_ = new QLabel("Rotate canopy?");

    //QHBoxLayout *hlayout10_DGB = new QHBoxLayout;

    rotate_canopy_DGB = new QComboBox;
    rotate_canopy_DGB->setFixedWidth(100);
    rotate_canopy_DGB->addItem("No");
    rotate_canopy_DGB->addItem("Yes");
    rotate_canopy_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout10_DGB->addWidget(rotate_canopy_DGB_);
    hlayout10_DGB->addWidget(rotate_canopy_DGB);
    //hlayout10_DGB->addSpacerItem(space2);


    //NEW LOAD POSITION
    QLabel *new_pos_load_DGB_ = new QLabel("Enter new load position:");
    QHBoxLayout *hlayout11_DGB = new QHBoxLayout;

    new_pos_load1_DGB = new QLineEdit;
    new_pos_load1_DGB->setText("0.5");
    new_pos_load1_DGB->setFixedWidth(80);
    new_pos_load1_DGB->setStyleSheet("color: blue; background-color: yellow");

    new_pos_load2_DGB= new QLineEdit;
    new_pos_load2_DGB->setText("0.5");
    new_pos_load2_DGB->setFixedWidth(80);
    new_pos_load2_DGB->setStyleSheet("color: blue; background-color: yellow");

    new_pos_load3_DGB = new QLineEdit;
    new_pos_load3_DGB->setText("1.5536");
    new_pos_load3_DGB->setFixedWidth(80);
    new_pos_load3_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout11_DGB->addWidget(new_pos_load_DGB_);
    hlayout11_DGB->addWidget(new_pos_load1_DGB);
    hlayout11_DGB->addWidget(new_pos_load2_DGB);
    hlayout11_DGB->addWidget(new_pos_load3_DGB);
    hlayout11_DGB->addSpacerItem(space1);

    //NEW CONNECTION POSITION
    QLabel *connect_pos_DGB_ = new QLabel("Enter connection position:");
    QHBoxLayout *hlayout12_DGB = new QHBoxLayout;

    connect_pos1_DGB = new QLineEdit;
    connect_pos1_DGB->setText("0.5");
    connect_pos1_DGB->setFixedWidth(80);
    connect_pos1_DGB->setStyleSheet("color: blue; background-color: yellow");

    connect_pos2_DGB= new QLineEdit;
    connect_pos2_DGB->setText("0.5");
    connect_pos2_DGB->setFixedWidth(80);
    connect_pos2_DGB->setStyleSheet("color: blue; background-color: yellow");

    connect_pos3_DGB = new QLineEdit;
    connect_pos3_DGB->setText("1.7");
    connect_pos3_DGB->setFixedWidth(80);
    connect_pos3_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout12_DGB->addWidget(connect_pos_DGB_);
    hlayout12_DGB->addWidget(connect_pos1_DGB);
    hlayout12_DGB->addWidget(connect_pos2_DGB);
    hlayout12_DGB->addWidget(connect_pos3_DGB);
    hlayout12_DGB->addSpacerItem(space1);


    //INSTALL MULTI_PARACHUTE TO RGB
    QLabel *multi_parachute_to_RGB_DGB_ = new QLabel("Install the multi-parachute to RGB?");
    QHBoxLayout *hlayout13_DGB = new QHBoxLayout;

    multi_parachute_to_RGB_DGB = new QComboBox;
    multi_parachute_to_RGB_DGB->addItem("Yes");
    multi_parachute_to_RGB_DGB->addItem("No");
    multi_parachute_to_RGB_DGB->setFixedWidth(80);
    multi_parachute_to_RGB_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout13_DGB->addWidget(multi_parachute_to_RGB_DGB_);
    hlayout13_DGB->addWidget(multi_parachute_to_RGB_DGB);
    hlayout13_DGB->addSpacerItem(space2);

    //BODY INDEX
    QLabel *body_index_DGB_ = new QLabel("Enter body index of the target RGB:");

    //QHBoxLayout *hlayout12 = new QHBoxLayout;

    body_index_DGB = new QLineEdit;
    body_index_DGB->setText("1");
    body_index_DGB->setFixedWidth(50);
    body_index_DGB->setStyleSheet("color: blue; background-color: yellow");

    hlayout13_DGB->addWidget(body_index_DGB_);
    hlayout13_DGB->addWidget(body_index_DGB);
    //hlayout13_DGB->addSpacerItem(space1);

    for_show_vlayout_DGB = new QWidget();

    vlayout_DGB = new QVBoxLayout(for_show_vlayout_DGB);
    //vlayout_DGB->addSpacerItem(space1);
    vlayout_DGB->addLayout(hlayout1_DGB);
    vlayout_DGB->addLayout(hlayout2_DGB);
    vlayout_DGB->addWidget(module_1_DGB);
    vlayout_DGB->addLayout(hlayout3_DGB);
    vlayout_DGB->addLayout(hlayout4_DGB);
    vlayout_DGB->addLayout(hlayout5_DGB);
    vlayout_DGB->addLayout(hlayout6_DGB);
    vlayout_DGB->addLayout(hlayout7_DGB);
    vlayout_DGB->addLayout(hlayout8_DGB);
    vlayout_DGB->addLayout(hlayout9_DGB);
    vlayout_DGB->addLayout(hlayout10_DGB);
    vlayout_DGB->addLayout(hlayout11_DGB);
    vlayout_DGB->addLayout(hlayout12_DGB);
    vlayout_DGB->addLayout(hlayout13_DGB);


    //***********THIS IS FOR THE G11 PARACHUTE OPTION***************//

    //QSpacerItem *space1 = new QSpacerItem(500,10);

    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_G11_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1_G11 = new QHBoxLayout;

    num_canopy_surfaces_G11 = new QLineEdit;
    num_canopy_surfaces_G11->setText("1");
    num_canopy_surfaces_G11->setFixedWidth(50);
    num_canopy_surfaces_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout1_G11->addWidget(num_canopy_surfaces_G11_);
    hlayout1_G11->addWidget(num_canopy_surfaces_G11);
    hlayout1_G11->addSpacerItem(space1);

    //CANOPY SURFACE TYPE
    QLabel *canopy_surf_type_G11_ = new QLabel("Enter canopy surface type:");

    QHBoxLayout *hlayout2_G11 = new QHBoxLayout;

    canopy_surf_type_G11 = new QComboBox;
    canopy_surf_type_G11->setFixedWidth(100);
    canopy_surf_type_G11->addItem("FLAT ");
    canopy_surf_type_G11->addItem("Other");
    canopy_surf_type_G11->setStyleSheet("color: blue; background-color: yellow");


    hlayout2_G11->addWidget(canopy_surf_type_G11_);
    hlayout2_G11->addWidget(canopy_surf_type_G11);
    hlayout2_G11->addSpacerItem(space1);

    //CANOPY BOUNDARY
    QLabel *canopy_boundary_G11_ = new QLabel("Enter type of canopy boundary:");

    QHBoxLayout *hlayout3_G11 = new QHBoxLayout;

    canopy_boundary_G11 = new QComboBox;
    canopy_boundary_G11->setFixedWidth(100);
    canopy_boundary_G11->addItem("Circle");
    canopy_boundary_G11->addItem("Other");
    canopy_boundary_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout3_G11->addWidget(canopy_boundary_G11_);
    hlayout3_G11->addWidget(canopy_boundary_G11);
    hlayout3_G11->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_G11_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout4_G11 = new QHBoxLayout;

    height_of_plane_G11 = new QLineEdit;
    height_of_plane_G11->setText("16");
    height_of_plane_G11->setFixedWidth(50);
    height_of_plane_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout4_G11->addWidget(height_of_plane_G11_);
    hlayout4_G11->addWidget(height_of_plane_G11);
    hlayout4_G11->addSpacerItem(space1);

    //CIRCLE CENTER
    QLabel *circle_center_G11_ = new QLabel("Enter circle center:");

    QHBoxLayout *hlayout5_G11 = new QHBoxLayout;

    circle_center1_G11 = new QLineEdit;
    circle_center1_G11->setText("7");
    circle_center1_G11->setFixedWidth(100);
    circle_center1_G11->setStyleSheet("color: blue; background-color: yellow");

    circle_center2_G11 = new QLineEdit;
    circle_center2_G11->setText("7");
    circle_center2_G11->setFixedWidth(100);
    circle_center2_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout5_G11->addWidget(circle_center_G11_);
    hlayout5_G11->addWidget(circle_center1_G11);
    hlayout5_G11->addWidget(circle_center2_G11);
    hlayout5_G11->addSpacerItem(space1);

    //CIRCLE RADIUS

    QLabel *circle_radius_G11_ = new QLabel("Enter circle radius:");

    QHBoxLayout *hlayout13_G11 = new QHBoxLayout;

    circle_radius_G11 = new QLineEdit;
    circle_radius_G11->setText("5");
    circle_radius_G11->setFixedWidth(100);
    circle_radius_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout13_G11->addWidget(circle_radius_G11_);
    hlayout13_G11->addWidget(circle_radius_G11);
    hlayout13_G11->addSpacerItem(space1);


    //ATTACH GORES
    QLabel *attach_gores_G11_ = new QLabel("Attach gores to canopy?");

    QHBoxLayout *hlayout6_G11 = new QHBoxLayout;

    attach_gores_G11 = new QComboBox;
    attach_gores_G11->setFixedWidth(100);
    attach_gores_G11->addItem("No");
    attach_gores_G11->addItem("Yes");
    attach_gores_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout6_G11->addWidget(attach_gores_G11_);
    hlayout6_G11->addWidget(attach_gores_G11);
    hlayout6_G11->addSpacerItem(space1);

    //CUT VENT
    QLabel *cut_vent_G11_ = new QLabel("Cut a vent on the canopy?");

    QHBoxLayout *hlayout7_G11 = new QHBoxLayout;

    cut_vent_G11 = new QComboBox;
    cut_vent_G11->setFixedWidth(100);
    cut_vent_G11->addItem("No");
    cut_vent_G11->addItem("Yes");
    cut_vent_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout7_G11->addWidget(cut_vent_G11_);
    hlayout7_G11->addWidget(cut_vent_G11);
    hlayout7_G11->addSpacerItem(space1);

    //ATTACH STRINGS TO CANOPY
    QLabel *attach_strings_G11_ = new QLabel("Attach strings to canopy?");

    QHBoxLayout *hlayout8_G11 = new QHBoxLayout;

    attach_strings_G11 = new QComboBox;
    attach_strings_G11->setFixedWidth(100);
    attach_strings_G11->addItem("Yes");
    attach_strings_G11->addItem("No");
    attach_strings_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout8_G11->addWidget(attach_strings_G11_);
    hlayout8_G11->addWidget(attach_strings_G11);
    hlayout8_G11->addSpacerItem(space1);

    //NUMBER OF CHORDS
    QLabel *num_chords_G11_ = new QLabel("Enter number of chords:");

    QHBoxLayout *hlayout9_G11 = new QHBoxLayout;

    num_chords_G11 = new QLineEdit;
    num_chords_G11->setText("30");
    num_chords_G11->setFixedWidth(50);
    num_chords_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout9_G11->addWidget(num_chords_G11_);
    hlayout9_G11->addWidget(num_chords_G11);
    hlayout9_G11->addSpacerItem(space1);

    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_G11_ = new QLabel("Enter initial position of load:");

    QHBoxLayout *hlayout10_G11 = new QHBoxLayout;

    init_pos_load1_G11 = new QLineEdit;
    init_pos_load1_G11->setText("7");
    init_pos_load1_G11->setFixedWidth(50);
    init_pos_load1_G11->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load2_G11 = new QLineEdit;
    init_pos_load2_G11->setText("7");
    init_pos_load2_G11->setFixedWidth(50);
    init_pos_load2_G11->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load3_G11 = new QLineEdit;
    init_pos_load3_G11->setText("2");
    init_pos_load3_G11->setFixedWidth(50);
    init_pos_load3_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout10_G11->addWidget(init_pos_load_G11_);
    hlayout10_G11->addWidget(init_pos_load1_G11);
    hlayout10_G11->addWidget(init_pos_load2_G11);
    hlayout10_G11->addWidget(init_pos_load3_G11);
    hlayout10_G11->addSpacerItem(space1);



    //INSTALL STRINGS TO RGB
    QLabel *install_strings_toRGB_G11_ = new QLabel("Install the strings to RGB?");

    QHBoxLayout *hlayout11_G11 = new QHBoxLayout;

    install_strings_toRGB_G11 = new QComboBox;
    install_strings_toRGB_G11->setFixedWidth(100);
    install_strings_toRGB_G11->addItem("Yes");
    install_strings_toRGB_G11->addItem("No");
    install_strings_toRGB_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout11_G11->addWidget(install_strings_toRGB_G11_);
    hlayout11_G11->addWidget(install_strings_toRGB_G11);
    hlayout11_G11->addSpacerItem(space1);

    //BODY INDEX
    QLabel *body_index_G11_ = new QLabel("Enter the body index of the target RGB:");

    QHBoxLayout *hlayout12_G11 = new QHBoxLayout;

    body_index_G11 = new QLineEdit;
    body_index_G11->setText("1");
    body_index_G11->setFixedWidth(50);
    body_index_G11->setStyleSheet("color: blue; background-color: yellow");

    hlayout12_G11->addWidget(body_index_G11_);
    hlayout12_G11->addWidget(body_index_G11);
    hlayout12_G11->addSpacerItem(space1);



    //QVBoxLayout *page4layout = new QVBoxLayout;

    for_show_vlayout_G11 = new QWidget();

    vlayout_G11 = new QVBoxLayout(for_show_vlayout_G11);
    vlayout_G11->addSpacerItem(space1);
    vlayout_G11->addLayout(hlayout1_G11);
    vlayout_G11->addLayout(hlayout2_G11);
    vlayout_G11->addLayout(hlayout3_G11);
    vlayout_G11->addLayout(hlayout4_G11);
    vlayout_G11->addLayout(hlayout5_G11);
    vlayout_G11->addLayout(hlayout13_G11);
    vlayout_G11->addLayout(hlayout6_G11);
    vlayout_G11->addLayout(hlayout7_G11);
    vlayout_G11->addLayout(hlayout8_G11);
    vlayout_G11->addLayout(hlayout9_G11);
    vlayout_G11->addLayout(hlayout10_G11);
    vlayout_G11->addLayout(hlayout11_G11);
    vlayout_G11->addLayout(hlayout12_G11);


    //***********THIS IS FOR THE INTRUDER PARACHUTE OPTION***************//

    //NUMBER OF CANOPY SURFACES

    QLabel *num_canopy_surfaces_intruder_ = new QLabel("Enter number of canopy surfaces:");

    QHBoxLayout *hlayout1_intruder = new QHBoxLayout;

    num_canopy_surfaces_intruder = new QLineEdit;
    num_canopy_surfaces_intruder->setText("1");
    num_canopy_surfaces_intruder->setFixedWidth(50);
    num_canopy_surfaces_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout1_intruder->addWidget(num_canopy_surfaces_intruder_);
    hlayout1_intruder->addWidget(num_canopy_surfaces_intruder);
    hlayout1_intruder->addSpacerItem(space1);

    //CANOPY SURFACE TYPE
    QLabel *canopy_surf_type_intruder_ = new QLabel("Enter canopy surface type:");

    QHBoxLayout *hlayout2_intruder = new QHBoxLayout;

    canopy_surf_type_intruder = new QComboBox;
    canopy_surf_type_intruder->setFixedWidth(100);
    canopy_surf_type_intruder->addItem("FLAT ");
    canopy_surf_type_intruder->addItem("Other");
    canopy_surf_type_intruder->setStyleSheet("color: blue; background-color: yellow");


    hlayout2_intruder->addWidget(canopy_surf_type_intruder_);
    hlayout2_intruder->addWidget(canopy_surf_type_intruder);
    hlayout2_intruder->addSpacerItem(space1);

    //CANOPY BOUNDARY
    QLabel *canopy_boundary_intruder_ = new QLabel("Enter type of canopy boundary:");

    QHBoxLayout *hlayout3_intruder = new QHBoxLayout;

    canopy_boundary_intruder = new QComboBox;
    canopy_boundary_intruder->setFixedWidth(100);
    canopy_boundary_intruder->addItem("Ellipse");
    canopy_boundary_intruder->addItem("Other");
    canopy_boundary_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout3_intruder->addWidget(canopy_boundary_intruder_);
    hlayout3_intruder->addWidget(canopy_boundary_intruder);
    hlayout3_intruder->addSpacerItem(space1);

    //HEIGHT OF PLANE
    QLabel *height_of_plane_intruder_ = new QLabel("Enter the height of the plane:");

    QHBoxLayout *hlayout4_intruder = new QHBoxLayout;

    height_of_plane_intruder = new QLineEdit;
    height_of_plane_intruder->setText("23");
    height_of_plane_intruder->setFixedWidth(50);
    height_of_plane_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout4_intruder->addWidget(height_of_plane_intruder_);
    hlayout4_intruder->addWidget(height_of_plane_intruder);
    hlayout4_intruder->addSpacerItem(space1);

    //ELLIPSE CENTER
    QLabel *ellipse_center_intruder_ = new QLabel("Enter ellipse center:");

    QHBoxLayout *hlayout5_intruder = new QHBoxLayout;

    ellipse_center1_intruder = new QLineEdit;
    ellipse_center1_intruder->setText("10");
    ellipse_center1_intruder->setFixedWidth(100);
    ellipse_center1_intruder->setStyleSheet("color: blue; background-color: yellow");

    ellipse_center2_intruder = new QLineEdit;
    ellipse_center2_intruder->setText("4");
    ellipse_center2_intruder->setFixedWidth(100);
    ellipse_center2_intruder->setStyleSheet("color: blue; background-color: yellow");

    ellipse_center3_intruder = new QLineEdit;
    ellipse_center3_intruder->setText("20");
    ellipse_center3_intruder->setFixedWidth(100);
    ellipse_center3_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout5_intruder->addWidget(ellipse_center_intruder_);
    hlayout5_intruder->addWidget(ellipse_center1_intruder);
    hlayout5_intruder->addWidget(ellipse_center2_intruder);
    hlayout5_intruder->addWidget(ellipse_center3_intruder);
    hlayout5_intruder->addSpacerItem(space1);

    //ELLIPSE RADIUS

    QLabel *ellipse_radius_intruder_ = new QLabel("Enter ellipse radius:");

    QHBoxLayout *hlayout6_intruder = new QHBoxLayout;

    ellipse_radius1_intruder = new QLineEdit;
    ellipse_radius1_intruder->setText("8.2862");
    ellipse_radius1_intruder->setFixedWidth(100);
    ellipse_radius1_intruder->setStyleSheet("color: blue; background-color: yellow");

    ellipse_radius2_intruder = new QLineEdit;
    ellipse_radius2_intruder->setText("1.85");
    ellipse_radius2_intruder->setFixedWidth(100);
    ellipse_radius2_intruder->setStyleSheet("color: blue; background-color: yellow");


    hlayout6_intruder->addWidget(ellipse_radius_intruder_);
    hlayout6_intruder->addWidget(ellipse_radius1_intruder);
    hlayout6_intruder->addWidget(ellipse_radius2_intruder);
    hlayout6_intruder->addSpacerItem(space1);

    //X-RANGE OF ELLIPSE

    QLabel *xrange_ellipse_intruder_ = new QLabel("Enter x range of ellipse:");

    QHBoxLayout *hlayout7_intruder = new QHBoxLayout;

    ellipse_xrange1_intruder = new QLineEdit;
    ellipse_xrange1_intruder->setText("5.15");
    ellipse_xrange1_intruder->setFixedWidth(100);
    ellipse_xrange1_intruder->setStyleSheet("color: blue; background-color: yellow");

    ellipse_xrange2_intruder = new QLineEdit;
    ellipse_xrange2_intruder->setText("14.85");
    ellipse_xrange2_intruder->setFixedWidth(100);
    ellipse_xrange2_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout7_intruder->addWidget(xrange_ellipse_intruder_);
    hlayout7_intruder->addWidget(ellipse_xrange1_intruder);
    hlayout7_intruder->addWidget(ellipse_xrange2_intruder);
    hlayout7_intruder->addSpacerItem(space1);

    //ATTACH GORES
    QLabel *attach_gores_intruder_ = new QLabel("Attach gores to canopy?");

    QHBoxLayout *hlayout8_intruder = new QHBoxLayout;

    attach_gores_intruder = new QComboBox;
    attach_gores_intruder->setFixedWidth(100);
    attach_gores_intruder->addItem("Yes");
    attach_gores_intruder->addItem("No");
    attach_gores_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout8_intruder->addWidget(attach_gores_intruder_);
    hlayout8_intruder->addWidget(attach_gores_intruder);
    hlayout8_intruder->addSpacerItem(space1);

    //NUMBER OF VERTICAL GORES
    QLabel *number_vert_gores_intruder_ = new QLabel("Enter number of vertical gores:");

    QHBoxLayout *hlayout9_intruder = new QHBoxLayout;

    num_vert_gores_intruder = new QLineEdit;
    num_vert_gores_intruder->setText("8");
    num_vert_gores_intruder->setFixedWidth(100);
    num_vert_gores_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout9_intruder->addWidget(number_vert_gores_intruder_);
    hlayout9_intruder->addWidget(num_vert_gores_intruder);
    hlayout9_intruder->addSpacerItem(space1);

    //START X-COORDINATE
    QLabel *start_x_coord_intruder_ = new QLabel("Enter start x-coordinate of gore:");

    QHBoxLayout *hlayout10_intruder = new QHBoxLayout;

    start_xcoord_gore_intruder = new QLineEdit;
    start_xcoord_gore_intruder->setText("5.45");
    start_xcoord_gore_intruder->setFixedWidth(100);
    start_xcoord_gore_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout10_intruder->addWidget(start_x_coord_intruder_);
    hlayout10_intruder->addWidget(start_xcoord_gore_intruder);
    hlayout10_intruder->addSpacerItem(space1);

    //DISTANCE BETWEEN GORES
    QLabel *dist_btn_gores_intruder_ = new QLabel("Enter distance between gores:");

    QHBoxLayout *hlayout11_intruder = new QHBoxLayout;

    dist_btn_gores_intruder = new QLineEdit;
    dist_btn_gores_intruder->setText("1.3");
    dist_btn_gores_intruder->setFixedWidth(100);
    dist_btn_gores_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout11_intruder->addWidget(dist_btn_gores_intruder_);
    hlayout11_intruder->addWidget(start_xcoord_gore_intruder);
    hlayout11_intruder->addSpacerItem(space1);

    //ATTACH STRINGS TO CANOPY
    QLabel *attach_strings_intruder_ = new QLabel("Attach strings to canopy?");

    QHBoxLayout *hlayout12_intruder = new QHBoxLayout;

    attach_strings_intruder = new QComboBox;
    attach_strings_intruder->setFixedWidth(100);
    attach_strings_intruder->addItem("Yes");
    attach_strings_intruder->addItem("No");
    attach_strings_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout12_intruder->addWidget(attach_strings_intruder_);
    hlayout12_intruder->addWidget(attach_strings_intruder);
    hlayout12_intruder->addSpacerItem(space1);

    //VERTEX COORD OF PARABOLOID
    QLabel *vertex_coord_paraboloid_intruder_ = new QLabel("Enter vertex coordinate of the paraboloid:");

    QHBoxLayout *hlayout13_intruder = new QHBoxLayout;

    vertex_coord_paraboloid1_intruder = new QLineEdit;
    vertex_coord_paraboloid1_intruder->setFixedWidth(100);
    vertex_coord_paraboloid1_intruder->setText("10");
    vertex_coord_paraboloid1_intruder->setStyleSheet("color: blue; background-color: yellow");

    vertex_coord_paraboloid2_intruder = new QLineEdit;
    vertex_coord_paraboloid2_intruder->setFixedWidth(100);
    vertex_coord_paraboloid2_intruder->setText("4");
    vertex_coord_paraboloid2_intruder->setStyleSheet("color: blue; background-color: yellow");

    vertex_coord_paraboloid3_intruder = new QLineEdit;
    vertex_coord_paraboloid3_intruder->setFixedWidth(100);
    vertex_coord_paraboloid3_intruder->setText("23.3");
    vertex_coord_paraboloid3_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout13_intruder->addWidget(vertex_coord_paraboloid_intruder_);
    hlayout13_intruder->addWidget(vertex_coord_paraboloid1_intruder);
    hlayout13_intruder->addWidget(vertex_coord_paraboloid2_intruder);
    hlayout13_intruder->addWidget(vertex_coord_paraboloid3_intruder);
    hlayout13_intruder->addSpacerItem(space1);


    //COEFF OF PARABOLOID
    QLabel *coeff_paraboloid_intruder_ = new QLabel("Enter coefficient of the paraboloid:");

    QHBoxLayout *hlayout14_intruder = new QHBoxLayout;

    coeff_paraboloid_intruder = new QLineEdit;
    coeff_paraboloid_intruder->setText("0.05");
    coeff_paraboloid_intruder->setFixedWidth(100);
    coeff_paraboloid_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout14_intruder->addWidget(coeff_paraboloid_intruder_);
    hlayout14_intruder->addWidget(coeff_paraboloid_intruder);
    hlayout14_intruder->addSpacerItem(space1);


    //INITIAL POSITION OF LOAD
    QLabel *init_pos_load_intruder_ = new QLabel("Enter initial position of load:");

    QHBoxLayout *hlayout15_intruder = new QHBoxLayout;

    init_pos_load1_intruder = new QLineEdit;
    init_pos_load1_intruder->setText("10");
    init_pos_load1_intruder->setFixedWidth(50);
    init_pos_load1_intruder->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load2_intruder = new QLineEdit;
    init_pos_load2_intruder->setText("4");
    init_pos_load2_intruder->setFixedWidth(50);
    init_pos_load2_intruder->setStyleSheet("color: blue; background-color: yellow");

    init_pos_load3_intruder = new QLineEdit;
    init_pos_load3_intruder->setText("13");
    init_pos_load3_intruder->setFixedWidth(50);
    init_pos_load3_intruder->setStyleSheet("color: blue; background-color: yellow");

    hlayout15_intruder->addWidget(init_pos_load_intruder_);
    hlayout15_intruder->addWidget(init_pos_load1_intruder);
    hlayout15_intruder->addWidget(init_pos_load2_intruder);
    hlayout15_intruder->addWidget(init_pos_load3_intruder);
    hlayout15_intruder->addSpacerItem(space1);


    for_show_vlayout_intruder = new QWidget();

    vlayout_intruder = new QVBoxLayout(for_show_vlayout_intruder);
    vlayout_intruder->addSpacerItem(space1);
    vlayout_intruder->addLayout(hlayout1_intruder);
    vlayout_intruder->addLayout(hlayout2_intruder);
    vlayout_intruder->addLayout(hlayout3_intruder);
    vlayout_intruder->addLayout(hlayout4_intruder);
    vlayout_intruder->addLayout(hlayout5_intruder);
    vlayout_intruder->addLayout(hlayout6_intruder);
    vlayout_intruder->addLayout(hlayout7_intruder);
    vlayout_intruder->addLayout(hlayout8_intruder);
    vlayout_intruder->addLayout(hlayout9_intruder);
    vlayout_intruder->addLayout(hlayout10_intruder);
    vlayout_intruder->addLayout(hlayout11_intruder);
    vlayout_intruder->addLayout(hlayout12_intruder);
    vlayout_intruder->addLayout(hlayout13_intruder);
    vlayout_intruder->addLayout(hlayout14_intruder);
    vlayout_intruder->addLayout(hlayout15_intruder);


}


//COPY THIS STRCUTURE FROM PAGE 3//

/*

void  ThirdPage::spheretoggled(bool clicked)
{

    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_widget_hlayout4->show();
        for_show_widget_hlayout5->show();

        finallayout->addWidget(for_show_widget_hlayout4);
        finallayout->addWidget(for_show_widget_hlayout5);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_widget_hlayout4->hide();
        for_show_widget_hlayout5->hide();

    }


}





  */


void FourthPage::C9_toggled(bool clicked)
{
    //finallayout->addLayout(vlayout_C9);
    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_vlayout_C9->show();

        finallayout->addWidget(for_show_vlayout_C9);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_vlayout_C9->hide();

    }

}


void FourthPage::DGB_toggled(bool clicked)
{
    //finallayout->addLayout(vlayout_DGB);
    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_vlayout_DGB->show();

        finallayout->addWidget(for_show_vlayout_DGB);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_vlayout_DGB->hide();

    }


}

void FourthPage::G11_toggled(bool clicked)
{
    //finallayout->addLayout(vlayout_G11);
    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_vlayout_G11->show();

        finallayout->addWidget(for_show_vlayout_G11);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_vlayout_G11->hide();

    }

}

void FourthPage::intruder_toggled(bool clicked)
{
    //finallayout->addLayout(vlayout_intruder);
    if (clicked) {
        //finallayout->addLayout(hlayout4);
        //finallayout->addLayout(hlayout5);
        for_show_vlayout_intruder->show();

        finallayout->addWidget(for_show_vlayout_intruder);

    } else {
        //finallayout->removeItem(hlayout4);
        //finallayout->removeItem(hlayout5);
        for_show_vlayout_intruder->hide();

    }


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




/*


void C9_Wizard::Refresh()
{
    int id;
    id = C9_Wizard::currentId();
    C9_Wizard::cleanupPage(id);

    //page = QWizard::currentPage()

}
*/









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

    /*
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
    */

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

    //***********************************************************//
    //FOR C9 PARACHUTE TYPE

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

    //***********************************************************//

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

    //CHECKBOXES FOR RIGID BODY INITIALIZATION/PRINTING

    //SPHERE
    center_of_sphere1 = new QString;
    *center_of_sphere1 = third->center_of_sphere1->displayText();

    center_of_sphere2 = new QString;
    *center_of_sphere2 = third->center_of_sphere2->displayText();

    center_of_sphere3 = new QString;
    *center_of_sphere3 = third->center_of_sphere3->displayText();

    radius_of_sphere_1 = new QString;
    *radius_of_sphere_1 = third->radius_of_sphere1->displayText();

    radius_of_sphere_2 = new QString;
    *radius_of_sphere_2 = third->radius_of_sphere2->displayText();

    radius_of_sphere_3 = new QString;
    *radius_of_sphere_3 = third->radius_of_sphere3->displayText();
    //***********************************************************//

    //BOX
    center_of_box1 = new QString;
    *center_of_box1 = third->center_of_box1->displayText();

    center_of_box2 = new QString;
    *center_of_box2 = third->center_of_box2->displayText();

    center_of_box3 = new QString;
    *center_of_box3 = third->center_of_box3->displayText();

    edge_of_box1 = new QString;
    *edge_of_box1 = third->edge_of_box1->displayText();

    edge_of_box2 = new QString;
    *edge_of_box2 = third->edge_of_box2->displayText();

    edge_of_box3 = new QString;
    *edge_of_box3 = third->edge_of_box3->displayText();

    //***********************************************************//

    //HUMAN
    human_vtk_directory = new QString;
    *human_vtk_directory = third->human_vtk_directory->displayText();

    center_of_human1 = new QString;
    *center_of_human1 = third->center_of_human1->displayText();

    center_of_human2 = new QString;
    *center_of_human2 = third->center_of_human2->displayText();

    center_of_human3 = new QString;
    *center_of_human3 = third->center_of_human3->displayText();

    enlargement_coeff = new QString;
    *enlargement_coeff = third->enlargement_coeff->displayText();

    //***********************************************************//

    //GIVE DIRECTORY
    save_directory = new QString;
    *save_directory = intro->directory_name->displayText();

    //***********************************************************//

    //PARACHUTE TYPES OTHER THAN C9

    //***********************************************************//

    //DGB

    complex_connection_DGB = new QString;
    *complex_connection_DGB = fourth->complex_connection_DGB->currentText();

    canopy_surf_type_DGB = new QString;
    *canopy_surf_type_DGB = fourth->canopy_surf_type_DGB->currentText();

    canopy_boundary_DGB = new QString;
    *canopy_boundary_DGB = fourth->canopy_boundary_DGB->currentText();

    height_of_plane_DGB = new QString;
    *height_of_plane_DGB = fourth->height_of_plane_DGB->displayText();

    circle_center1_DGB = new QString;
    *circle_center1_DGB = fourth->circle_center1_DGB->displayText();

    circle_center2_DGB = new QString;
    *circle_center2_DGB = fourth->circle_center2_DGB->displayText();

    circle_radius_DGB = new QString;
    *circle_radius_DGB = fourth->circle_radius_DGB->displayText();

    attach_gores_DGB = new QString;
    *attach_gores_DGB = fourth->attach_gores_DGB->currentText();

    cut_vent_DGB = new QString;
    *cut_vent_DGB = fourth->cut_vent_DGB->currentText();

    radius_of_vent_DGB = new QString;
    *radius_of_vent_DGB = fourth->radius_vent_DGB->displayText();

    attach_strings_DGB = new QString;
    *attach_strings_DGB = fourth->attach_strings_DGB->currentText();

    num_chords_DGB = new QString;
    *num_chords_DGB = fourth->num_chords_DGB->displayText();

    length_of_drape_DGB = new QString;
    *length_of_drape_DGB = fourth->length_drape_DGB->displayText();

    gap_btn_canopy_and_drape_DGB = new QString;
    *gap_btn_canopy_and_drape_DGB = fourth->gap_canopy_drape_DGB->displayText();

    init_pos_load_1_DGB = new QString;
    *init_pos_load_1_DGB = fourth->init_pos_load1_DGB->displayText();

    init_pos_load_2_DGB = new QString;
    *init_pos_load_2_DGB = fourth->init_pos_load2_DGB->displayText();

    init_pos_load_3_DGB = new QString;
    *init_pos_load_3_DGB = fourth->init_pos_load3_DGB->displayText();

    fix_load_node_DGB = new QString;
    *fix_load_node_DGB = fourth->fix_load_node_DGB->currentText();

    install_strings_toRGB_DGB = new QString;
    *install_strings_toRGB_DGB = fourth->install_strings_toRGB_DGB->currentText();

    modify_initialization_DGB = new QString;
    *modify_initialization_DGB = fourth->modify_initialization_DGB->currentText();

    canopy_rotation_DGB = new QString;
    *canopy_rotation_DGB = fourth->rotate_canopy_DGB->currentText();

    new_load_pos1_DGB = new QString;
    *new_load_pos1_DGB = fourth->new_pos_load1_DGB->displayText();

    new_load_pos2_DGB = new QString;
    *new_load_pos2_DGB = fourth->new_pos_load2_DGB->displayText();

    new_load_pos3_DGB = new QString;
    *new_load_pos3_DGB = fourth->new_pos_load3_DGB->displayText();

    connection_pos1_DGB = new QString;
    *connection_pos1_DGB = fourth->connect_pos1_DGB->displayText();

    connection_pos2_DGB = new QString;
    *connection_pos2_DGB = fourth->connect_pos2_DGB->displayText();

    connection_pos3_DGB = new QString;
    *connection_pos3_DGB = fourth->connect_pos3_DGB->displayText();

    multi_parachute_DGB = new QString;
    *multi_parachute_DGB = fourth->multi_parachute_to_RGB_DGB->currentText();

    body_index_DGB = new QString;
    *body_index_DGB = fourth->body_index_DGB->displayText();


    //***********************************************************//

    //G11

    canopy_surf_type_G11 = new QString;
    *canopy_surf_type_G11 = fourth->canopy_surf_type_G11->currentText();

    canopy_boundary_G11 = new QString;
    *canopy_boundary_G11 = fourth->canopy_boundary_G11->currentText();

    height_of_plane_G11 = new QString;
    *height_of_plane_G11 = fourth->height_of_plane_G11->displayText();

    circle_center_1_G11 = new QString;
    *circle_center_1_G11 = fourth->circle_center1_G11->displayText();

    circle_center_2_G11 = new QString;
    *circle_center_2_G11 = fourth->circle_center2_G11->displayText();

    circle_radius_G11 = new QString;
    *circle_radius_G11 = fourth->circle_radius_G11->displayText();

    attach_gores_G11 = new QString;
    *attach_gores_G11 = fourth->attach_gores_G11->currentText();

    cut_vent_G11 = new QString;
    *cut_vent_G11 = fourth->cut_vent_G11->currentText();

    attach_strings_G11 = new QString;
    *attach_strings_G11 = fourth->attach_strings_G11->currentText();

    num_chords_G11 = new QString;
    *num_chords_G11 = fourth->num_chords_G11->displayText();

    init_pos_load_1_G11 = new QString;
    *init_pos_load_1_G11 = fourth->init_pos_load1_G11->displayText();

    init_pos_load_2_G11 = new QString;
    *init_pos_load_2_G11 = fourth->init_pos_load2_G11->displayText();

    init_pos_load_3_G11 = new QString;
    *init_pos_load_3_G11 = fourth->init_pos_load3_G11->displayText();

    install_strings_toRGB_G11 = new QString;
    *install_strings_toRGB_G11 = fourth->install_strings_toRGB_G11->currentText();

    body_index_G11 = new QString;
    *body_index_G11 = fourth->body_index_G11->displayText();


    //***********************************************************//

    //INTRUDER

    canopy_surf_type_intruder = new QString;
    *canopy_surf_type_intruder = fourth->canopy_surf_type_intruder->currentText();

    canopy_boundary_intruder = new QString;
    *canopy_boundary_intruder = fourth->canopy_boundary_intruder->currentText();

    height_of_plane_intruder = new QString;
    *height_of_plane_intruder = fourth->height_of_plane_intruder->displayText();

    ellipse_center1_intruder = new QString;
    *ellipse_center1_intruder = fourth->ellipse_center1_intruder->displayText();

    ellipse_center2_intruder = new QString;
    *ellipse_center2_intruder = fourth->ellipse_center2_intruder->displayText();

    ellipse_center3_intruder = new QString;
    *ellipse_center3_intruder = fourth->ellipse_center3_intruder->displayText();

    ellipse_radius1_intruder = new QString;
    *ellipse_radius1_intruder = fourth->ellipse_radius1_intruder->displayText();

    ellipse_radius2_intruder = new QString;
    *ellipse_radius2_intruder = fourth->ellipse_radius2_intruder->displayText();

    ellipse_xrange1_intruder = new QString;
    *ellipse_xrange1_intruder = fourth->ellipse_xrange1_intruder->displayText();

    ellipse_xrange2_intruder = new QString;
    *ellipse_xrange2_intruder = fourth->ellipse_xrange2_intruder->displayText();

    attach_gores_intruder = new QString;
    *attach_gores_intruder = fourth->attach_gores_intruder->currentText();

    num_vert_gores_intruder = new QString;
    *num_vert_gores_intruder = fourth->num_vert_gores_intruder->displayText();

    start_xcoord_gore_intruder = new QString;
    *start_xcoord_gore_intruder = fourth->start_xcoord_gore_intruder->displayText();

    dist_btn_gores_intruder = new QString;
    *dist_btn_gores_intruder = fourth->dist_btn_gores_intruder->displayText();

    attach_strings_intruder = new QString;
    *attach_strings_intruder = fourth->attach_strings_intruder->currentText();

    vertex_coord_paraboloid1_intruder = new QString;
    *vertex_coord_paraboloid1_intruder = fourth->vertex_coord_paraboloid1_intruder->displayText();

    vertex_coord_paraboloid2_intruder = new QString;
    *vertex_coord_paraboloid2_intruder = fourth->vertex_coord_paraboloid2_intruder->displayText();

    vertex_coord_paraboloid3_intruder = new QString;
    *vertex_coord_paraboloid3_intruder = fourth->vertex_coord_paraboloid3_intruder->displayText();

    coeff_paraboloid_intruder = new QString;
    *coeff_paraboloid_intruder = fourth->coeff_paraboloid_intruder->displayText();

    init_pos_load1_intruder = new QString;
    *init_pos_load1_intruder = fourth->init_pos_load1_intruder->displayText();

    init_pos_load2_intruder = new QString;
    *init_pos_load2_intruder = fourth->init_pos_load2_intruder->displayText();

    init_pos_load3_intruder = new QString;
    *init_pos_load3_intruder = fourth->init_pos_load3_intruder->displayText();


    //***********************************************************//


    QFile Output_txt_file(*save_directory);
    //QFile Output_txt_file("/Users/Kyle/Parachute_GUIs/Output_Files/input-file.txt"); //kyle's mac
    //QFile iFluidtext("./iFluid.txt"); //lambda

    if (!Output_txt_file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Could not open input-file.txt\n";
        return;
    }


    //Output all
    QTextStream out(&Output_txt_file);


    out << "Domain limit in 0-th dimension: " << *dom_lim_0_first << " " << *dom_lim_0_last << "\n";
    out << "Domain limit in 1-th dimension: " << *dom_lim_1_first << " " << *dom_lim_1_last << "\n";
    out << "Domain limit in 2-th dimension: " << *dom_lim_2_first << " " << *dom_lim_2_last << "\n";
    out << "Computational grid: " << *compgrid_1 << " " << *compgrid_2 << " " << *compgrid_3 << "\n";
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
    if (fourth->intruder_parachute->isChecked()) {
    out << "Enter fluid ambient velocity: " << "0" << " " << "0" << " " << "4" << "\n";
    }

    out << "\n";

    if (third->rigid_body_check->isChecked()) {
    out <<"**************Rigid Body Parameters**************" << "\n";
    //CHECKBOX TO ADD RIGID BODY


    out << "Enter yes to add rigid body: " << "Yes" << "\n";
    out << "Enter the number of rigid bodies: " << "1" << "\n";
    out << "For rigid body 1: " << "\n";

    }

    //CHECKBOXES FOR RIGID BODY TYPE AND PARAMETERS

    if (third->rigid_body_sphere->isChecked()) {
        out << "Enter type of rigid body: " << "Sphere" << "\n";
        out << "Enter center of the sphere: " << *center_of_sphere1 << " " << *center_of_sphere2 << " " << *center_of_sphere3 << "\n";
        out << "Enter radius of the sphere: " << *radius_of_sphere_1 << " " << *radius_of_sphere_2 << " " << *radius_of_sphere_3 << "\n";

    }

    if (third->rigid_body_box->isChecked()) {

        out << "Enter type of rigid body: " << "Box" << "\n";
        out << "Enter center of the box: " << *center_of_box1 << " " << *center_of_box2 << " " << *center_of_box3 << "\n";
        out << "Enter edges of the box: " << *edge_of_box1 << " " << *edge_of_box2 << " " << *edge_of_box3 << "\n";

    }

    if (third->rigid_body_human->isChecked()) {

        out << "Enter type of rigid body: " << "Human" << "\n";
        out << "Enter the vtk file name for human body: " << *human_vtk_directory << "\n";
        out << "Enter center of the human body: " << *center_of_human1 << " " << *center_of_human2 << " " << *center_of_human3 << "\n";
        out << "Enter enlargement coefficient: " << *enlargement_coeff << "\n";

    }

    if (third->rigid_body_check->isChecked()) {
    out << "Type yes if motion is preset: " << *preset_motion_ << "\n";
    out << "Enter type of dynamic motion: " << *dynamic_motion_ << "\n";
    out << "Enter the direction of motion: " << *direction_of_motion_1 << " " << *direction_of_motion_2 << " " << *direction_of_motion_3 << "\n";
    out << "Enter the total mass for rigid body: " << *total_mass_ << "\n";
    out << "Enter the initial center of mass for rigid body: " << *init_center_mass_1 << " " << *init_center_mass_2 << " " << *init_center_mass_3 << "\n";
    out << "Enter the initial center of mass velocity: " << *init_center_mass_vel_1 << " " << *init_center_mass_vel_2 << " " << *init_center_mass_vel_3 << "\n";


    out << "\n";

    }

    //PUT IN CONDITIONS FOR DIFFERENT PARACHUTE TYPES

    out <<"**************Parachute Parameters**************" << "\n";

    if (fourth->C9_parachute->isChecked()) {

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

    }

    if (fourth->DGB_parachute->isChecked()) {

    out << "Enter number of canopy surfaces: " << "1" << "\n";
    out << "Enter yes for complex connection: " << *complex_connection_DGB << "\n";
    out << "\n";
    out << "For module 1" << "\n";
    out << "Enter canopy surface type: " << *canopy_surf_type_DGB << "\n";
    out << "Enter type of canopy boundary: " << *canopy_boundary_DGB << "\n";
    out << "Enter the height of the plane: " << *height_of_plane_DGB << "\n";
    out << "Enter circle center: " << *circle_center1_DGB << " " << *circle_center2_DGB << "\n";
    out << "Enter circle radius: " << *circle_radius_DGB << "\n";
    out << "Enter yes to attach gores to canopy: " << *attach_gores_DGB << "\n";
    out << "Enter yes to cut a vent on canopy: " << *cut_vent_DGB << "\n";
    out << "Enter yes to attach strings to canopy: " << *attach_strings_DGB << "\n";
    out << "Enter number of chords: " << *num_chords_DGB << "\n";
    out << "Enter the length of the drape: " << *length_of_drape_DGB << "\n";
    out << "Enter the gap between canopy and drape: " << *gap_btn_canopy_and_drape_DGB << "\n";
    out << "Enter initial position of load: " << *init_pos_load_1_DGB << " " << *init_pos_load_2_DGB << " " << *init_pos_load_3_DGB << "\n";
    out << "Enter yes to fix the load node: " << *fix_load_node_DGB << "\n";
    out << "Enter yes to install the strings to RGB: " << *install_strings_toRGB_DGB << "\n";
    out << "Entering yes to modify initialization: " << *modify_initialization_DGB << "\n";
    out << "Enter yes for rotation of canopy: " << *canopy_rotation_DGB << "\n";
    out << "\n";
    out << "Enter new load position: " << *new_load_pos1_DGB << " " << *new_load_pos2_DGB << " " << *new_load_pos3_DGB << "\n";
    out << "Enter connection position: " << *connection_pos1_DGB << " " << *connection_pos2_DGB << " " << *connection_pos3_DGB << "\n";
    out << "\n";
    out << "Enter yes to install the multi-parachute to RGB: " << *multi_parachute_DGB << "\n";
    out << "Enter the body index of the target RGB: " << *body_index_DGB << "\n";

    }


    if (fourth->G11_parachute->isChecked()) {

    out << "Enter number of canopy surfaces: " << "1" << "\n";
    out << "Enter canopy surface type: " << *canopy_surf_type_G11 << "\n";
    out << "Enter type of canopy boundary: " << *canopy_boundary_G11 << "\n";
    out << "Enter the height of the plane: " << *height_of_plane_G11 << "\n";
    out << "Enter circle center: " << *circle_center_1_G11 << " " << *circle_center_2_G11 << "\n";
    out << "Enter circle radius: " << *circle_radius_G11 << "\n";
    out << "Enter yes to attach gores to canopy: " << *attach_gores_G11 << "\n";
    out << "Enter yes to cut a vent on canopy: " << *cut_vent_G11 << "\n";
    out << "Enter yes to attach strings to canopy: " << *attach_strings_G11 << "\n";
    out << "Enter number of chords: " << *num_chords_G11 << "\n";
    out << "Enter initial position of load: " << *init_pos_load_1_G11 << " " << *init_pos_load_2_G11 << " " << *init_pos_load_3_G11 << "\n";
    out << "Enter yes to install the strings to RGB: " << *install_strings_toRGB_G11 << "\n";
    out << "Enter the body index of the target RGB: " << *body_index_G11 << "\n";

    }


    if (fourth->intruder_parachute->isChecked()) {

    out << "Enter number of canopy surfaces: " << "1" << "\n";
    out << "Enter canopy surface type: " << *canopy_surf_type_intruder << "\n";
    out << "Enter type of canopy boundary: " << *canopy_boundary_intruder << "\n";
    out << "Enter the height of the plane: " << *height_of_plane_intruder << "\n";
    out << "Enter ellipse center: " << *ellipse_center1_intruder << " " << *ellipse_center2_intruder << " " << *ellipse_center3_intruder << "\n";
    out << "Enter ellipse radius: " << *ellipse_radius1_intruder << " " << *ellipse_radius2_intruder << "\n";
    out << "Enter x range of ellipse: " << *ellipse_xrange1_intruder << " " << *ellipse_xrange2_intruder << "\n";
    out << "Enter yes to attach gores to canopy: " << *attach_gores_intruder << "\n";
    out << "Enter number of vertical gores: " << *num_vert_gores_intruder << "\n";
    out << "Enter start x-coordinate of gore: " << *start_xcoord_gore_intruder << "\n";
    out << "Enter distance between gores: " << *dist_btn_gores_intruder << "\n";
    out << "Enter yes to attach strings to canopy: " << *attach_strings_intruder << "\n";
    out << "Enter vertex coordinate of the paraboloid: " << *vertex_coord_paraboloid1_intruder << " " << *vertex_coord_paraboloid2_intruder << " " << *vertex_coord_paraboloid3_intruder << "\n";
    out << "Enter coefficient of the paraboloid: " << *coeff_paraboloid_intruder << "\n";
    out << "Enter initial position of load: " << *init_pos_load1_intruder << " " << *init_pos_load2_intruder << " " << *init_pos_load3_intruder << "\n";
    // NO RGB WITH INTRUDER     out << "Enter yes to install the strings to RGB: " << *install_strings_toRGB_G11 << "\n";
    // NO RGB WITH INTRUDER     out << "Enter the body index of the target RGB: " << *body_index_G11 << "\n";

    }


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

    if (fourth->intruder_parachute->isChecked()) {
    out << "\n";
    out << "Enter gore spring constant: " << "8000" << "\n";
    out << "Enter gore friction constant: " << "0.1" << "\n";
    out << "Enter gore point mass: " << "0.002" << "\n";
    }

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
    out << "Enter the step interval for sample: " << "1" << "\n";




}



