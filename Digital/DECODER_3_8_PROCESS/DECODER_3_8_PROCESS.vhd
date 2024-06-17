----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:13:15 02/27/2020 
-- Design Name: 
-- Module Name:    DECODER_3_8_PROCESS - Behavioral 
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

entity DECODER_3_8_PROCESS is
    Port ( a : in  STD_LOGIC_VECTOR (2 downto 0);
           b : out  STD_LOGIC_VECTOR (7 downto 0));
end DECODER_3_8_PROCESS;

architecture Behavioral of DECODER_3_8_PROCESS is

begin
process(a)
begin
if (a="000") then
b<="00000001";
elsif (a="001") then
b<="00000010";
elsif (a="010") then
b<="00000100";
elsif (a="011") then
b<="00001000";
elsif (a="100") then
b<="00010000";
elsif (a="101") then
b<="00100000";
elsif (a="110") then
b<="01000000";
elsif (a="111") then
b<="10000000";
end if;
end process;
end Behavioral;

