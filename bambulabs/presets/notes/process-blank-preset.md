# Process Preset Settings (BLANK)

## Quality

Layer height (mm):
Initial layer height (mm):
Mixed color sublayer (y/n):

### Line Width

Default (mm):
Initial layer (mm):
Outer wall (mm):
Inner wall (mm):
Top surface (mm):
Sparse infill (mm):
Internal solid infill (mm):
Support (mm):

### Seam

Seam position (Nearest, Aligned, Back, Random):
Seam placement away from overhangs(experimental - y/n):
Smart scarf seam application (y/n):
Scarf application angle threshold (deg):
Scarf around entire wall (y/n):
Scarf steps (N):
Scarf joints for inner walls (y/n):
Override filament scarf seam setting (y/n):
Role-based wipe speed (y/n):

### Precision

Slice gap closing radius (mm):
Resolution (mm):
Arc fitting (y/n):
X-Y hole compensation (mm):
X-Y contour compensation (mm):
Auto circle contour-hole compensation (y/n):
Elephant foot compensation (y/n):
Precise Z height (y/n):

### Ironing & Wall Generator

Ironing type (No ironing, top surfaces, topmost surface, all solid layer)
Wall Generator (Classic, Arachne)

### Advanced

Order of walls (inner/outer, outer/inner, inner wall/outer wall/inner wall):
Print infill first (y/n):
Bridge flow (N):
Thick bridges (y/n):
Only one wall on top surfaces (Not applied, Top surfaces, topmost surface):
Only one wall on first layer (y/n):
Smooth speed discontinuity area (y/n):
Smooth coefficient (N):
Avoid crossing wall (y/n):
Smoothing wall speed along Z (Experimental - y/n):

---

## Strength

### Walls

Wall loops (N):
Embedding the wall into the infill (y/n):
Detect thin wall (y/n):

### Top/bottom shells

Top Surface Pattern:
    - Concentric
    - Rectlinear
    - Monotonic
    - Monotonic line
    - Aligned rectlinear
    - Hilbert Curve
    - Archimedean Chords
    - Octogram Spiral

Top surface density (%):
Top shell layers (N):
Top shell thickness (mm)
Top pain penetration layers (N):

Bottom Surface Pattern:
    - Concentric
    - Rectlinear
    - Monotonic
    - Monotonic line
    - Aligned rectlinear
    - Hilbert Curve
    - Archimedean Chords
    - Octogram Spiral

Bottom surface density (%):
Bottom shell layers (N):
Bottom shell thickness (mm)
Bottom pain penetration layers (N):

Internal Solid Infill Pattern:
    - Concentric
    - Rectlinear
    - Monotonic
    - Monotonic line
    - Aligned rectlinear
    - Hilbert Curve
    - Archimedean Chords
    - Octogram Spiral

### Sparse Infill

Sparse infill density (%):
Fill multiline (N):
Sparse Infill Pattern:
    - Concentric
    - Rectlinear
    - Grid
    - Line
    - Cubic
    - Triangles
    - Tri-hexagon
    - Gyroid
    - Honeycomb
    - Adaptive cubic
    - Aligned Rectlinear
    - 3D Honeycomb
    - Hilbert curve
    - Archimedean chords
    - Octogram spiral
    - Support cubic
    - Lightning
    - Cross hatch
    - Zig zag
    - Cross zag
    - Locked zag
    - 2D Lattice

Length of sparse infill anchor (mm or %):
Maximum length of sparse infill anchor (mm or %):

### Advanced

Infill/Wall overlap (%):
Infill direction (deg):
Bridge direction (deg):
Minimum sparse infill threshold (mm^2):
Infill combination (y/n):
Detect narrow internal solid infill (y/n):
Ensure vertical shell thickness (Disabled, Partial, Enabled): 
Detect floating vertical shells (y/n):

---

## Speed

### Initial Layer Speed

Initial layer (mm/s):
Initial layer infill (mm/s):

### Outer Layers Speed

Outer wall (mm/s):
Inner wall (mm/s):
Small perimeters  (mm/s or %):
Small perimerter threshold (m):
Sparse infill (mm/s):
Internal solid infill (mm/s):
Vertical shell speed (mm/s or %):
Top surface (mm/s):
Slow down for overhangs (y/n):
Overhang speed:
    - 0% (mm/s):
    - 25% (mm/s):
    - 50% (mm/s):
    - 75% (mm/s):
    - 100% (mm/s):
Slow down by heigt (y/n):
Bridge (mm/s):
Gap infill (mm/s):
Support (mm/s):
Support interface (mm/s):

### Travel Speed

Travel (mm/s):

### Acceleration

Normal printing (mm/s^2):
Travel (mm/s^2):
Initial layer travel (mm/s^2):
Initial layer (mm/s^2):
Outer wall (mm/s^2):
Inner wall (mm/s^2):
Top surface (mm/s^2):
Sparse infill (mm/s^2 or %):

---

## Support

Enable support (y/n):
Type (Normal Auto, Tree Auto, Normal Manual, Tree Manual):
Style (Default, Tree Slim, Tree Strong, Tree Hybrid, Tree Organic)
Threshold angle (deg):
On build plate only (y/n):
Support critical regions only (y/n):
Remove small overhangs (y/n)

### Raft

Raft layers (N):

### Filament for support 

Support for raft/base (filament):
Support for raft/interface (filament):

### Advanced

Initial layer density (%):
Initial layer expansion (mm):
Support wall loops (N):
Top Z distance (mm):
Bottom Z distance (mm):
Base pattern:
    - Rectlinear
    - Rectlinear grid
    - Honeycomb
    - Lightning
    - Hollow
Base pattern spacing (mm):
Pattern angle (deg):
Top interface layers (N):
Interface pattern:
    - Rectlinear
    - Conecntric
    - Rectlinear interlaced
    - Grid
Top interface spacing (mm):
Normal support expansion (mm):
Support/object xy distance (mm):
Z overrides X/Y (y/n):
Support/object first layer gap (mm):
Max bridge length (mm):
Independent support layer height (mm):

### Tree Support

Branch distance (mm):
Branch diameter (mm):
Branch angle (deg):
Branch diameter angle (deg):

---    

## Others

### Bed Adhesion

Skirt loops (N):
Skirt height (N layers):
Brim type:
    - Auto
    - Painted
    - Outer brim only
    - Inner brim only
    - Outer and inner brim
    - No-brim
Brim width (mm):
Brim-object gap (mm):

### Prime Tower

Enable (y/n):
Skip points (y/n):
Internal ribs (y/n):
Width (mm):
Max speed (mm/s):
Brim width (mm):
Infill gap (%):
Rib wall (y/n):
Extra rib length (mm):
Rib width (mm):
Fillet wall (y/n):

### Purge Options

Purge into objects' infill (y/n):
Purge into objects' support (y/n):

### Special Mode

Slicing mode:
    - Regular
    - Even-odd
    - Close holes
Print sequence:
    - By later
    - By mode
Spiral vase (y/n):
Timelapse:
    - Traditional
    - Smooth
Fuzzy skin:
    - None
    - Contour
    - Contour and hole
    - All walls
    - Disabled
Fuzzy skin generator mode:
    - Displacement
    - Extrusion
    - Combined
Fuzzy skin noise type:
    - Classic
    - Perlin
    - Billow
    - Ridged Multifractal
    - Voronoi
Fuzzy skin point distance (mm):
Fuzzy skin thickness (mm):
Apply fuzzy skin to first layer (y/n):

### Advanced

Enable clumping detection by probing (y/n):
Use beam interlocking (y/n):
Interlocking depth of a segmented region (mm):


