#include <wx/wx.h>
#include "MainFrame.h"

// define constructor
MainFrame::MainFrame(const wxString& title) : wxFrame(nullptr, wxID_ANY, title)
{

    wxPanel* panel = new wxPanel(this);
    panel->SetBackgroundColour(wxColour(240, 240, 240)); // Set the desired background color here
    wxBoxSizer* sizer = new wxBoxSizer(wxVERTICAL);
    wxStaticText* titleText = new wxStaticText(panel, wxID_ANY, "Identity Panel Registration - wxWidgets - C++");
    titleText->SetFont(wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
    titleText->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    sizer->Add(titleText, 0, wxALIGN_CENTER_HORIZONTAL | wxTOP, 20);
    wxStaticText* titleText2 = new wxStaticText(panel, wxID_ANY, "Contact devcodejawad@gmail.com");
    titleText2->SetFont(wxFont(16, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD));
    titleText2->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    sizer->Add(titleText2, 0, wxALIGN_CENTER_HORIZONTAL | wxTOP, 20);

    // Name
    sizer->AddSpacer(20);
    wxBoxSizer* verticalSizer = new wxBoxSizer(wxVERTICAL);
    wxBoxSizer* nameSizer = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText* nameLabel = new wxStaticText(panel, wxID_ANY, "Name");
    nameLabel->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    nameSizer->Add(nameLabel, 0, wxALIGN_CENTER_VERTICAL);
    wxTextCtrl* editText = new wxTextCtrl(panel, wxID_ANY, wxEmptyString);
    editText->SetMinSize(wxSize(400, 20));
    editText->SetBackgroundColour(wxColour(255, 255, 255)); // Set the desired background color here
    editText->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    nameSizer->Add(editText, 0, wxALIGN_CENTER_VERTICAL | wxLEFT, 10);
    verticalSizer->Add(nameSizer, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);


    // gender
    verticalSizer->AddSpacer(10);
    wxArrayString genderChoices;
    genderChoices.Add("Male");
    genderChoices.Add("Female");
    genderChoices.Add("Prefer Not to Say");
    wxRadioBox* radioBox = new wxRadioBox(panel, wxID_ANY, "Gender", wxDefaultPosition, wxDefaultSize,
        genderChoices, 0, wxRA_SPECIFY_COLS);
    verticalSizer->Add(radioBox, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);
    sizer->Add(verticalSizer, 0, wxEXPAND | wxALL, 10);
    verticalSizer->AddSpacer(10);
    wxArrayString idenChoices;
    idenChoices.Add("National ID");
    idenChoices.Add("Passport");
    wxRadioBox* idenRadioBox = new wxRadioBox(panel, wxID_ANY, "Document Type", wxDefaultPosition, wxDefaultSize,
        idenChoices, 0, wxRA_SPECIFY_COLS);
    verticalSizer->Add(idenRadioBox, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);

    // Identity document
    verticalSizer->AddSpacer(10);
    wxBoxSizer* idenSizer = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText* idenLabel = new wxStaticText(panel, wxID_ANY, "Identity Document");
    idenLabel->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    idenSizer->Add(idenLabel, 0, wxALIGN_CENTER_VERTICAL);
    wxTextCtrl* editIden = new wxTextCtrl(panel, wxID_ANY, wxEmptyString);
    editIden->SetMinSize(wxSize(400, 20));
    editIden->SetBackgroundColour(wxColour(255, 255, 255)); // Set the desired background color here
    editIden->SetForegroundColour(wxColour(0, 0, 0)); 
    idenSizer->Add(editIden, 0, wxALIGN_CENTER_VERTICAL | wxLEFT, 10);
    verticalSizer->Add(idenSizer, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);

    //countries
    verticalSizer->AddSpacer(10);
    wxBoxSizer* countrySizer = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText* countryLabel = new wxStaticText(panel, wxID_ANY, "Place of Residence");
    countrySizer->Add(countryLabel, 0, wxALIGN_CENTER_VERTICAL);

    std::vector<std::string> countries = {
        "Afghanistan", "Albania", "Algeria", "Andorra", "Angola", /* Add more countries here */
    };
   
    wxComboBox* countriesComboBox = new wxComboBox(panel, wxID_ANY, wxEmptyString, wxDefaultPosition, wxDefaultSize, {}, wxCB_DROPDOWN);
    for (const auto& country : countries)
    {
        countriesComboBox->Append(country);
    }
    countriesComboBox->SetStringSelection("Select your country");
    countrySizer->Add(countriesComboBox, 0, wxALIGN_CENTER_VERTICAL | wxLEFT, 10);
    verticalSizer->Add(countrySizer, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);

    //email
    verticalSizer->AddSpacer(10);
    wxBoxSizer* emailSizer = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText* emailLabel = new wxStaticText(panel, wxID_ANY, "Email");
    emailLabel->SetForegroundColour(wxColour(0, 0, 0)); 
    emailSizer->Add(emailLabel, 0, wxALIGN_CENTER_VERTICAL);
    wxTextCtrl* editEmail = new wxTextCtrl(panel, wxID_ANY, wxEmptyString);
    editEmail->SetMinSize(wxSize(400, 20));
    editEmail->SetBackgroundColour(wxColour(255, 255, 255)); // Set the desired background color here
    editEmail->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    emailSizer->Add(editEmail, 0, wxALIGN_CENTER_VERTICAL | wxLEFT, 10);
    verticalSizer->Add(emailSizer, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);


    //phone
    verticalSizer->AddSpacer(10);
    wxBoxSizer* phoneSizer = new wxBoxSizer(wxHORIZONTAL);
    wxStaticText* phoneLabel = new wxStaticText(panel, wxID_ANY, "Phone");
    phoneLabel->SetForegroundColour(wxColour(0, 0, 0));
    phoneSizer->Add(phoneLabel, 0, wxALIGN_CENTER_VERTICAL);
    wxTextCtrl* editPhone = new wxTextCtrl(panel, wxID_ANY, wxEmptyString);
    editPhone->SetMinSize(wxSize(400, 20));
    editPhone->SetBackgroundColour(wxColour(255, 255, 255)); // Set the desired background color here
    editPhone->SetForegroundColour(wxColour(0, 0, 0)); // Set the desired text color here
    phoneSizer->Add(editPhone, 0, wxALIGN_CENTER_VERTICAL | wxLEFT, 10);
    verticalSizer->Add(phoneSizer, 0, wxEXPAND | wxLEFT | wxRIGHT, 10);
    verticalSizer->AddSpacer(10);
   

    // submit
    verticalSizer->AddSpacer(10);
    wxBoxSizer* sbmtSizer = new wxBoxSizer(wxHORIZONTAL);
    wxButton* sbmtButton = new wxButton(panel, wxID_ANY, "Submit");
    sbmtButton->SetBackgroundColour(wxColour(0, 255, 0));
    sbmtSizer->Add(0, 0, 1);
    sbmtSizer->Add(sbmtButton, 0, wxALIGN_CENTER);
    sbmtSizer->Add(0, 0, 1);
    verticalSizer->Add(sbmtSizer, 1, wxALIGN_CENTER);



    panel->SetSizer(sizer);
}

