#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
EVT_BUTTON(10001, OnButtonClicked)
wxEND_EVENT_TABLE()

cMain::cMain(): wxFrame(nullptr, wxID_ANY, "www.wildsingapore.com", wxPoint(30,30), wxSize(800, 600))
{
	//m_btn1 = new wxButton(this, 10001, "Click Me", wxPoint(10, 10), wxSize(150, 50));
	//m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	//m_list1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

	btn = new wxButton *[mFieldWidth * mFieldlHeight];
	wxGridSizer* grid = new wxGridSizer(mFieldWidth, mFieldlHeight, 0, 0);
	mField = new int[mFieldWidth * mFieldlHeight];

	for (int x = 0; x < mFieldWidth; x++)
	{
		for (int y = 0; y < mFieldlHeight; y++) {
			btn[y*mFieldWidth + x] = new wxButton(this, 10000 + (y * mFieldWidth + x));
			grid->Add(btn[y * mFieldWidth + x], 1, wxEXPAND | wxALL);

			btn[y * mFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
			mField[y * mFieldWidth + x] = 0;
		}
	}

	this->SetSizer(grid);
	grid->Layout();
}

cMain::~cMain()
{
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evt) {
	// m_list1->AppendString(m_txt1->GetValue());

	int x = (evt.GetId() - 10000) % mFieldWidth;
	int y = (evt.GetId() - 10000) / mFieldWidth;

	if (bFirstClick) {
		int mines = 30;

		while (mines)
		{
			int rx = rand() % mFieldWidth;
			int ry = rand() % mFieldlHeight;

			if (mField[ry * mFieldWidth + rx] == 0 && rx != x && ry != y) {
				mines--;
			}
		}
		bFirstClick = false;

	}

	// Disable Button, preventing it being pressed again
	btn[y * mFieldWidth + x]->Enable(false);

	// Check if player hit mine
	if (mField[y * mFieldWidth + x] == -1) {
		wxMessageBox("BOOOOOOOOM !! - Game Over :(");

		// Reset Game
		bFirstClick = true;
		for(int x=0; x < mFieldWidth; x++)
			for (int y = 0; y < mFieldlHeight; y++)
			{
				mField[y * mFieldWidth + x] = 0;
				btn[y * mFieldWidth + x]->SetLabel("");
				btn[y * mFieldWidth + x]->Enable(true);
			}
	}
	else {

		// Count neighbouring mines
		int mines_count = 0;
		for (int i = -1; i < 2; i++) 
			for (int j = -1; j < 2; j++) {

				if (x + i >= 0 && x + i < mFieldWidth && y + j >= 0 && y + j < mFieldlHeight) {
					mines_count++;
				}
			}

		// Update buttons label to show mine count if > 0
		if (mines_count > 0)
		{
			btn[y * mFieldWidth + x]->SetLabel(std::to_string(mines_count));
		}

	}
	evt.Skip();
}