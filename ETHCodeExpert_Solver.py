import sys
import re
import random

# Step 0: Read in Cpp Code template
cpp_code = ""
try:
    with open("CPPTemplate.cpp", 'r') as file:
        cpp_code = file.read()

except FileNotFoundError:
    print("CPPTemplate.cpp not found, make sure it is in the same/working directory!")
    exit()

# Step 1: Open file, read in contents into string
grader_output = ""
try:
    with open(sys.argv[1], 'r', encoding="utf8") as file:
        grader_output = file.read()
except FileNotFoundError:
    print("File " + str(sys.argv[1]) + " not found...")
    exit()

# Step 2: Extract all inputs and outputs
ios = []

# Separate cases
cases = re.findall(r'input:\n(?:.|\n)+?actual output:', grader_output)

if len(cases) < 1:
    print("Had some trouble parsing the report, you sure this is the right file?")
    exit()

# Extract input and output from each case:
for case in cases:
    match = re.search(r'input:\n((?:.|\n)+?)expected output:\n((?:.|\n)+?)actual output:', case)
    inp = match.group(1).rstrip(' ').lstrip(' ').rstrip('\n').replace('\n', ' ')
    outp = match.group(2).rstrip(' ').lstrip(' ').rstrip('\n').replace('\n', '\\n')
    ios.append((inp, outp))

# Step 3: Generate cpp code
# Generate inputs and outputs array:

inputs_array = ""
outputs_array = ""
for io in ios:
    inputs_array += (',\n  \"' + io[0] + "\"")
    outputs_array += (',\n  \"' + io[1] + "\"")

inputs_array = inputs_array.lstrip(',\n')
outputs_array = outputs_array.lstrip(',\n')
count = len(ios)
cpp_code = cpp_code.replace("$INPUTS$", inputs_array)
cpp_code = cpp_code.replace("$OUTPUTS$", outputs_array)
cpp_code = cpp_code.replace("$COUNT$", str(count))

# Remove warning:
cpp_code = cpp_code.replace("#### THIS TEMPLATE WILL NOT COMPILE UNTIL POPULATED BY ETHCodeExpert_Solver.py ! ####\n",'')

# Step 4: Save code
with open("CheatyCode.cpp", 'w', encoding="utf-8") as file:
    file.write(cpp_code)

print("Created CheatyCode.cpp!")
msgs = [
    "You dirty cheater!",
    "Exmatriculation dispatched.",
    "\'Very disappointing\' - Prof. Dr. Sarah M. Springman",
    "IP logged & reported.",
    "Student-ID revoked.",
    "You better be doing this only for testing purposes!"]

print(random.choice(msgs))
