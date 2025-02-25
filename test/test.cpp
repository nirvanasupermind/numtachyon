
#include "/usr/local/include/tachyon_stl.h"
    
int main(){
tachyon_stl_setup();
double NT=tachyon_internal::make_obj(new TACHYON_OBJ({}));
tachyon_internal::set_member(tachyon_internal::decode_obj(NT),"Complex",(tachyon_internal::make_obj(new TACHYON_OBJ({}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double real= _args[1];
double imag= _args[2];
{
return tachyon_internal::make_obj(new TACHYON_OBJ({{"real",real},{"imag",imag},{"proto",tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")}}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"neg",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),-(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")),-(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"add",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({other})),(0.0))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))+(other),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))+(other)});
}else{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))+(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))+(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))});
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"sub",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({other})),(0.0))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))-(other),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))-(other)});
}else{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))-(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))-(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))});
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"mul",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({other})),(0.0))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(other),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(other)});
}else{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")))-((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))),((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag")))+((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")))});
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"div",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({other})),(0.0))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))/(other),(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))/(other)});
}else{
double otherNorm=((tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")))+((tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag")));
double resultReal=(((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")))+((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))))/(otherNorm);
double resultImag=(((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real")))-((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))))/(otherNorm);
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),resultReal,resultImag});
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"eq",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (tachyon_internal::is_eq((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")),(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"real"))))&&(tachyon_internal::is_eq((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")),(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"imag"))));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ne",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return !((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"eq")))({self,other}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"abs",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sqrt")))({Math,((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")))+((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"arg",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"atan2")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"),tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"norm",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return ((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")))+((tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))*(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"conj",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real"),-(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag"))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"exp",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double expReal=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"exp")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(expReal)*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cos")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")})),(expReal)*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sin")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"log",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"log")))({Math,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"abs")))({self})}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"arg")))({self})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"pow",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"log")))({self})),"mul")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"log")))({self}),other})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"log")))({self})),"mul")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"log")))({self}),other})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"sqrt",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"pow")))({self,0.500000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"cbrt",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"pow")))({self,0.333333333333333315});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"sin",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sin")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")}))*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cosh")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")})),((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cos")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")}))*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sinh")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"cos",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cos")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")}))*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cosh")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")})),((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sin")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")}))*((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sinh")))({Math,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"tan",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return ((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"sin")))({self}))/((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"cos")))({self}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"asin",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")});
double t2=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")),"mul")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"add")))({t1,t2})),"log")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"add")))({t1,t2})})})),"neg")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")),"mul")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"add")))({t1,t2})),"log")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"add")))({t1,t2})})})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"acos",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})})),"mul")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})})}),tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")),"mul")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})),"log")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})})})),"neg")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")),"mul")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})),"log")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})})})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"atan",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")})});
double t2=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"add")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I")})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I_2")),"mul")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I_2"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})),"log")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"sinh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})}),2.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"cosh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})}),2.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"tanh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double selfExp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self});
double selfNegExp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"sub")))({selfExp,selfNegExp})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"sub")))({selfExp,selfNegExp}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"add")))({selfExp,selfNegExp})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"sinh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})}),2.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"cosh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})})}),2.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"tanh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double selfExp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"exp")))({self});
double selfNegExp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})),"exp")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"neg")))({self})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"sub")))({selfExp,selfNegExp})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"sub")))({selfExp,selfNegExp}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(selfExp),"add")))({selfExp,selfNegExp})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"asinh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self}),tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})),"add")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self}),tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})),"ln")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"acosh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self}),tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self})),"sub")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,self}),tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})),"ln")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,t1})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"atanh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double t1=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"add")))({self,1.00000000000000000});
double t2=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE")),"sub")))({tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE"),self});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})),"ln")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})})),"div")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})),"ln")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(t1),"div")))({t1,t2})}),2.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"toString",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"repr")))({StringUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"real")}),tachyon_internal::make_str(new std::string("+"))}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"repr")))({StringUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"imag")})}),tachyon_internal::make_str(new std::string("i"))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ZERO",((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),0.0,0.0})));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"ONE",((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),1.00000000000000000,0.0})));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I",((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),0.0,1.00000000000000000})));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"I_2",((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex")),"fromRect")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Complex"),0.0,0.500000000000000000})));
tachyon_internal::set_member(tachyon_internal::decode_obj(NT),"Tensor",(tachyon_internal::make_obj(new TACHYON_OBJ({}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double shape= _args[1];
double data= _args[2];
{
return tachyon_internal::make_obj(new TACHYON_OBJ({{"shape",shape},{"data",data},{"proto",tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")}}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromNested",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double vec= _args[1];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({vec})),(0.0))){
return tachyon_internal::make_obj(new TACHYON_OBJ({{"shape",tachyon_internal::make_vec(new std::vector<double>({}))},{"data",vec}}));
}
double size=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,vec});
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({tachyon_internal::get_subscript(vec,0.0)})),(0.0))){
return tachyon_internal::make_obj(new TACHYON_OBJ({{"shape",tachyon_internal::make_vec(new std::vector<double>({size}))},{"data",vec}}));
}
double fromFirstElem=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromNested")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_subscript(vec,0.0)});
double shape=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"concat")))({VectorUtils,tachyon_internal::make_vec(new std::vector<double>({size})),tachyon_internal::get_member(tachyon_internal::decode_obj(fromFirstElem),"shape")});
double data=tachyon_internal::get_member(tachyon_internal::decode_obj(fromFirstElem),"data");
for(double i=1.00000000000000000;((double)((i)<(size)));i++) {{
data=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"concat")))({VectorUtils,data,tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromNested")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_subscript(vec,i)})),"data")});
}}
return tachyon_internal::make_obj(new TACHYON_OBJ({{"shape",shape},{"data",data},{"proto",tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")}}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"eye",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double n= _args[1];
double m= _args[2];
{
if(tachyon_internal::is_eq((m),(tachyon_internal::null))){
m=n;
}
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<((n)*(m))));i++) {{
if(tachyon_internal::is_eq((std::fmod((i),((m)+(1.00000000000000000)))),(0.0))){
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,1.00000000000000000});
}else{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,0.0});
}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({n,m})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"ones",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double shape= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"full")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),shape,1.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"onesLike",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double a= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fullLike")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),a,1.00000000000000000});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"zeros",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double shape= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"full")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),shape,0.0});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"zerosLike",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double a= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fullLike")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),a,0.0});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"full",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double shape= _args[1];
double fillValue= _args[2];
{
double dataSize=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"accumulate")))({VectorUtils,shape,0.0,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)+(y);
}
return tachyon_internal::null;
}))});
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<(dataSize)));i++) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,fillValue});
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),shape,data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fullLike",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double a= _args[1];
double fillValue= _args[2];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"full")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_member(tachyon_internal::decode_obj(a),"shape"),fillValue});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromString",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double str= _args[1];
double sep= _args[2];
{
double data=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"transform")))({VectorUtils,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"split")))({StringUtils,str,sep}),tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"toNumber")))({StringUtils,x});
}
return tachyon_internal::null;
}))});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,data})})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"arange",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double start= _args[1];
double end= _args[2];
double step= _args[3];
{
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=start;((double)((i)<(end)));i+=(step)) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,i});
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({(end)-(start)})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"linspace",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double start= _args[1];
double stop= _args[2];
double num= _args[3];
{
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=start;((double)((i)<=(stop)));i+=(((stop)-(start))/((num)-(1.00000000000000000)))) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,i});
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({num})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"logspace",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double start= _args[1];
double stop= _args[2];
double num= _args[3];
double base= _args[4];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"linspace")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),start,stop,num})),"transform")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"linspace")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),start,stop,num}),tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"geomspace",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double start= _args[1];
double stop= _args[2];
double num= _args[3];
double base= _args[4];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"linspace")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,start}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,stop}),num})),"transform")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"linspace")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,start}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,stop}),num}),tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,base,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"diag",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double v= _args[1];
{
double vSize=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(v),"data")});
double data=tachyon_internal::make_vec(new std::vector<double>({}));
double j=0.0;
for(double i=0.0;((double)((i)<((vSize)*(vSize))));i++) {{
if(tachyon_internal::is_eq((std::fmod((i),((vSize)+(1.00000000000000000)))),(0.0))){
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(v),"data"),j)});
j++;
}else{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,0.0});
}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({vSize,vSize})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tri",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double n= _args[1];
double m= _args[2];
double k= _args[3];
{
if(tachyon_internal::is_eq((m),(tachyon_internal::null))){
m=n;
}
if(tachyon_internal::is_eq((k),(tachyon_internal::null))){
k=0.0;
}
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<((n)*(m))));i++) {{
if((double)((std::fmod((i),(m)))<=(((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"floor")))({Math,(i)/(m)}))+(k)))){
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,1.00000000000000000});
}else{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,0.0});
}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({n,m})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tril",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tri")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),1.00000000000000000)})),"mul")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tri")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),1.00000000000000000)}),self});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"triu",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")}))));i++) {{
if((double)((std::fmod((i),(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),1.00000000000000000))))<((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"floor")))({Math,(i)/(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),1.00000000000000000))})))){
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,0.0});
}else{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),i)});
}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"vander",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double v= _args[1];
double n= _args[2];
double increasing= _args[3];
{
if(tachyon_internal::is_eq((increasing),(tachyon_internal::null))){
increasing=false;
}
double vSize=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,v});
double data=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<((n)*(vSize))));i++) {{
if(increasing){
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,tachyon_internal::get_subscript(v,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"floor")))({Math,(i)/(n)})),std::fmod((i),(n))})});
}else{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,data,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,tachyon_internal::get_subscript(v,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"floor")))({Math,(i)/(n)})),((n)-(std::fmod((i),(n))))-(1.00000000000000000)})});
}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({n,vSize})),data});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"transform",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double fn= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"transform")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),fn})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"binaryTransform",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
double fn= _args[2];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({other})),(0.0))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(fn))({x,other});
}
return tachyon_internal::null;
}))});
}else{
double resultData=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(other),"data")}))));i++) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,resultData,(*tachyon_internal::decode_func(fn))({tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),i),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"data"),i)})});
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),resultData});
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"add",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)+(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"sub",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)-(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"mul",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)*(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"div",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)/(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"mod",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return std::fmod((x),(y));
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"pow",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"pow")))({Math,x,y});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"matmul",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"binaryTransform")))({self,other,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)*(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"t",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
if((double)(((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"ndim")))({self}))<(2.00000000000000000))){
return self;
}
double rows=tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0);
double cols=tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),1.00000000000000000);
double resultData=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<(cols)));i++) {{
for(double j=0.0;((double)((j)<(rows)));j++) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,resultData,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"get")))({self,tachyon_internal::make_vec(new std::vector<double>({j,i}))})});
(*tachyon_internal::decode_func(print))({j});
(*tachyon_internal::decode_func(print))({tachyon_internal::make_str(new std::string(" "))});
(*tachyon_internal::decode_func(println))({i});
}}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({cols,rows})),resultData});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"matmul",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
double otherTransposed=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"t")))({other});
double resultData=tachyon_internal::make_vec(new std::vector<double>({}));
for(double i=0.0;((double)((i)<(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0))));i++) {{
for(double j=0.0;((double)((j)<(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"shape"),1.00000000000000000))));j++) {{
(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"pushBack")))({VectorUtils,resultData,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"get")))({self,tachyon_internal::make_vec(new std::vector<double>({i}))})),"dot")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"get")))({self,tachyon_internal::make_vec(new std::vector<double>({i}))}),(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(otherTransposed),"get")))({otherTransposed,tachyon_internal::make_vec(new std::vector<double>({j}))})})});
}}
}}
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0),tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(other),"shape"),1.00000000000000000)})),resultData});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"sqrt",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sqrt")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"cbrt",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cbrt")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"log",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"log")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"log2",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"log2")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"log10",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"log10")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"sin",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sin")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"cos",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cos")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tan",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"tan")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"asin",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"asin")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"acos",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"acos")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"atan",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"atan")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"sinh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"sinh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"cosh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"cosh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"tanh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"tanh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"asinh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"asinh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"acosh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"acosh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"atanh",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"transform")))({self,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(Math),"atanh")))({Math,x});
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"sum",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"accumulate")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),0.0,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)+(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"prod",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"accumulate")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),1.00000000000000000,tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double x= _args[0];
double y= _args[1];
{
return (x)*(y);
}
return tachyon_internal::null;
}))});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"mean",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return ((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"sum")))({self}))/((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")}));
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"variance",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
double temp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"sub")))({self,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mean")))({self})});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(temp),"mul")))({temp,temp});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"std",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"variance")))({self})),"sqrt")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"variance")))({self})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"dot",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double other= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,other})),"sum")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"mul")))({self,other})});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"ndim",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape")});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"get",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double idx= _args[1];
{
double idxSize=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,idx});
double selfNdim=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"ndim")))({self});
double idxStart=0.0;
double factor=1.00000000000000000;
for(double i=0.0;((double)((i)<(selfNdim)));i++) {{
if((double)((((selfNdim)-(i))-(1.00000000000000000))<(idxSize))){
idxStart+=((tachyon_internal::get_subscript(idx,((selfNdim)-(i))-(1.00000000000000000)))*(factor));
}
factor*=(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),i));
}}
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(idx),"size")))({idx})),(selfNdim))){
(*tachyon_internal::decode_func(println))({tachyon_internal::make_str(new std::string("!!!"))});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({1.00000000000000000})),tachyon_internal::make_vec(new std::vector<double>({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")),"at")))({tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),idxStart})}))});
}
double offset=1.00000000000000000;
for(double i=idxSize;((double)((i)<(selfNdim)));i++) {{
offset*=(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),i));
}}
double resultShape=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"subvec")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),idxSize,(selfNdim)-(idxSize)});
double resultData=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"subvec")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),idxStart,offset});
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),resultShape,resultData});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"set",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double idx= _args[1];
double val= _args[2];
{
double idxSize=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,idx});
double selfNdim=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"ndim")))({self});
double idxStart=0.0;
double factor=1.00000000000000000;
for(double i=0.0;((double)((i)<(selfNdim)));i++) {{
if((double)((((selfNdim)-(i))-(1.00000000000000000))<(idxSize))){
idxStart+=((tachyon_internal::get_subscript(idx,((selfNdim)-(i))-(1.00000000000000000)))*(factor));
}
factor*=(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),i));
}}
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(typeOf))({val})),(0.0))){
tachyon_internal::set_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),idxStart,(val));
}else{
double offset=1.00000000000000000;
for(double i=idxSize;((double)((i)<(selfNdim)));i++) {{
offset*=(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),i));
}}
double idxEnd=(idxStart)+(offset);
double temp=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"concat")))({VectorUtils,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"subvec")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),0.0,idxStart}),tachyon_internal::get_member(tachyon_internal::decode_obj(val),"data")});
tachyon_internal::set_member(tachyon_internal::decode_obj(self),"data",((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"concat")))({VectorUtils,temp,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"subvec")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data"),idxEnd,((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(VectorUtils),"size")))({VectorUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")}))-(idxEnd)})})));
}
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"reshape",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
double newShape= _args[1];
{
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromShapeAndData")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),newShape,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")});
}
return tachyon_internal::null;
}))));
tachyon_internal::set_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"toString",(tachyon_internal::make_func(new TACHYON_FUNC([=](const std::vector<double>& _args) -> double {
double self= _args[0];
{
if(tachyon_internal::is_eq(((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"ndim")))({self})),(1.00000000000000000))){
return (*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"repr")))({StringUtils,tachyon_internal::get_member(tachyon_internal::decode_obj(self),"data")});
}else{
double result=tachyon_internal::make_str(new std::string("["));
for(double i=0.0;((double)((i)<(tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0))));i++) {{
result=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,result,(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj((*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"get")))({self,tachyon_internal::make_vec(new std::vector<double>({i}))})),"toString")))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"get")))({self,tachyon_internal::make_vec(new std::vector<double>({i}))})})});
if(tachyon_internal::is_ne((i),((tachyon_internal::get_subscript(tachyon_internal::get_member(tachyon_internal::decode_obj(self),"shape"),0.0))-(1.00000000000000000)))){
result=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,result,tachyon_internal::make_str(new std::string(","))});
}else{
result=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(StringUtils),"concat")))({StringUtils,result,tachyon_internal::make_str(new std::string("]"))});
}
}}
return result;
}
}
return tachyon_internal::null;
}))));

double x=(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor")),"fromNested")))({tachyon_internal::get_member(tachyon_internal::decode_obj(NT),"Tensor"),tachyon_internal::make_vec(new std::vector<double>({tachyon_internal::make_vec(new std::vector<double>({1.00000000000000000,2.00000000000000000})),tachyon_internal::make_vec(new std::vector<double>({3.00000000000000000,4.00000000000000000}))}))});
(*tachyon_internal::decode_func(println))({(*tachyon_internal::decode_func(tachyon_internal::get_member(tachyon_internal::decode_obj(x),"get")))({x,tachyon_internal::make_vec(new std::vector<double>({1.00000000000000000,1.00000000000000000}))})});

tachyon_internal::free_all();
return 0;
}