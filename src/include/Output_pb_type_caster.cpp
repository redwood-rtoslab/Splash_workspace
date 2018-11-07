#include "data_type_headers.h"
#include "Processing_block.h"
#include <string.h>
#pragma once
void Processing_block::write(void* data, char* Output_topic_name)
{
	printf("entered write\n");

	if(strcmp("Test",Output_topic_name))
	{	
		output_port<default_data::Msg>* user_output_port = (output_port<default_data::Msg>*)(this->get_output_port(Output_topic_name));
		default_data::Msg* output_data = (default_data::Msg*)data;
		user_output_port->write(*output_data);
			
	}


}

