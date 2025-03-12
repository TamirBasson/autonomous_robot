import sys
if sys.prefix == '/usr':
    sys.real_prefix = sys.prefix
    sys.prefix = sys.exec_prefix = '/home/tamir/autonomous_robot/autonomous_robot_control/src/control_hardware/install/control_hardware'
