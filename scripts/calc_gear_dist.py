#!/usr/bin/env python3
import argparse

def calc_distance(driver_teeth, driven_teeth, module, tolerance):
    dist = (driver_teeth + driven_teeth) * module / 2 + tolerance
    return round(dist, 2)

if __name__ == "__main__":
    parser = argparse.ArgumentParser()
    parser.add_argument("-d1", "--drvr", required=True)
    parser.add_argument("-d2", "--drvn", required=True)
    parser.add_argument("-m", "--mod", required=True)
    parser.add_argument("-t", "--tolerance", default=0.75)
    
    args = parser.parse_args()
    distance = calc_distance(int(args.drvr), int(args.drvn), float(args.mod), float(args.tolerance))
    print(f"Distance between gears ({args.drvr}T:{args.drvn}T) is {distance}mm", end="\n\n")
    
