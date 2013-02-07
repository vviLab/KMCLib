""" Module for the CustomRateCalculator plugin """


# Copyright (c)  2013  Mikael Leetmaa
#
# This file is part of the KMCLib project distributed under the terms of the
# GNU General Public License version 3, see <http://www.gnu.org/licenses/>.
#


from KMCLib.KMCRateCalculatorPlugin import KMCRateCalculatorPlugin

class CustomRateCalculator(KMCRateCalculatorPlugin):
    """ An example of a custom rate calculator plugin. """

    def rate(self, coords, types_before, types_after, rate_constant):
        """ Overloaded API rate function. """
        print "RATE function called in python. XXXXXXX"
        return 136666.45

