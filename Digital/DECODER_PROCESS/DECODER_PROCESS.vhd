----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    04:37:37 02/27/2020 
-- Design Name: 
-- Module Name:    DECODER_PROCESS - Behavioral 
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

entity DECODER_PROCESS is
    Port ( a : in  STD_LOGIC_VECTOR (1 downto 0);
           b : out  STD_LOGIC_VECTOR (3 downto 0));
end DECODER_PROCESS;

architecture Behavioral of DECODER_PROCESS is

begin
process(a)
begin
if(a="00") then
b<="0001";
elsif(a="01") then
b<="0010";
elsif(a="10") then
b<="0100";
elsif(a="11") then
b<="1000";
end if;
end process;
end Behavioral;

