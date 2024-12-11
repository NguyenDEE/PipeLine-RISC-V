module  brc_tb ();
	//  input
	 logic  [31:0]  i_rs1_data;
	 logic  [31:0]  i_rs2_data;
	 logic          i_br_un;
	//  output;
	  logic  o_br_less;
	  logic  o_br_equal;
brc brc_test (
	.i_rs1_data(i_rs1_data),
	.i_rs2_data(i_rs2_data),
	.i_br_un(i_br_un),
	.o_br_less(o_br_less),
	.o_br_equal(o_br_equal)
);
initial begin
	i_br_un =1'b0;
	i_rs1_data = 32'd0;
	i_rs2_data = 32'd0;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_br_un =1'b0;
	i_rs1_data = 32'd2;
	i_rs2_data = 32'd3;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd3;
	i_rs2_data = 32'd4;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd4;
	i_rs2_data = 32'd6;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);

	i_rs1_data = 32'd6;
	i_rs2_data = 32'd10;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd10;
	i_rs2_data = 32'd8;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	#100;
	i_br_un =1'b1;
	i_rs1_data = 32'hffffffff;
	i_rs2_data = 32'd3;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd3;
	i_rs2_data = 32'd4;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd4;
	i_rs2_data = 32'd6;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);

	i_rs1_data = 32'd6;
	i_rs2_data = 32'd10;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
	i_rs1_data = 32'd10;
	i_rs2_data = 32'd8;
	#50;
	$display("i_rs1 = %h i_rs2= %h i_uns = %h Co less %b Co euqall %b",i_rs1_data,i_rs2_data,i_br_un,o_br_less,o_br_equal);
end
endmodule
