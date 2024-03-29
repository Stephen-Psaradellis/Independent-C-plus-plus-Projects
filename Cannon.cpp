{\rtf1\ansi\ansicpg1252\deff0\nouicompat\deflang1033{\fonttbl{\f0\fnil Consolas;}{\f1\fnil\fcharset0 Calibri;}}
{\colortbl ;\red0\green0\blue255;\red163\green21\blue21;\red0\green128\blue0;}
{\*\generator Riched20 6.3.9600}\viewkind4\uc1 
\pard\sa200\sl276\slmult1\cf1\f0\fs19\lang9 #include\cf0  \cf2 "library.h"\cf0\par
\par
\cf1 void\cf0  print_from_min_to_max(\cf1 int\cf0  \cf1 const\cf0  min, \cf1 int\cf0  \cf1 const\cf0  max)\par
\{\par
\tab\cf1 if\cf0  (max>=min)\par
\tab\{\par
\tab\tab print(max);\par
\tab\tab new_line();\par
\tab\tab print_from_min_to_max(min, max-1);\tab\par
\tab\}\par
\}\par
\par
\cf1 void\cf0  min_to_max_in_fives(\cf1 int\cf0  \cf1 const\cf0  min, \cf1 int\cf0  \cf1 const\cf0  max)\par
\{\par
\tab\cf1 if\cf0 (max>=min)\par
\tab\{\par
\tab\tab print(max);\par
\tab\tab new_line();\par
\tab\tab min_to_max_in_fives(min,max-5);\par
\tab\}\par
\}\par
\par
\par
\cf3 ////////////////////////////////////////////\cf0\par
\cf3 /////////////////A2////////////////////////\cf0\par
\cf3 //////////////////////////////////////////\cf0\par
\cf1 void\cf0  weight_conversions(\cf1 int\cf0  \cf1 const\cf0  min, \cf1 int\cf0  \cf1 const\cf0  max)\par
\{\par
\tab\cf1 if\cf0 (min<=max)\par
\tab\{\par
\tab\tab print(min);\par
\tab\tab print(\cf2 " kg is "\cf0 );\par
\tab\tab print((((\cf1 int\cf0 )((min * 2.20462) * 10)) / 10));\par
\tab\tab print(\cf2 " lbs or "\cf0 );\par
\tab\tab print((\cf1 int\cf0 )((((\cf1 int\cf0 )((min * 2.20462) * 10)) / 10) / 14));\par
\tab\tab print(\cf2 " stone "\cf0 ); \par
\tab\tab print((\cf1 int\cf0 )((((\cf1 int\cf0 )((min * 2.20462) * 10)) / 10) % 14));\par
\tab\tab print(\cf2 " lbs."\cf0 );\par
\tab\tab new_line();\par
\tab\tab weight_conversions(min+5,max);\par
\tab\}\par
\}\par
\par
\cf3 /////////////////////////////////////////\cf0\par
\cf3 ///////START OF CODE NEEDED FOR B5//////\cf0\par
\cf3 ///////////////////////////////////////\cf0\par
\cf1 void\cf0  stars(\cf1 int\cf0  \cf1 const\cf0  N)\par
\{\par
\tab\cf1 if\cf0 (N>0)\par
\tab\{\tab print(\cf2 "* "\cf0 );\par
\tab\tab stars(N-1);\par
\tab\}\par
\}\par
\par
\cf1 void\cf0  dots(\cf1 int\cf0  \cf1 const\cf0  N)\par
\{\tab\par
\tab\cf1 if\cf0  (N>0)\par
\tab\{\tab print(\cf2 ". "\cf0 );\par
\tab\tab dots(N-1);\par
\tab\}\par
\}\par
\par
\cf1 void\cf0  dots_stars_dots(\cf1 int\cf0  \cf1 const\cf0  A, \cf1 int\cf0  \cf1 const\cf0  B, \cf1 int\cf0  \cf1 const\cf0  C)\par
\{\par
\tab\cf1 if\cf0  (A>0)\tab stars(A);\par
\tab\par
\tab\cf1 if\cf0  (B>0)\tab dots(B);\par
\par
\tab\cf1 if\cf0  (C>0)\tab stars(C);\par
\}\par
\par
\par
\cf1 void\cf0  sequence(\cf1 int\cf0  \cf1 const\cf0  D, \cf1 int\cf0  \cf1 const\cf0  E)\par
\{\tab\par
\tab\cf1 if\cf0  (D>0 && E<12) \par
\tab\{\tab print (D);\par
\tab\tab print (\cf2 "   "\cf0 );\par
\tab\tab print(E);\par
\tab\tab new_line();\par
\tab\tab sequence(D-1,E+2);\par
\tab\}\par
\}\par
\tab\par
\cf1 void\cf0  dots_stars_picture(\cf1 int\cf0  \cf1 const\cf0  dot, \cf1 int\cf0  \cf1 const\cf0  star)\par
\{\par
\tab\cf1 if\cf0  (dot>0 && star<12) \par
\tab\{\tab dots(dot);\par
\tab\tab stars(star);\par
\tab\tab dots(dot);\par
\tab\tab new_line();\par
\tab\tab dots_stars_picture(dot - 1,star + 2);\par
\tab\}\par
\}\par
\cf3 //////////////////////////////////////////\cf0\par
\cf3 /////START OF CODE NEEDED FOR C2/////////\cf0\par
\cf3 ////////////////////////////////////////\cf0\par
\cf1 void\cf0  line_and_turn(\cf1 int\cf0  \cf1 const\cf0  V, \cf1 double\cf0  \cf1 const\cf0  side, \cf1 int\cf0  \cf1 const\cf0  angle)\par
\{\par
\tab\cf1 if\cf0  (V > 0)\par
\tab\{\par
\tab\tab draw_distance(side);\par
\tab\tab turn_right_by_degrees(angle);\par
\tab\tab line_and_turn(V-1,side,angle);\par
\tab\}\par
\}\tab\tab\par
\par
\cf1 void\cf0  draw_circle(\cf1 double\cf0  \cf1 const\cf0  xc, \cf1 double\cf0  \cf1 const\cf0  yc, \cf1 double\cf0  \cf1 const\cf0  radius)\par
\{\par
\tab\cf1 double\cf0  \cf1 const\cf0  circumference = 2 * radius * (acos(-1.0));\par
\tab\cf1 double\cf0  \cf1 const\cf0  side = circumference / 360;\par
\tab\tab move_to(xc,yc-radius);\par
\tab\tab line_and_turn(360,side,1);\par
\}\par
\par
\cf1 void\cf0  cannon(\cf1 int\cf0  \cf1 const\cf0  x, \cf1 int\cf0  \cf1 const\cf0  y, \cf1 int\cf0  \cf1 const\cf0  a)\par
\{\tab\cf1 double\cf0  \cf1 const\cf0  b = a * sin (0.25);\par
\tab\cf1 int\cf0  \cf1 const\cf0  L1 = 125;\par
\tab\cf1 int\cf0  \cf1 const\cf0  L2 = 200;\par
\tab\cf1 int\cf0  \cf1 const\cf0  W1 = 205;\par
\tab\cf1 int\cf0  \cf1 const\cf0  W2 = 40;\par
\tab\cf1 double\cf0  \cf1 const\cf0  xp = x - L1 * sin(a-b);\par
\tab\cf1 double\cf0  \cf1 const\cf0  yp = y + L1 * cos(a-b);\par
\tab\cf1 double\cf0  \cf1 const\cf0  radiansConverter = 57.2957795;\par
\tab draw_circle(x,y,50);\par
\tab move_to(xp, yp);\par
\tab set_heading_degrees((a*radiansConverter)-(b*radiansConverter));\par
\tab draw_distance(L1-50);\par
\tab move_distance(100);\par
\tab draw_distance(L2-50);\par
\tab turn_left_by_degrees(75);\par
\tab draw_distance(W2);\par
\tab turn_left_by_degrees(75);\par
\tab draw_distance(L1+L2);\par
\tab turn_left_by_degrees(105);\par
\tab draw_distance(W1);\par
\}\par
\par
\cf1 void\cf0  main()\par
\{\tab\cf1 int\cf0  \cf1 const\cf0  N=7;\par
\tab\cf1 int\cf0  \cf1 const\cf0  A=3;\par
\tab\cf1 int\cf0  \cf1 const\cf0  B=9;\par
\tab\cf1 int\cf0  \cf1 const\cf0  C=5;\par
\tab\cf1 int\cf0  \cf1 const\cf0  D=6;\par
\tab\cf1 int\cf0  \cf1 const\cf0  E=1;\par
\tab\cf1 int\cf0  \cf1 const\cf0  dot = 6;\par
\tab\cf1 int\cf0  \cf1 const\cf0  star = 1;\par
\tab\cf1 int\cf0  \cf1 const\cf0  x = 100;\par
\tab\cf1 int\cf0  \cf1 const\cf0  y = 100;\par
\tab\cf1 int\cf0  \cf1 const\cf0  xc = 100;\par
\tab\cf1 int\cf0  \cf1 const\cf0  yc = 100;\par
\tab\cf1 int\cf0  \cf1 const\cf0  V = 360;\par
\tab\cf1 int\cf0  \cf1 const\cf0  angle = 360 / V;\par
\tab\cf1 int\cf0  \cf1 const\cf0  side = 4;\par
\tab\cf1 double\cf0  \cf1 const\cf0  radius = 50;\tab\par
\tab print_from_min_to_max(10,15);\par
\tab min_to_max_in_fives(10,37);\par
\tab weight_conversions(20,45);\par
\tab make_window(1000,1000);\par
\tab set_pen_width(3);\par
\tab set_pen_color(color::black);\par
\tab set_heading_degrees(90);\par
\tab draw_circle(x,y,radius);\par
\tab stars(N);\par
\tab dots(N);\par
\tab dots_stars_dots(A,B,C);\par
\tab sequence(D,E);\par
\tab dots_stars_picture(dot,star);\par
\tab cannon(300,300,(acos(-1.0)));\par
\}\par
\f1\fs22\par
}
 