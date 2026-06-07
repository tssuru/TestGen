try:
    
    try:
        print(9, end="")
        print(int(8//0.0), end="")
        print(7, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    except ZeroDivisionError: 
        print(0, end="")
    else:
        print(4, end="")
    finally:
        print(8, end="")
    
except: print('error')
