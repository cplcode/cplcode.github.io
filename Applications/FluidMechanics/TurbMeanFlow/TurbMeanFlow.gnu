# Toolbox to build a composite turbulent velocity profile
# out of interpolations of the universal law of the wall
# and of the particular laws of the wake of various parallel geometries.
# Ref.: P. Luchini, Eur. J. Mech. B/Fluids 71, 15-34 (2018).
# Ref.: P. Luchini, arXiv preprint arXiv:2310.11542 submitted to the Journal of Fluid Mechanics (2023).

# The wake functions exhibit a linear leading term with coefficient 0, 1, 2
# which equals the dimensionless pressure gradient,
# in accordance with P. Luchini, Phys. Rev. Letters 118, 224501 (2017).
#
# TurbMeanFlow.gnu -- Copyright 2018-2023 Paolo Luchini
# http://CPLcode.net/Applications/FluidMechanics/TurbMeanFlow

# Permission is hereby granted, free of charge, to use and copy this software
#  provided the above comments and citations are kept intact.

wall(z)= log ( z + 3.109 ) / 0.392 + 4.48 - ( 7.3736 + ( 0.4930 - 0.02450 * z ) * z ) / ( 1 + ( 0.05736 + 0.01101 * z ) * z ) * exp ( - 0.03385 * z )

dwake(Z)=Z-0.57*Z**7
pwake(Z)=2*Z-0.67*Z**7
epwake(Z)=2*Z-exp(-20.56+33.56*Z-13.41*Z**2)
cwake(Z)=(Z-0.5)/(exp(-25*(Z-0.5))-1)
ocwake(Z)=Z-0.71*Z**3

dmeanu(Rtau)=wall(Rtau)-2.122
pmeanu(Rtau)=wall(Rtau)-3.18
cmeanu(Rtau)=wall(Rtau)-2.68
ocmeanu(Rtau)=wall(Rtau)-2.235
