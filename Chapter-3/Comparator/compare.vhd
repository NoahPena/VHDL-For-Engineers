----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:06:13 02/15/2016 
-- Design Name: 
-- Module Name:    compare - dataflow 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity compare is
    Port ( x : in  STD_LOGIC;
           y : in  STD_LOGIC;
           eq : out  STD_LOGIC);
end compare;

architecture dataflow of compare is

signal x_bar, y_bar : STD_LOGIC;

	begin
		
		x_bar <= not x;
		y_bar <= not y;
		eq <= (x_bar and y_bar) or (x and y);
		
		--eq <= (not x and not y) or (x and y);

end dataflow;

