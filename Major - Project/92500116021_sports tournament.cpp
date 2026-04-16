#include<iostream>
#include<vector>
#include<string>
#include<iomanip>
Usingnamespacestd;
//----------------TEAMCLASS----------------
ClassTeam{
Public:
Stringname;
Intplayed=0,won=0,lost=0,points=0;
Team(stringn){
Name=n;
}
Voidwin(){
Played++;
Won++;
Scoreboard
ManagementSystem
Points +=2;
}
Voidlose(){
Played++;
Lost++;
}
Voiddisplay() {
Cout<<left<<setw(15)<<name
<<setw(8)<<played
<<setw(8)<<won
<<setw(8)<<lost
<<setw(8)<<points<<endl;
}
};
//----------------MATCHCLASS----------------
ClassMatch{
Public:
Intteam1,team2;
Boolplayed=false;
Match(int t1,intt2) {
Team1=t1;
Team2=t2;
}
};
//----------------TOURNAMENTCLASS----------------
ClassTournament{
Private:
Vector<Team>teams;
Vector<Match>matches;
Public:
//Addteam
VoidaddTeam(stringname){
Teams.push_back(Team(name );
}
//Generatefixtures (RoundRobin)
VoidgenerateFixtures() {
For(inti=0;i<teams.size(); i++) {
For(intj=i+1;j <teams.size();j++) {
Matches.push_back(Match(i,j );
}
}
Cout<< "\nFixturesGeneratedSuccessfu ly!\n" ;
}
//Showfixtures
VoidshowFixtures(){
Cout<< "\n---MatchFixtures---\n" ;
For(inti=0;i<matches.size(); i++) {
Cout<<i<< ": "
<<teams[matches[i].team1].name<< "vs "
<<teams[matches[i].team2].name<<endl;
}
}
//Enterresult
VoidenterResult(int matchIndex,intwinner) {
If (matchIndex <0 |matchIndex>=matches.size( ){
Cout<< "Invalidmatchindex!\n" ;
Return;
}
Match&m=matches[matchIndex];
If (m.played) {
Cout<< "Resultalreadyentered!\n" ;
Return;
}
If (winner==1){
Teams[m.team1].win();
Teams[m.team2].lose();
}elseif(winner==2){
Teams[m.team2].win();
Teams[m.team1].lose();
}else{
Cout<< "Invalidwinnerchoice!\n" ;
Return;
}
m.played=true;
cout<< "Resultrecorded!\n" ;
}
//Displaypointstable
VoidshowPointsTable(){
Cout<< "\n---PointsTable---\n" ;
Cout<<left<<setw(15)<< "Team"
<<setw(8)<< "Played"
<<setw(8)<< "Won"
<<setw(8)<< "Lost"
<<setw(8)<< "Points" <<endl;
For(auto&t:teams){
t.display();
}
}
};
//----------------MAINFUNCTION----------------
Int main() {
Tournamentt;
Intchoice;
While(true){
Cout<< "\n=====TournamentMenu=====\n" ;
Cout<< "1.AddTeam\n" ;
Cout<< "2.GenerateFixtures\n" ;
Cout<< "3.ShowFixtures\n" ;
Cout<< "4.EnterMatchResult\n" ;
Cout<< "5.ShowPointsTable\n" ;
Cout<< "6.Exit\n" ;
Cout<< "Enterchoice: ";
Cin>>choice;
If (choice ==1) {
Stringname;
Cout<< "Enterteamname: ";
Cin>>name;
t.addTeam(name);
}elseif(choice ==2) {
t.generateFixtures();
}elseif(choice ==3){
t.showFixtures();
}elseif(choice ==4){
IntmatchIndex,winner;
Cout<< "Entermatchindex: ";
Cin>>matchIndex;
Cout<< "Enterwinner(1or2): ";
Cin>>winner;
t.enterResult(matchIndex,winner);
}elseif(choice ==5){
t.showPointsTable();
}elseif(choice ==6) {
Break;
}else{
Cout<< "Invalidchoice!\n" ;
}
}
Return0;
}
