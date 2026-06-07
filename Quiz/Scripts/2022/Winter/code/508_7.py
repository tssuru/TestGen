try:
    
    try:
        print(9, end="")
        print(int(4//3), end="")
        print(7, end="")
    except TypeError: 
        print(3, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(0, end="")
    finally:
        print(9, end="")
    
except: print('error')
