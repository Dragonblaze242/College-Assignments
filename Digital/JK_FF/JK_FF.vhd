----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:52:01 02/20/2020 
-- Design Name: 
-- Module Name:    JK_FF - Behavioral 
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

entity JK_FF is
    Port ( j,k,clk : in  STD_LOGIC;
           q,qn : inout  STD_LOGIC);
end JK_FF;

architecture Behavioral of JK_FF is

begin
process(clk,j,k)
begin
if(clk 'event and clk='1') then
if(j='0' and k='0') then 
q<=qn;
qn<=q;
elsif (j='0' and k='1') then
q<='0';
qn<='1';
elsif(j='1' and k='0') then 
q<='1';
qn<='0';
elsif(j='1' and k='1') then
q<=qn;
qn<=q;
end if;
end if;
end process;
end Behavioral;

