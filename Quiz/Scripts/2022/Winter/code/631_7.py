try:
    
    try:
        print(1, end="")
        print(int(6%0.0), end="")
        print(2, end="")
    except TypeError: 
        print(4, end="")
    except KeyboardInterrupt: 
        print(9, end="")
    else:
        print(0, end="")
    finally:
        print(7, end="")
    
except: print('error')
