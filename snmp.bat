@echo off
setlocal EnableDelayedExpansion

set i=1
FOR /F "tokens=* USEBACKQ" %%F IN (`snmpget -c public -v 1 ipaddress SNMPv2-SMI::enterprises.42.3`) DO (
	SET x=%%F
)
set "x!i!=%x: =" & set /A i+=1 & set "x!i!=%"
echo %x4%
