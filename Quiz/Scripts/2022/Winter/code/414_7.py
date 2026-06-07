try:
    
    try:
        print(6, end="")
        print(int(7//0.0), end="")
        print(2, end="")
    except KeyboardInterrupt: 
        print(0, end="")
    except ZeroDivisionError: 
        print(3, end="")
    else:
        print(1, end="")
    finally:
        print(5, end="")
    
except: print('error')
