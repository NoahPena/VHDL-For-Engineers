----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:32:08 02/15/2016 
-- Design Name: 
-- Module Name:    stuff - Behavioral 
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



entity stuff is
end stuff;

architecture Behavioral of stuff is

begin


end Behavioral;


------------------------------------------


library ieee;
use ieee.std_logic_1164.all;
use ieee.std_logic_unsigned.all;

entity rams_01 is
    port (CLK  : in std_logic;
          WE   : in std_logic;
          EN   : in std_logic;
          ADDR : in std_logic_vector(5 downto 0);
          DI   : in std_logic_vector(15 downto 0);
          DO   : out std_logic_vector(15 downto 0));
end rams_01;

architecture syn of rams_01 is
    type ram_type is array (63 downto 0) of std_logic_vector (15 downto 0);
    signal RAM: ram_type;
begin

    process (CLK)
    begin
        if CLK'event and CLK = '1' then
            if EN = '1' then
                if WE = '1' then
                    RAM(conv_integer(ADDR)) <= DI;
                end if;
                DO <= RAM(conv_integer(ADDR)) ;
            end if;
        end if;
    end process;

end syn;

	