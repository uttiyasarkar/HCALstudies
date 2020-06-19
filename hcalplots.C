#include "CMS_lumi.C"
#include "tdrstyle.C"
void hcalplots(){
    gROOT->LoadMacro("CMS_lumi.C");
    gROOT->ProcessLine(".L tdrstyle.C");
    gROOT->ProcessLine("setTDRStyle()");
    gStyle->SetOptStat(1);
    //gStyle->SetOptTitle(0);
    gStyle->SetErrorX(0.00001);
 
    //TFile* inputFile1 =new TFile("./New/plotsdiffchannel11.root", "READ");
    TFile* inputFile2 =new TFile("./New/plotsdiffchannel12.root", "READ");
    TFile* inputFile3 =new TFile("./New/plotsdiffchannel13.root", "READ");
    TFile* inputFile4 =new TFile("./New/plotsdiffchannel14.root", "READ");
    TFile* inputFile5 =new TFile("./New/plotsdiffchannel15.root", "READ");
    TFile* inputFile6 =new TFile("./New/plotsdiffchannel10.root", "READ");
    
   TH2F*timevsietaHB1=new TH2F("timevsietaHB1", "time [ns]", 500,0,200,500,0,200);
   TH2F*timevsietaHE1=new TH2F("timevsietaHE1", "time [ns]", 500,0,200,500,0,200);
   TH2F*timevsiphiHB1=new TH2F("timevsiphiHB1", "time [ns]", 500,0,200,500,0,200);
   TH2F*timevsiphiHE1=new TH2F("timevsiphiHE1", "time [ns]", 500,0,200,500,0,200);
   TH2F*timevsdepthHB1=new TH2F("timevsdepthHB1", "time [ns]", 500,0,200,25,0,10);
   TH2F*timevsdepthHE1=new TH2F("timevsdepthHE1", "time [ns]", 500,0,200,25,0,10);
   
    
    TH1F*TimeHB=new TH1F("Time-HB", "time [ns]", 500,60,100);
    TH1F*TimeHE=new TH1F("Time-HE", "time [ns]", 500,60,100);
    TH1F*TimeC1=new TH1F("TimeC1", "time [ns]", 500,60,100);
    TH1F*TimeC2=new TH1F("TimeC2", "time [ns]", 500,60,100);
    TH1F*TimeC3=new TH1F("TimeC3", "time [ns]", 500,60,100);
    TH1F*TimeC4=new TH1F("TimeC4", "time [ns]", 500,60,100);
    
    TH1F*Timec11=new TH1F("Timec11", "time [ns]", 500,60,100);
    TH1F*Timec12=new TH1F("Timec12", "time [ns]", 500,60,100);
    TH1F*Timec13=new TH1F("Timec13", "time [ns]", 500,60,100);
    TH1F*Timec14=new TH1F("Timec14", "time [ns]", 500,60,100);
    
    TH1F*Timec21=new TH1F("Timec21", "time [ns]", 500,60,100);
    TH1F*Timec22=new TH1F("Timec22", "time [ns]", 500,60,100);
    TH1F*Timec23=new TH1F("Timec23", "time [ns]", 500,60,100);
    TH1F*Timec24=new TH1F("Timec24", "time [ns]", 500,60,100);
    
    TH1F*Timec31=new TH1F("Timec31", "time [ns]", 500,60,100);
    TH1F*Timec32=new TH1F("Timec32", "time [ns]", 500,60,100);
    TH1F*Timec33=new TH1F("Timec33", "time [ns]", 500,60,100);
    TH1F*Timec34=new TH1F("Timec34", "time [ns]", 500,60,100);
    
    TH1F*Timec41=new TH1F("Timec41", "time [ns]", 500,60,100);
    TH1F*Timec42=new TH1F("Timec42", "time [ns]", 500,60,100);
    TH1F*Timec43=new TH1F("Timec43", "time [ns]", 500,60,100);
    TH1F*Timec44=new TH1F("Timec44", "time [ns]", 500,60,100);
    
    timevsietaHB1=(TH2F*)inputFile6->Get("timevsietaHB");
    timevsietaHE1=(TH2F*)inputFile6->Get("timevsietaHE");
    timevsiphiHB1=(TH2F*)inputFile6->Get("timevsiphiHB");
    timevsiphiHE1=(TH2F*)inputFile6->Get("timevsiphiHE");
    timevsdepthHB1=(TH2F*)inputFile6->Get("timevsdepthHB");
    timevsdepthHE1=(TH2F*)inputFile6->Get("timevsdepthHE");
    
    TimeHB=(TH1F*)inputFile2->Get("TimeHB");
    TimeHE=(TH1F*)inputFile2->Get("TimeHE");
    Timec11=(TH1F*)inputFile2->Get("Timec1");
    Timec21=(TH1F*)inputFile3->Get("Timec1");
    Timec31=(TH1F*)inputFile4->Get("Timec1");
    Timec41=(TH1F*)inputFile5->Get("Timec1");
    
    Timec12=(TH1F*)inputFile2->Get("Timec2");
    Timec22=(TH1F*)inputFile3->Get("Timec2");
    Timec32=(TH1F*)inputFile4->Get("Timec2");
    Timec42=(TH1F*)inputFile5->Get("Timec2");
    
    Timec13=(TH1F*)inputFile2->Get("Timec3");
    Timec23=(TH1F*)inputFile3->Get("Timec3");
    Timec33=(TH1F*)inputFile4->Get("Timec3");
    Timec43=(TH1F*)inputFile5->Get("Timec3");
    
    Timec14=(TH1F*)inputFile2->Get("Timec4");
    Timec24=(TH1F*)inputFile3->Get("Timec4");
    Timec34=(TH1F*)inputFile4->Get("Timec4");
    Timec44=(TH1F*)inputFile5->Get("Timec4");
    
    TimeC1->Add(Timec11);
    TimeC1->Add(Timec21);
    TimeC1->Add(Timec31);
    TimeC1->Add(Timec41);
    
    TimeC2->Add(Timec12);
    TimeC2->Add(Timec22);
    TimeC2->Add(Timec32);
    TimeC2->Add(Timec42);
    
    TimeC3->Add(Timec13);
    TimeC3->Add(Timec23);
    TimeC3->Add(Timec33);
    TimeC3->Add(Timec43);
    
    TimeC4->Add(Timec14);
    TimeC4->Add(Timec24);
    TimeC4->Add(Timec34);
    TimeC4->Add(Timec44);
    
    TLegend *leg=new TLegend(0.368722,0.5825806,0.88787,0.8848387,NULL,"brNDC");
    TLegend *leg1=new TLegend(0.42722,0.485806,1.0,0.6025806,NULL,"brNDC");
    leg1->AddEntry((TObject*)0, "time = #frac{3E_{3}+4E_{4}}{E_{3}+E_{4}}, Endcap ", "");
    //leg1->AddEntry((TObject*)0, "                       selection", "");
    //leg->AddEntry(METdata2018, "Data ","PE");
    //leg->AddEntry(TimeHB, "m_{#tilde{g}} = 1700 GeV","L");
    leg->SetBorderSize(0);
    leg->SetFillColor(0);
    leg->SetNColumns(2);
    leg1->SetBorderSize(0);
    leg1->SetTextSize(0.038);
    leg1->SetFillStyle(0);
    gStyle->SetLegendFillColor(0);
    gStyle->SetLegendFont(42);

    TCanvas*c1=new TCanvas("c1", "", 800, 800);

    TimeHE->SetMarkerStyle(kFullCircle);
    TimeHE->SetMarkerColor(kBlue);TimeHE->SetLineColor(kBlue);
    TimeHE->SetTitle("; Time [ns] ; Entries*(Mahi-Energy) / bin");
    TimeHE->SetLineWidth(3.0);
    TimeHE->GetYaxis()->SetTitleOffset(1.84);
    TimeHE->Draw("hist ");
    //leg->Draw();
    leg1->Draw();
   
    writeExtraText = true;       // if extra text
    extraText  = "         ";
    //lumi_sqrtS = "41.5 fb^{-1} (13 TeV)";
    lumi_sqrtS = "59.6 fb^{-1} (13 TeV)";
    //lumi_sqrtS = "35.9fb^{-1} (13 TeV)";
    //lumi_sqrtS = "77.4 fb^{-1} (13 TeV)";
    CMS_lumi( c1, 0, 0 );
    //c1->SetGrid();
    c1->Update();
    c1->Update();

    c1->Print("HCALplottime1.pdf");
    c1->Print("HCALplottime1.png");
    
    TCanvas*c2=new TCanvas("c2", "", 800, 800);
    timevsietaHB1->SetTitle("; Time [ns] ; ieta ");
     
    // timevsietaHB->GetYaxis()->SetTitleOffset(1.84);
     timevsietaHB1->Draw("COLZ");
     
    TLegend *leg3=new TLegend(0.668722,0.7825806,0.88787,0.8848387,NULL,"brNDC");
    leg3->AddEntry((TObject*)0, "Barrel ", "");
     leg3->Draw();
    
     writeExtraText = true;       // if extra text
     extraText  = "         ";
     //lumi_sqrtS = "41.5 fb^{-1} (13 TeV)";
     lumi_sqrtS = "59.6 fb^{-1} (13 TeV)";
     //lumi_sqrtS = "35.9fb^{-1} (13 TeV)";
     //lumi_sqrtS = "77.4 fb^{-1} (13 TeV)";
     CMS_lumi( c2, 0, 0 );
     //c1->SetGrid();
     c2->Update();
     c2->Update();

     c2->Print("HCALplottimevsietaHB.pdf");
     c2->Print("HCALplottimevsietaHB.png");
    
    
    TCanvas*c3=new TCanvas("c3", "", 800, 800);
    timevsietaHE1->SetTitle("; Time [ns] ; ieta ");
     
    // timevsietaHB->GetYaxis()->SetTitleOffset(1.84);
     timevsietaHE1->Draw("COLZ");
     
    TLegend *leg4=new TLegend(0.668722,0.7825806,0.88787,0.8848387,NULL,"brNDC");
    leg4->AddEntry((TObject*)0, "Endcap ", "");
     leg4->Draw();
    
     writeExtraText = true;       // if extra text
     extraText  = "         ";
     //lumi_sqrtS = "41.5 fb^{-1} (13 TeV)";
     lumi_sqrtS = "59.6 fb^{-1} (13 TeV)";
     //lumi_sqrtS = "35.9fb^{-1} (13 TeV)";
     //lumi_sqrtS = "77.4 fb^{-1} (13 TeV)";
     CMS_lumi( c3, 0, 0 );
     //c1->SetGrid();
     c3->Update();
     c3->Update();

     c3->Print("HCALplottimevsietaHE.pdf");
     c3->Print("HCALplottimevsietaHE.png");
    
    TCanvas*c4=new TCanvas("c4", "", 800, 800);
    timevsdepthHB1->SetTitle("; Time [ns] ; depth ");
     
    // timevsietaHB->GetYaxis()->SetTitleOffset(1.84);
     timevsdepthHB1->Draw("COLZ");
     
    TLegend *leg5=new TLegend(0.668722,0.7825806,0.88787,0.8848387,NULL,"brNDC");
    leg5->AddEntry((TObject*)0, "Barrel ", "");
     leg5->Draw();
    
     writeExtraText = true;       // if extra text
     extraText  = "         ";
     //lumi_sqrtS = "41.5 fb^{-1} (13 TeV)";
     lumi_sqrtS = "59.6 fb^{-1} (13 TeV)";
     //lumi_sqrtS = "35.9fb^{-1} (13 TeV)";
     //lumi_sqrtS = "77.4 fb^{-1} (13 TeV)";
     CMS_lumi( c4, 0, 0 );
     //c1->SetGrid();
     c4->Update();
     c4->Update();

     c4->Print("HCALplottimevsdepthHB.pdf");
     c4->Print("HCALplottimevsdepthHB.png");
    
    TCanvas*c5=new TCanvas("c5", "", 800, 800);
    timevsdepthHE1->SetTitle("; Time [ns] ; depth ");
     
    // timevsietaHB->GetYaxis()->SetTitleOffset(1.84);
    gStyle->SetPalette(1);
     timevsdepthHE1->Draw("COLZ");
     
    TLegend *leg6=new TLegend(0.668722,0.7825806,0.88787,0.8848387,NULL,"brNDC");
    leg6->AddEntry((TObject*)0, "Endcap ", "");
     leg6->Draw();
    
     writeExtraText = true;       // if extra text
     extraText  = "         ";
     //lumi_sqrtS = "41.5 fb^{-1} (13 TeV)";
     lumi_sqrtS = "59.6 fb^{-1} (13 TeV)";
     //lumi_sqrtS = "35.9fb^{-1} (13 TeV)";
     //lumi_sqrtS = "77.4 fb^{-1} (13 TeV)";
     CMS_lumi( c5, 0, 0 );
     //c1->SetGrid();
     c5->Update();
     c5->Update();

     c5->Print("HCALplottimevsdepthHE.pdf");
     c5->Print("HCALplottimevsdepthHE.png");
}

