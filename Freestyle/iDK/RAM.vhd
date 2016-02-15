----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:38:56 02/15/2016 
-- Design Name: 
-- Module Name:    RAM - Behavioral 
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
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity RAM is
    Port ( CLK : in  STD_LOGIC;
           WE : in  STD_LOGIC;
           EN : in  STD_LOGIC;
           ADDR : in  STD_LOGIC_VECTOR(5 downto 0);
           DI : in  STD_LOGIC_VECTOR(15 downto 0);
           DO : out  STD_LOGIC_VECTOR(15 downto 0));
end RAM;

architecture Behavioral of RAM is

	type RAM_type is array (63 downto 0) of STD_LOGIC_VECTOR(15 downto 0);
	signal RAM: RAM_type;

begin

	process (CLK)
		begin
		
			if CLK'event and CLK = '1' then
			
				if EN = '1' then
					
						if WE = '1' then
						
							RAM(CONV_INTEGER(ADDR)) <= DI;
							
						end if;
						
						DO <= RAM(CONV_INTEGER(ADDR));
						
					end if;
					
				end if;
				
	end process;


end Behavioral;

