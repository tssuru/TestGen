try:
    
    try:
        print(4, end="")
        print(int(7//0.0), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except ZeroDivisionError: 
        print(5, end="")
    else:
        print(0, end="")
    finally:
        print(6, end="")
    
except: print('error')
