try:
    
    try:
        print(4, end="")
        print(int(7/3), end="")
        print(3, end="")
    except TypeError: 
        print(2, end="")
    except KeyboardInterrupt: 
        print(1, end="")
    else:
        print(9, end="")
    finally:
        print(0, end="")
    
except: print('error')
