/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_window2 (void)
{
  GtkWidget *window2;
  GtkWidget *fixed2;
  GtkWidget *hseparator1;
  GtkWidget *button4;
  GtkWidget *button3;
  GtkWidget *image8;
  GtkWidget *button5;
  GtkWidget *button6;
  GtkWidget *button35;
  GtkWidget *image30;
  GtkWidget *image31;
  GtkWidget *image10;
  GtkWidget *image32;
  GtkWidget *label4;

  window2 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window2), _("Menu"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (window2), fixed2);

  hseparator1 = gtk_hseparator_new ();
  gtk_widget_show (hseparator1);
  gtk_fixed_put (GTK_FIXED (fixed2), hseparator1, 272, 280);
  gtk_widget_set_size_request (hseparator1, 16, 16);

  button4 = gtk_button_new_with_mnemonic (_(">Ajoutez un Observateur"));
  gtk_widget_show (button4);
  gtk_fixed_put (GTK_FIXED (fixed2), button4, 664, 104);
  gtk_widget_set_size_request (button4, 520, 112);

  button3 = gtk_button_new_with_mnemonic (_(">Statistiques sur l'election"));
  gtk_widget_show (button3);
  gtk_fixed_put (GTK_FIXED (fixed2), button3, 664, 368);
  gtk_widget_set_size_request (button3, 520, 112);

  image8 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image8);
  gtk_fixed_put (GTK_FIXED (fixed2), image8, 1184, 128);
  gtk_widget_set_size_request (image8, 88, 64);

  button5 = gtk_button_new_with_mnemonic (_(" >Rechercher dans la liste des Observateurs"));
  gtk_widget_show (button5);
  gtk_fixed_put (GTK_FIXED (fixed2), button5, 664, 232);
  gtk_widget_set_size_request (button5, 520, 112);

  button6 = gtk_button_new_with_mnemonic (_("<=Retour"));
  gtk_widget_show (button6);
  gtk_fixed_put (GTK_FIXED (fixed2), button6, 592, 528);
  gtk_widget_set_size_request (button6, 168, 56);

  button35 = gtk_button_new_with_mnemonic (_("Menu Principal"));
  gtk_widget_show (button35);
  gtk_fixed_put (GTK_FIXED (fixed2), button35, 592, 600);
  gtk_widget_set_size_request (button35, 168, 56);

  image30 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image30);
  gtk_fixed_put (GTK_FIXED (fixed2), image30, 496, 528);
  gtk_widget_set_size_request (image30, 96, 64);

  image31 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image31);
  gtk_fixed_put (GTK_FIXED (fixed2), image31, 480, 592);
  gtk_widget_set_size_request (image31, 136, 80);

  image10 = gtk_image_new_from_stock ("gtk-about", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image10);
  gtk_fixed_put (GTK_FIXED (fixed2), image10, 1184, 384);
  gtk_widget_set_size_request (image10, 88, 72);

  image32 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image32);
  gtk_fixed_put (GTK_FIXED (fixed2), image32, 1200, 264);
  gtk_widget_set_size_request (image32, 56, 61);

  label4 = gtk_label_new (_("ESPACE OBSERVATEUR"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed2), label4, 680, 0);
  gtk_widget_set_size_request (label4, 504, 128);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window2, window2, "window2");
  GLADE_HOOKUP_OBJECT (window2, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (window2, hseparator1, "hseparator1");
  GLADE_HOOKUP_OBJECT (window2, button4, "button4");
  GLADE_HOOKUP_OBJECT (window2, button3, "button3");
  GLADE_HOOKUP_OBJECT (window2, image8, "image8");
  GLADE_HOOKUP_OBJECT (window2, button5, "button5");
  GLADE_HOOKUP_OBJECT (window2, button6, "button6");
  GLADE_HOOKUP_OBJECT (window2, button35, "button35");
  GLADE_HOOKUP_OBJECT (window2, image30, "image30");
  GLADE_HOOKUP_OBJECT (window2, image31, "image31");
  GLADE_HOOKUP_OBJECT (window2, image10, "image10");
  GLADE_HOOKUP_OBJECT (window2, image32, "image32");
  GLADE_HOOKUP_OBJECT (window2, label4, "label4");

  return window2;
}

GtkWidget*
create_window3 (void)
{
  GtkWidget *window3;
  GtkWidget *fixed3;
  GtkWidget *label5;
  GtkWidget *radiobutton1;
  GSList *radiobutton1_group = NULL;
  GtkWidget *radiobutton2;
  GtkWidget *comboboxentry1;
  GtkWidget *button7;
  GtkWidget *button28;
  GtkWidget *image27;
  GtkWidget *image18;
  GtkWidget *label6;

  window3 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window3), _("stats"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (window3), fixed3);

  label5 = gtk_label_new (_("ESPACE OBSERVATEUR"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed3), label5, 664, 0);
  gtk_widget_set_size_request (label5, 504, 128);

  radiobutton1 = gtk_radio_button_new_with_mnemonic (NULL, _("Global"));
  gtk_widget_show (radiobutton1);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton1, 688, 136);
  gtk_widget_set_size_request (radiobutton1, 300, 56);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton1), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton1));

  radiobutton2 = gtk_radio_button_new_with_mnemonic (NULL, _("Par bureau de vote :"));
  gtk_widget_show (radiobutton2);
  gtk_fixed_put (GTK_FIXED (fixed3), radiobutton2, 688, 208);
  gtk_widget_set_size_request (radiobutton2, 192, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton2), radiobutton1_group);
  radiobutton1_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton2));

  comboboxentry1 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry1);
  gtk_fixed_put (GTK_FIXED (fixed3), comboboxentry1, 848, 208);
  gtk_widget_set_size_request (comboboxentry1, 189, 29);

  button7 = gtk_button_new_with_mnemonic (_("<=Retour"));
  gtk_widget_show (button7);
  gtk_fixed_put (GTK_FIXED (fixed3), button7, 632, 296);
  gtk_widget_set_size_request (button7, 168, 56);

  button28 = gtk_button_new_with_mnemonic (_("Menu Principal"));
  gtk_widget_show (button28);
  gtk_fixed_put (GTK_FIXED (fixed3), button28, 632, 368);
  gtk_widget_set_size_request (button28, 168, 56);

  image27 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image27);
  gtk_fixed_put (GTK_FIXED (fixed3), image27, 536, 296);
  gtk_widget_set_size_request (image27, 96, 64);

  image18 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image18);
  gtk_fixed_put (GTK_FIXED (fixed3), image18, 512, 360);
  gtk_widget_set_size_request (image18, 136, 80);

  label6 = gtk_label_new (_("Statistiques"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed3), label6, 600, 48);
  gtk_widget_set_size_request (label6, 616, 120);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window3, window3, "window3");
  GLADE_HOOKUP_OBJECT (window3, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (window3, label5, "label5");
  GLADE_HOOKUP_OBJECT (window3, radiobutton1, "radiobutton1");
  GLADE_HOOKUP_OBJECT (window3, radiobutton2, "radiobutton2");
  GLADE_HOOKUP_OBJECT (window3, comboboxentry1, "comboboxentry1");
  GLADE_HOOKUP_OBJECT (window3, button7, "button7");
  GLADE_HOOKUP_OBJECT (window3, button28, "button28");
  GLADE_HOOKUP_OBJECT (window3, image27, "image27");
  GLADE_HOOKUP_OBJECT (window3, image18, "image18");
  GLADE_HOOKUP_OBJECT (window3, label6, "label6");

  return window3;
}

GtkWidget*
create_windows9 (void)
{
  GtkWidget *windows9;
  GtkWidget *fixed12;
  GtkWidget *label27;
  GtkWidget *entry5;
  GtkWidget *label26;
  GtkWidget *image33;
  GtkWidget *entry6;
  GtkWidget *label29;
  GtkWidget *_;
  GtkWidget *label32;
  GtkWidget *radiobutton7;
  GSList *radiobutton7_group = NULL;
  GtkWidget *radiobutton8;
  GtkWidget *label28;
  GtkWidget *label30;
  GtkWidget *entry7;
  GtkWidget *entry8;
  GtkWidget *label33;
  GtkWidget *button43;
  GtkWidget *image41;
  GtkWidget *button44;
  GtkWidget *image40;
  GtkWidget *button36;
  GtkWidget *checkbutton3;
  GtkWidget *comboboxentry3;
  GtkWidget *checkbutton4;
  GtkWidget *entry12;
  GtkWidget *checkbutton5;
  GtkWidget *checkbutton6;

  windows9 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (windows9), _("Ajouter un observateur"));

  fixed12 = gtk_fixed_new ();
  gtk_widget_show (fixed12);
  gtk_container_add (GTK_CONTAINER (windows9), fixed12);

  label27 = gtk_label_new (_("Nom:"));
  gtk_widget_show (label27);
  gtk_fixed_put (GTK_FIXED (fixed12), label27, 480, 112);
  gtk_widget_set_size_request (label27, 192, 80);

  entry5 = gtk_entry_new ();
  gtk_widget_show (entry5);
  gtk_fixed_put (GTK_FIXED (fixed12), entry5, 600, 136);
  gtk_widget_set_size_request (entry5, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry5), 8226);

  label26 = gtk_label_new (_("Menu d'ajout "));
  gtk_widget_show (label26);
  gtk_fixed_put (GTK_FIXED (fixed12), label26, 736, 24);
  gtk_widget_set_size_request (label26, 368, 104);

  image33 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image33);
  gtk_fixed_put (GTK_FIXED (fixed12), image33, 960, 40);
  gtk_widget_set_size_request (image33, 88, 64);

  entry6 = gtk_entry_new ();
  gtk_widget_show (entry6);
  gtk_fixed_put (GTK_FIXED (fixed12), entry6, 616, 208);
  gtk_widget_set_size_request (entry6, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry6), 8226);

  label29 = gtk_label_new (_("Nationality:"));
  gtk_widget_show (label29);
  gtk_fixed_put (GTK_FIXED (fixed12), label29, 984, 128);
  gtk_widget_set_size_request (label29, 160, 48);

  _ = gtk_combo_box_entry_new_text ();
  gtk_widget_show (_);
  gtk_fixed_put (GTK_FIXED (fixed12), _, 1112, 136);
  gtk_widget_set_size_request (_, 189, 29);
  gtk_combo_box_append_text (GTK_COMBO_BOX (_), _("Nationalty"));

  label32 = gtk_label_new ("");
  gtk_widget_show (label32);
  gtk_fixed_put (GTK_FIXED (fixed12), label32, 1128, 304);
  gtk_widget_set_size_request (label32, 49, 17);

  radiobutton7 = gtk_radio_button_new_with_mnemonic (NULL, _("Homme"));
  gtk_widget_show (radiobutton7);
  gtk_fixed_put (GTK_FIXED (fixed12), radiobutton7, 1080, 208);
  gtk_widget_set_size_request (radiobutton7, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton7), radiobutton7_group);
  radiobutton7_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton7));

  radiobutton8 = gtk_radio_button_new_with_mnemonic (NULL, _("Femme"));
  gtk_widget_show (radiobutton8);
  gtk_fixed_put (GTK_FIXED (fixed12), radiobutton8, 1208, 208);
  gtk_widget_set_size_request (radiobutton8, 116, 24);
  gtk_radio_button_set_group (GTK_RADIO_BUTTON (radiobutton8), radiobutton7_group);
  radiobutton7_group = gtk_radio_button_get_group (GTK_RADIO_BUTTON (radiobutton8));

  label28 = gtk_label_new (_("Pr\303\251nom:"));
  gtk_widget_show (label28);
  gtk_fixed_put (GTK_FIXED (fixed12), label28, 536, 208);
  gtk_widget_set_size_request (label28, 96, 32);

  label30 = gtk_label_new (_("Sexe:"));
  gtk_widget_show (label30);
  gtk_fixed_put (GTK_FIXED (fixed12), label30, 992, 200);
  gtk_widget_set_size_request (label30, 80, 33);

  entry7 = gtk_entry_new ();
  gtk_widget_show (entry7);
  gtk_fixed_put (GTK_FIXED (fixed12), entry7, 768, 424);
  gtk_widget_set_size_request (entry7, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry7), 8226);

  entry8 = gtk_entry_new ();
  gtk_widget_show (entry8);
  gtk_fixed_put (GTK_FIXED (fixed12), entry8, 832, 464);
  gtk_widget_set_size_request (entry8, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry8), 8226);

  label33 = gtk_label_new (_("Appartenance:"));
  gtk_widget_show (label33);
  gtk_fixed_put (GTK_FIXED (fixed12), label33, 488, 288);
  gtk_widget_set_size_request (label33, 200, 39);

  button43 = gtk_button_new_with_mnemonic (_("<=Retour"));
  gtk_widget_show (button43);
  gtk_fixed_put (GTK_FIXED (fixed12), button43, 536, 624);
  gtk_widget_set_size_request (button43, 168, 56);

  image41 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image41);
  gtk_fixed_put (GTK_FIXED (fixed12), image41, 464, 624);
  gtk_widget_set_size_request (image41, 96, 64);

  button44 = gtk_button_new_with_mnemonic (_("Menu Principal"));
  gtk_widget_show (button44);
  gtk_fixed_put (GTK_FIXED (fixed12), button44, 536, 696);
  gtk_widget_set_size_request (button44, 168, 56);

  image40 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image40);
  gtk_fixed_put (GTK_FIXED (fixed12), image40, 432, 680);
  gtk_widget_set_size_request (image40, 136, 80);

  button36 = gtk_button_new_with_mnemonic (_("Soumettre"));
  gtk_widget_show (button36);
  gtk_fixed_put (GTK_FIXED (fixed12), button36, 1104, 624);
  gtk_widget_set_size_request (button36, 224, 64);

  checkbutton3 = gtk_check_button_new_with_mnemonic (_("Partie Politique"));
  gtk_widget_show (checkbutton3);
  gtk_fixed_put (GTK_FIXED (fixed12), checkbutton3, 648, 328);
  gtk_widget_set_size_request (checkbutton3, 152, 24);

  comboboxentry3 = gtk_combo_box_entry_new_text ();
  gtk_widget_show (comboboxentry3);
  gtk_fixed_put (GTK_FIXED (fixed12), comboboxentry3, 784, 328);
  gtk_widget_set_size_request (comboboxentry3, 189, 29);

  checkbutton4 = gtk_check_button_new_with_mnemonic (_("Presse"));
  gtk_widget_show (checkbutton4);
  gtk_fixed_put (GTK_FIXED (fixed12), checkbutton4, 648, 376);
  gtk_widget_set_size_request (checkbutton4, 118, 24);

  entry12 = gtk_entry_new ();
  gtk_widget_show (entry12);
  gtk_fixed_put (GTK_FIXED (fixed12), entry12, 720, 376);
  gtk_widget_set_size_request (entry12, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry12), 8226);

  checkbutton5 = gtk_check_button_new_with_mnemonic (_("Soci\303\251t\303\251 Civile"));
  gtk_widget_show (checkbutton5);
  gtk_fixed_put (GTK_FIXED (fixed12), checkbutton5, 648, 424);
  gtk_widget_set_size_request (checkbutton5, 160, 24);

  checkbutton6 = gtk_check_button_new_with_mnemonic (_("Organisation Mondiale"));
  gtk_widget_show (checkbutton6);
  gtk_fixed_put (GTK_FIXED (fixed12), checkbutton6, 648, 464);
  gtk_widget_set_size_request (checkbutton6, 216, 24);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (windows9, windows9, "windows9");
  GLADE_HOOKUP_OBJECT (windows9, fixed12, "fixed12");
  GLADE_HOOKUP_OBJECT (windows9, label27, "label27");
  GLADE_HOOKUP_OBJECT (windows9, entry5, "entry5");
  GLADE_HOOKUP_OBJECT (windows9, label26, "label26");
  GLADE_HOOKUP_OBJECT (windows9, image33, "image33");
  GLADE_HOOKUP_OBJECT (windows9, entry6, "entry6");
  GLADE_HOOKUP_OBJECT (windows9, label29, "label29");
  GLADE_HOOKUP_OBJECT (windows9, _, "_");
  GLADE_HOOKUP_OBJECT (windows9, label32, "label32");
  GLADE_HOOKUP_OBJECT (windows9, radiobutton7, "radiobutton7");
  GLADE_HOOKUP_OBJECT (windows9, radiobutton8, "radiobutton8");
  GLADE_HOOKUP_OBJECT (windows9, label28, "label28");
  GLADE_HOOKUP_OBJECT (windows9, label30, "label30");
  GLADE_HOOKUP_OBJECT (windows9, entry7, "entry7");
  GLADE_HOOKUP_OBJECT (windows9, entry8, "entry8");
  GLADE_HOOKUP_OBJECT (windows9, label33, "label33");
  GLADE_HOOKUP_OBJECT (windows9, button43, "button43");
  GLADE_HOOKUP_OBJECT (windows9, image41, "image41");
  GLADE_HOOKUP_OBJECT (windows9, button44, "button44");
  GLADE_HOOKUP_OBJECT (windows9, image40, "image40");
  GLADE_HOOKUP_OBJECT (windows9, button36, "button36");
  GLADE_HOOKUP_OBJECT (windows9, checkbutton3, "checkbutton3");
  GLADE_HOOKUP_OBJECT (windows9, comboboxentry3, "comboboxentry3");
  GLADE_HOOKUP_OBJECT (windows9, checkbutton4, "checkbutton4");
  GLADE_HOOKUP_OBJECT (windows9, entry12, "entry12");
  GLADE_HOOKUP_OBJECT (windows9, checkbutton5, "checkbutton5");
  GLADE_HOOKUP_OBJECT (windows9, checkbutton6, "checkbutton6");

  return windows9;
}

GtkWidget*
create_window10 (void)
{
  GtkWidget *window10;
  GtkWidget *fixed13;
  GtkWidget *image35;
  GtkWidget *label35;
  GtkWidget *label136;
  GtkWidget *entry11;
  GtkWidget *image39;
  GtkWidget *image38;
  GtkWidget *button41;
  GtkWidget *button42;
  GtkWidget *alignment2;
  GtkWidget *scrolledwindow1;
  GtkWidget *alignment1;
  GtkWidget *clist1;
  GtkWidget *label135;
  GtkWidget *button38;
  GtkWidget *image36;
  GtkWidget *image37;
  GtkWidget *button37;

  window10 = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (window10), _("window10"));

  fixed13 = gtk_fixed_new ();
  gtk_widget_show (fixed13);
  gtk_container_add (GTK_CONTAINER (window10), fixed13);

  image35 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image35);
  gtk_fixed_put (GTK_FIXED (fixed13), image35, 1104, 80);
  gtk_widget_set_size_request (image35, 56, 61);

  label35 = gtk_label_new (_("Rechercher dans la liste des Observateurs"));
  gtk_widget_show (label35);
  gtk_fixed_put (GTK_FIXED (fixed13), label35, 728, 56);
  gtk_widget_set_size_request (label35, 448, 104);

  label136 = gtk_label_new (_("Tapez le nom de l'Observateur :"));
  gtk_widget_show (label136);
  gtk_fixed_put (GTK_FIXED (fixed13), label136, 904, 152);
  gtk_widget_set_size_request (label136, 272, 48);

  entry11 = gtk_entry_new ();
  gtk_widget_show (entry11);
  gtk_fixed_put (GTK_FIXED (fixed13), entry11, 1152, 160);
  gtk_widget_set_size_request (entry11, 264, 32);
  gtk_entry_set_invisible_char (GTK_ENTRY (entry11), 8226);

  image39 = gtk_image_new_from_stock ("gtk-home", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image39);
  gtk_fixed_put (GTK_FIXED (fixed13), image39, 408, 760);
  gtk_widget_set_size_request (image39, 136, 80);

  image38 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image38);
  gtk_fixed_put (GTK_FIXED (fixed13), image38, 432, 696);
  gtk_widget_set_size_request (image38, 96, 64);

  button41 = gtk_button_new_with_mnemonic (_("<=Retour"));
  gtk_widget_show (button41);
  gtk_fixed_put (GTK_FIXED (fixed13), button41, 512, 696);
  gtk_widget_set_size_request (button41, 168, 56);

  button42 = gtk_button_new_with_mnemonic (_("Menu Principal"));
  gtk_widget_show (button42);
  gtk_fixed_put (GTK_FIXED (fixed13), button42, 512, 768);
  gtk_widget_set_size_request (button42, 168, 56);

  alignment2 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment2);
  gtk_fixed_put (GTK_FIXED (fixed13), alignment2, 496, 136);
  gtk_widget_set_size_request (alignment2, 416, 552);

  scrolledwindow1 = gtk_scrolled_window_new (NULL, NULL);
  gtk_widget_show (scrolledwindow1);
  gtk_container_add (GTK_CONTAINER (alignment2), scrolledwindow1);
  gtk_widget_set_size_request (scrolledwindow1, 416, 552);

  alignment1 = gtk_alignment_new (0.5, 0.5, 1, 1);
  gtk_widget_show (alignment1);
  gtk_container_add (GTK_CONTAINER (scrolledwindow1), alignment1);

  clist1 = gtk_clist_new (1);
  gtk_widget_show (clist1);
  gtk_container_add (GTK_CONTAINER (alignment1), clist1);
  gtk_widget_set_size_request (clist1, 304, 504);
  gtk_clist_set_column_width (GTK_CLIST (clist1), 0, 371);
  gtk_clist_column_titles_show (GTK_CLIST (clist1));

  label135 = gtk_label_new (_("Liste des Observateurs"));
  gtk_widget_show (label135);
  gtk_clist_set_column_widget (GTK_CLIST (clist1), 0, label135);

  button38 = gtk_button_new_with_mnemonic (_("Supprimer"));
  gtk_widget_show (button38);
  gtk_fixed_put (GTK_FIXED (fixed13), button38, 928, 312);
  gtk_widget_set_size_request (button38, 312, 64);

  image36 = gtk_image_new_from_stock ("gtk-delete", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image36);
  gtk_fixed_put (GTK_FIXED (fixed13), image36, 1248, 312);
  gtk_widget_set_size_request (image36, 56, 64);

  image37 = gtk_image_new_from_stock ("gtk-properties", GTK_ICON_SIZE_DIALOG);
  gtk_widget_show (image37);
  gtk_fixed_put (GTK_FIXED (fixed13), image37, 1232, 224);
  gtk_widget_set_size_request (image37, 80, 64);

  button37 = gtk_button_new_with_mnemonic (_("Modifier les param\303\251tres de l'Observateur"));
  gtk_widget_show (button37);
  gtk_fixed_put (GTK_FIXED (fixed13), button37, 928, 224);
  gtk_widget_set_size_request (button37, 312, 64);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (window10, window10, "window10");
  GLADE_HOOKUP_OBJECT (window10, fixed13, "fixed13");
  GLADE_HOOKUP_OBJECT (window10, image35, "image35");
  GLADE_HOOKUP_OBJECT (window10, label35, "label35");
  GLADE_HOOKUP_OBJECT (window10, label136, "label136");
  GLADE_HOOKUP_OBJECT (window10, entry11, "entry11");
  GLADE_HOOKUP_OBJECT (window10, image39, "image39");
  GLADE_HOOKUP_OBJECT (window10, image38, "image38");
  GLADE_HOOKUP_OBJECT (window10, button41, "button41");
  GLADE_HOOKUP_OBJECT (window10, button42, "button42");
  GLADE_HOOKUP_OBJECT (window10, alignment2, "alignment2");
  GLADE_HOOKUP_OBJECT (window10, scrolledwindow1, "scrolledwindow1");
  GLADE_HOOKUP_OBJECT (window10, alignment1, "alignment1");
  GLADE_HOOKUP_OBJECT (window10, clist1, "clist1");
  GLADE_HOOKUP_OBJECT (window10, label135, "label135");
  GLADE_HOOKUP_OBJECT (window10, button38, "button38");
  GLADE_HOOKUP_OBJECT (window10, image36, "image36");
  GLADE_HOOKUP_OBJECT (window10, image37, "image37");
  GLADE_HOOKUP_OBJECT (window10, button37, "button37");

  return window10;
}

