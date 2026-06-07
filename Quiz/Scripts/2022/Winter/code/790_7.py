try:
    
    try:
        print(6, end="")
        print(int(7//0.0), end="")
        print(8, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    except TypeError: 
        print(2, end="")
    else:
        print(0, end="")
    finally:
        print(4, end="")
    
except: print('error')
