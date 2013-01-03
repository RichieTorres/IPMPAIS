///////////////////////////////////////////////////////////////////////////
// C++ code generated with wxFormBuilder (version Dec 21 2009)
// http://www.wxformbuilder.org/
//
// PLEASE DO "NOT" EDIT THIS FILE!
///////////////////////////////////////////////////////////////////////////

#ifndef __GUIFrame__
#define __GUIFrame__

#include <wx/string.h>
#include <wx/bitmap.h>
#include <wx/image.h>
#include <wx/icon.h>
#include <wx/menu.h>
#include <wx/gdicmn.h>
#include <wx/font.h>
#include <wx/colour.h>
#include <wx/settings.h>
#include <wx/statusbr.h>
#include <wx/button.h>
#include <wx/gauge.h>
#include <wx/sizer.h>
#include <wx/statbox.h>
#include <wx/panel.h>
#include <wx/radiobox.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/valgen.h>
#include <wx/checkbox.h>
#include <wx/notebook.h>
#include <wx/frame.h>

///////////////////////////////////////////////////////////////////////////

#define ID_SALIR 1000
#define ID_BASE_DE_DATOS 1001
#define ID_AYUDA 1002
#define ID_ACERCA_DE_ 1003

///////////////////////////////////////////////////////////////////////////////
/// Class GUIFrame
///////////////////////////////////////////////////////////////////////////////
class GUIFrame : public wxFrame 
{
	private:
	
	protected:
		wxMenuBar* mbar;
		wxMenu* archivo;
		wxMenu* configuracion;
		wxMenu* ayuda;
		wxStatusBar* statusBar;
		wxNotebook* m_notebook1;
		wxPanel* panel_lectura;
		wxButton* m_button1;
		wxGauge* progresoAdmisiones;
		wxButton* m_button5;
		wxGauge* progresoICFES;
		wxButton* m_button11;
		wxGauge* progresoEquivalencias;
		wxButton* m_button12;
		wxGauge* progresoRegistro;
		wxButton* m_button13;
		wxGauge* progresoECAES;
		wxPanel* panel_resultados;
		wxRadioBox* radio_comparacion;
		wxStaticText* m_staticText1;
		wxTextCtrl* input_fecha_desde;
		wxStaticText* m_staticText2;
		wxTextCtrl* input_fecha_hasta;
		wxStaticText* label_cantidad;
		wxTextCtrl* input_asignaturas;
		wxStaticText* m_staticText16;
		wxTextCtrl* input_numero_iteraciones;
		wxCheckBox* check_mostrar_puntajes_minimos;
		wxButton* boton_buscar;
		wxGridSizer* grilla_valores;
		wxStaticText* input_vacio;
		wxStaticText* input_peso;
		wxStaticText* input_d_peso;
		wxStaticText* input_puntaje;
		wxStaticText* input_d_puntaje;
		wxStaticText* input_lenguaje;
		wxTextCtrl* inputPuntajeLenguaje;
		wxTextCtrl* inputDPuntajeLenguaje;
		wxTextCtrl* inputPonderacionLenguaje;
		wxTextCtrl* inputDPonderacionLenguaje;
		wxStaticText* input_matematica;
		wxTextCtrl* inputPuntajeMatematica;
		wxTextCtrl* inputDPuntajeMatematica;
		wxTextCtrl* inputPonderacionMatematica;
		wxTextCtrl* inputDPonderacionMatematica;
		wxStaticText* input_ciencias_sociales;
		wxTextCtrl* inputPuntajeSociales;
		wxTextCtrl* inputDPuntajeSociales;
		wxTextCtrl* inputPonderacionSociales;
		wxTextCtrl* inputDPonderacionSociales;
		wxStaticText* input_filosofia;
		wxTextCtrl* inputPuntajeFilosofia;
		wxTextCtrl* inputDPuntajeFilosofia;
		wxTextCtrl* inputPonderacionFilosofia;
		wxTextCtrl* inputDPonderacionFilosofia;
		wxStaticText* input_biologia;
		wxTextCtrl* inputPuntajeBiologia;
		wxTextCtrl* inputDPuntajeBiologia;
		wxTextCtrl* inputPonderacionBiologia;
		wxTextCtrl* inputDPonderacionBiologia;
		wxStaticText* input_quimica;
		wxTextCtrl* inputPuntajeQuimica;
		wxTextCtrl* inputDPuntajeQuimica;
		wxTextCtrl* inputPonderacionQuimica;
		wxTextCtrl* inputDPonderacionQuimica;
		wxStaticText* input_fisica;
		wxTextCtrl* inputPuntajeFisica;
		wxTextCtrl* inputDPuntajeFisica;
		wxTextCtrl* inputPonderacionFisica;
		wxTextCtrl* inputDPonderacionFisica;
		wxStaticText* m_staticText13;
		wxTextCtrl* inputPromedio;
		wxTextCtrl* inputDesviacionPromedio;
		wxGridSizer* grilla_ecaes;
		wxStaticText* input_vacio1;
		wxStaticText* input_peso1;
		wxStaticText* input_d_peso1;
		wxStaticText* input_puntaje1;
		wxStaticText* input_d_puntaje1;
		wxStaticText* input_lenguaje1;
		wxTextCtrl* inputPuntajeLenguaje1;
		wxTextCtrl* inputDPuntajeLenguaje1;
		wxTextCtrl* inputPonderacionLenguaje1;
		wxTextCtrl* inputDPonderacionLenguaje1;
		wxStaticText* input_matematica1;
		wxTextCtrl* inputPuntajeMatematica1;
		wxTextCtrl* inputDPuntajeMatematica1;
		wxTextCtrl* inputPonderacionMatematica1;
		wxTextCtrl* inputDPonderacionMatematica1;
		wxStaticText* input_ciencias_sociales1;
		wxTextCtrl* inputPuntajeSociales1;
		wxTextCtrl* inputDPuntajeSociales1;
		wxTextCtrl* inputPonderacionSociales1;
		wxTextCtrl* inputDPonderacionSociales1;
		wxStaticText* input_filosofia1;
		wxTextCtrl* inputPuntajeFilosofia1;
		wxTextCtrl* inputDPuntajeFilosofia1;
		wxTextCtrl* inputPonderacionFilosofia1;
		wxTextCtrl* inputDPonderacionFilosofia1;
		wxStaticText* input_biologia1;
		wxTextCtrl* inputPuntajeBiologia1;
		wxTextCtrl* inputDPuntajeBiologia1;
		wxTextCtrl* inputPonderacionBiologia1;
		wxTextCtrl* inputDPonderacionBiologia1;
		wxStaticText* input_quimica1;
		wxTextCtrl* inputPuntajeQuimica1;
		wxTextCtrl* inputDPuntajeQuimica1;
		wxTextCtrl* inputPonderacionQuimica1;
		wxTextCtrl* inputDPonderacionQuimica1;
		wxStaticText* input_fisica1;
		wxTextCtrl* inputPuntajeFisica1;
		wxTextCtrl* inputDPuntajeFisica1;
		wxTextCtrl* inputPonderacionFisica1;
		wxTextCtrl* inputDPonderacionFisica1;
		wxStaticText* m_staticText131;
		wxTextCtrl* inputPromedio1;
		wxTextCtrl* inputDesviacionPromedio1;
		wxButton* boton_guardarCSV;
		wxButton* button_guardar_datos;
		
		// Virtual event handlers, overide them in your derived class
		virtual void OnClose( wxCloseEvent& event ) { event.Skip(); }
		virtual void OnQuit( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnBDConfig( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnAbout( wxCommandEvent& event ) { event.Skip(); }
		virtual void cargarInformacionAdmisiones( wxCommandEvent& event ) { event.Skip(); }
		virtual void CagarPuntajesICFES( wxCommandEvent& event ) { event.Skip(); }
		virtual void cargarInformacionEquivalencias( wxCommandEvent& event ) { event.Skip(); }
		virtual void cargarInformacionRegistroAcademico( wxCommandEvent& event ) { event.Skip(); }
		virtual void cargarInformacionECAES( wxCommandEvent& event ) { event.Skip(); }
		virtual void OnRadioBoxComparar( wxCommandEvent& event ) { event.Skip(); }
		virtual void actualizarFiltroFechaInicio( wxCommandEvent& event ) { event.Skip(); }
		virtual void actualizarFiltroFechaFin( wxCommandEvent& event ) { event.Skip(); }
		virtual void actualizarFiltroAsignaturas( wxCommandEvent& event ) { event.Skip(); }
		virtual void mostar_puntajes_minimos( wxCommandEvent& event ) { event.Skip(); }
		virtual void BotonBuscar( wxCommandEvent& event ) { event.Skip(); }
		virtual void BotonGuardarResultados( wxCommandEvent& event ) { event.Skip(); }
		virtual void GuardarDatosCSV( wxCommandEvent& event ) { event.Skip(); }
		
	
	public:
		
		GUIFrame( wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = wxT("Determinador de puntajes minimos "), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize( 1024,768 ), long style = wxDEFAULT_FRAME_STYLE|wxTAB_TRAVERSAL );
		~GUIFrame();
	
};

#endif //__GUIFrame__
