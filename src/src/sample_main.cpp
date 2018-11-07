#include "../include/Processing_block.h"
//#include "../include/Output_pb_type_caster.cpp"
#include "../include/data_type_headers.h"

template
<typename Data_0>
void Processing_block::user_functions(Data_0 msg, char* topic_name)
{
	
	
	default_data::Msg A;
	
	this->write(&A,"A");	
	
	
}


int main(void)
{
	Processing_block peace;

}
