try:
    
    try:
        print(4, end="")
        print(int("7"), end="")
        print(9, end="")
    except KeyboardInterrupt: 
        print(3, end="")
    except TypeError: 
        print(1, end="")
    else:
        print(6, end="")
    finally:
        print(0, end="")
    
except: print('error')
