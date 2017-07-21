//
// MainPage.xaml.cpp
// Implementation of the MainPage class.
//

#include "pch.h"
#include "MainPage.xaml.h"


// includes rejoutées au code par mes soins
#include <time.h>
#include <stdio.h>  


using namespace InteractiveMirorCpp;

using namespace Platform;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Controls::Primitives;
using namespace Windows::UI::Xaml::Data;
using namespace Windows::UI::Xaml::Input;
using namespace Windows::UI::Xaml::Media;
using namespace Windows::UI::Xaml::Navigation;

using namespace Windows::System;
//using namespace Windows::UI::Xaml::Ev;






// The Blank Page item template is documented at http://go.microsoft.com/fwlink/?LinkId=402352&clcid=0x409

MainPage::MainPage()
{
	InitializeComponent();

	singleText->Text = "Miroir intercatif";

	
	DispatcherTimer^ timer = ref new DispatcherTimer;
	//timer->Tick += ref new Windows::Foundation::EventHandler<Object^>(this, &InteractiveMirorCpp::DispatcherTimer_Tick);
	timer->Tick += ref new Windows::UI::Xaml::EventHandler(this, &InteractiveMirorCpp::MainPage::DispatcherTimer_Tick);
	TimeSpan t;
	t.Duration = 1000;
	timer->Interval = t;
	timer->Start();


	void InteractiveMirorCpp::MainPage::DispatcherTimer_Tick(Platform::Object^ sender, Platform::Object^ e)
	{
		// Get the current date and time.
		System.DateTime date = DateTime.Now;
	}
	
}
